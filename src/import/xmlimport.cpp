//
//  xmlimport.cpp
//  libmei
//
//  Created by Andrew Hankinson on 11-08-18.
//  Copyright 2011 McGill University. All rights reserved.
//

#include <string>
#include <vector>
#include <stdio.h>
#include <libxml/xmlreader.h>

#include "xmlimport_impl.h"
#include "xmlimport.h"
#include "meidocument.h"
#include "meixml.h"

#include <iostream>

using std::string;
using std::vector;

using mei::MeiDocument;
using mei::MeiElement;
using mei::MeiFactory;
using mei::XmlImport;
using mei::XmlImportImpl;
using mei::XmlInstructions;
using mei::XmlProcessingInstruction;

XmlImport::XmlImport() : impl(new XmlImportImpl) {
}

XmlImport::~XmlImport() {
    delete impl;
}

MeiDocument* XmlImport::documentFromFile(string filename) {
    XmlImport *import = new XmlImport();
    MeiDocument *d = import->impl->documentFromFile(filename);
    delete import;
    return d;
}

MeiDocument* XmlImport::documentFromFile(std::string filename, XmlInstructions &inst) {
    XmlImport *import = new XmlImport();
    MeiDocument *d = import->impl->documentFromFile(filename);
    inst = import->impl->pi;
    
    delete import;
    return d;
    
}

MeiDocument* XmlImport::documentFromText(string text) {
    XmlImport *import = new XmlImport();
    MeiDocument *d = import->impl->documentFromText(text);
    delete import;
    return d;
}

MeiDocument* XmlImport::documentFromText(string text, XmlInstructions &inst) {
    XmlImport *import = new XmlImport();
    MeiDocument *d = import->impl->documentFromText(text);
    inst = import->impl->pi;
    
    delete import;
    return d;
}

XmlImportImpl::XmlImportImpl() {
    rootXmlNode = NULL;
    xmlMeiDocument = NULL;
    meiDocument = NULL;
    rootMeiElement = NULL;
}

MeiDocument* XmlImportImpl::documentFromFile(string filename) {
    xmlDocPtr doc = NULL;
    /* XML_PARSE_NOERROR will simply suppress the libxml error messages on malformed XML,
        it won't actually stop it from parsing. */
    doc = xmlReadFile(filename.c_str(), NULL, XML_PARSE_NOERROR | XML_PARSE_NONET | XML_PARSE_NOWARNING);

    if (doc == NULL) {
        throw MalformedFileException(filename);
    }
    
    xmlNodePtr child = doc->children;
    while (child != NULL) {
        if (child->type == XML_PI_NODE) {
            XmlProcessingInstruction *xpi = new XmlProcessingInstruction((const char*)child->name, (const char*)child->content);
            this->pi.push_back(xpi);            
        }
        child = child->next;
    }
    
    this->xmlMeiDocument = doc;
    this->rootXmlNode = xmlDocGetRootElement(this->xmlMeiDocument);

    if (this->checkCompatibility(this->rootXmlNode)) {
        this->init();
        return this->getMeiDocument();
    }
    return NULL;
}

MeiDocument* XmlImportImpl::documentFromText(string text) {
    xmlDoc *doc = NULL;
    int options = XML_PARSE_NONET | XML_PARSE_RECOVER | XML_PARSE_NOWARNING;
    doc = xmlReadMemory(text.c_str(), text.length(), NULL, NULL, options);
    
    xmlNodePtr child = doc->children;
    while (child != NULL) {
        if (child->type == XML_PI_NODE) {
            XmlProcessingInstruction *xpi = new XmlProcessingInstruction((const char*)child->name, (const char*)child->content);
            this->pi.push_back(xpi);            
        }
        child = child->next;
    }
    
    this->xmlMeiDocument = doc;
    this->rootXmlNode = xmlDocGetRootElement(this->xmlMeiDocument);

    if (this->checkCompatibility(this->rootXmlNode)) {
        this->init();        
        return this->meiDocument;
    }
    return NULL;
}

void XmlImportImpl::init() {
    // get mei version from document
    xmlAttrPtr meiversAttr = xmlHasProp(this->rootXmlNode, (const xmlChar*)"meiversion");
    string meiVersion = string((const char*)meiversAttr->children->content);
    
    MeiDocument *doc = new MeiDocument(meiVersion);
    this->meiDocument = doc;

    this->rootMeiElement = this->xmlNodeToMeiElement(this->rootXmlNode);
    doc->setRootElement(this->rootMeiElement);
}

mei::XmlImportImpl::~XmlImportImpl() {
    if (xmlMeiDocument) {
        xmlFreeDoc(xmlMeiDocument);
    }
}

MeiDocument* XmlImportImpl::getMeiDocument() {
    return this->meiDocument;
}

MeiElement* XmlImportImpl::xmlNodeToMeiElement(xmlNode *el) {
    string id = "";
    vector<MeiAttribute*> attributes;
    // XML attributes and children. Text nodes will never have these.
    if (el->properties) {
        xmlAttr *curattr = NULL;
        for (curattr = el->properties; curattr; curattr = curattr->next) {
            if (curattr->atype == XML_ATTRIBUTE_ID) {
                /* we store the ID on the element, not as an attribute. This will be serialized out
                 *   on export
                 */
                id = (const char*)curattr->children->content;
            } else {
                string attrname = (const char*)curattr->name;
                // values are rendered as children of the attribute *facepalm*
                string attrvalue = (const char*)curattr->children->content;

                MeiNamespace* meins = NULL;
                if (curattr->ns) {
                    if (!this->meiDocument->hasNamespace(string((const char*)curattr->ns->href))) {
                        string prefix = (const char*)curattr->ns->prefix;
                        string href = (const char*)curattr->ns->href;
                        meins = new MeiNamespace(prefix, href);
                    } else {
                        meins = this->meiDocument->getNamespace(string((const char*)curattr->ns->href));
                    }
                }
                MeiAttribute *a = new MeiAttribute(meins, attrname, attrvalue);

                attributes.push_back(a);
            }
        }
    }
    std::cout << el->name << std::endl;
    MeiElement *obj = MeiFactory::createInstance((const char*)el->name, id);
    obj->setAttributes(attributes);

    MeiElement *lastElement = NULL;
    xmlNodePtr child = el->children;
    while (child != NULL) {
        if (child->type == XML_ELEMENT_NODE) {
            MeiElement* ch = xmlNodeToMeiElement(child);
            obj->addChild(ch);
            lastElement = ch;
        } else if (child->type == XML_TEXT_NODE) {
            if (lastElement) {
                const char *content = (const char*)child->content;
                if (content) {
                    lastElement->setTail(content);
                }
            } else {
                const char *content = (const char*)child->content;
                if (content) {
                    obj->setValue(content);
                }
            }
        } else if (child->type == XML_COMMENT_NODE) {
            MeiElement *comment = new MeiCommentNode();
            comment->setValue(string((const char*)child->content));
            obj->addChild(comment);
        }
        child = child->next;
    }
    return obj;
}

bool XmlImportImpl::checkCompatibility(xmlNode *r) throw(NoVersionFoundException, VersionMismatchException) {
    xmlAttrPtr meivers = xmlHasProp(r, (const xmlChar*)"meiversion");
    if (meivers == NULL) {
        throw NoVersionFoundException("");
    } else if (MEI_VERSION.find(string((const char*)meivers->children->content)) == MEI_VERSION.end()) {
        throw VersionMismatchException(string((const char*)meivers->children->content));
    } else {
        return true;
    }
}
