#include "critappmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::CritMixIn::CritMixIn(MeiElement *b) {
    this->b = b;
};

mei::CritMixIn::~CritMixIn() {}
MeiAttribute* mei::CritMixIn::getCause() {
    if (!b->hasAttribute("cause")) {
        throw AttributeNotFoundException("cause");
    }
    return b->getAttribute("cause");
};

void mei::CritMixIn::setCause(std::string _cause) {
    MeiAttribute *a = new MeiAttribute("cause", _cause);
    b->addAttribute(a);
};

bool mei::CritMixIn::hasCause() {
    return b->hasAttribute("cause");
};

void mei::CritMixIn::removeCause() {
    b->removeAttribute("cause");
};

/* include <causemixin> */
mei::SourceMixIn::SourceMixIn(MeiElement *b) {
    this->b = b;
};

mei::SourceMixIn::~SourceMixIn() {}
MeiAttribute* mei::SourceMixIn::getSource() {
    if (!b->hasAttribute("source")) {
        throw AttributeNotFoundException("source");
    }
    return b->getAttribute("source");
};

void mei::SourceMixIn::setSource(std::string _source) {
    MeiAttribute *a = new MeiAttribute("source", _source);
    b->addAttribute(a);
};

bool mei::SourceMixIn::hasSource() {
    return b->hasAttribute("source");
};

void mei::SourceMixIn::removeSource() {
    b->removeAttribute("source");
};

/* include <sourcemixin> */


