#include "layoutmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::BarlineMixIn::BarlineMixIn(MeiElement *b) {
    this->b = b;
};

mei::BarlineMixIn::~BarlineMixIn() {}
MeiAttribute* mei::BarlineMixIn::getBarline() {
    if (!b->hasAttribute("barline")) {
        throw AttributeNotFoundException("barline");
    }
    return b->getAttribute("barline");
};

void mei::BarlineMixIn::setBarline(std::string _barline) {
    MeiAttribute *a = new MeiAttribute("barline", _barline);
    b->addAttribute(a);
};

bool mei::BarlineMixIn::hasBarline() {
    return b->hasAttribute("barline");
};

void mei::BarlineMixIn::removeBarline() {
    b->removeAttribute("barline");
};

/* include <barlinemixin> */
mei::IgnoreMixIn::IgnoreMixIn(MeiElement *b) {
    this->b = b;
};

mei::IgnoreMixIn::~IgnoreMixIn() {}
MeiAttribute* mei::IgnoreMixIn::getIgnored() {
    if (!b->hasAttribute("ignored")) {
        throw AttributeNotFoundException("ignored");
    }
    return b->getAttribute("ignored");
};

void mei::IgnoreMixIn::setIgnored(std::string _ignored) {
    MeiAttribute *a = new MeiAttribute("ignored", _ignored);
    b->addAttribute(a);
};

bool mei::IgnoreMixIn::hasIgnored() {
    return b->hasAttribute("ignored");
};

void mei::IgnoreMixIn::removeIgnored() {
    b->removeAttribute("ignored");
};

/* include <ignoredmixin> */
mei::LayoutMixIn::LayoutMixIn(MeiElement *b) {
    this->b = b;
};

mei::LayoutMixIn::~LayoutMixIn() {}
MeiAttribute* mei::LayoutMixIn::getIgnored() {
    if (!b->hasAttribute("ignored")) {
        throw AttributeNotFoundException("ignored");
    }
    return b->getAttribute("ignored");
};

void mei::LayoutMixIn::setIgnored(std::string _ignored) {
    MeiAttribute *a = new MeiAttribute("ignored", _ignored);
    b->addAttribute(a);
};

bool mei::LayoutMixIn::hasIgnored() {
    return b->hasAttribute("ignored");
};

void mei::LayoutMixIn::removeIgnored() {
    b->removeAttribute("ignored");
};

/* include <ignoredmixin> */
mei::MeasureRefMixIn::MeasureRefMixIn(MeiElement *b) {
    this->b = b;
};

mei::MeasureRefMixIn::~MeasureRefMixIn() {}
MeiAttribute* mei::MeasureRefMixIn::getMeasureref() {
    if (!b->hasAttribute("measureref")) {
        throw AttributeNotFoundException("measureref");
    }
    return b->getAttribute("measureref");
};

void mei::MeasureRefMixIn::setMeasureref(std::string _measureref) {
    MeiAttribute *a = new MeiAttribute("measureref", _measureref);
    b->addAttribute(a);
};

bool mei::MeasureRefMixIn::hasMeasureref() {
    return b->hasAttribute("measureref");
};

void mei::MeasureRefMixIn::removeMeasureref() {
    b->removeAttribute("measureref");
};

/* include <measurerefmixin> */
mei::PageRefMixIn::PageRefMixIn(MeiElement *b) {
    this->b = b;
};

mei::PageRefMixIn::~PageRefMixIn() {}
MeiAttribute* mei::PageRefMixIn::getPbrefs() {
    if (!b->hasAttribute("pbrefs")) {
        throw AttributeNotFoundException("pbrefs");
    }
    return b->getAttribute("pbrefs");
};

void mei::PageRefMixIn::setPbrefs(std::string _pbrefs) {
    MeiAttribute *a = new MeiAttribute("pbrefs", _pbrefs);
    b->addAttribute(a);
};

bool mei::PageRefMixIn::hasPbrefs() {
    return b->hasAttribute("pbrefs");
};

void mei::PageRefMixIn::removePbrefs() {
    b->removeAttribute("pbrefs");
};

/* include <pbrefsmixin> */
mei::SurfaceMixIn::SurfaceMixIn(MeiElement *b) {
    this->b = b;
};

mei::SurfaceMixIn::~SurfaceMixIn() {}
MeiAttribute* mei::SurfaceMixIn::getSurface() {
    if (!b->hasAttribute("surface")) {
        throw AttributeNotFoundException("surface");
    }
    return b->getAttribute("surface");
};

void mei::SurfaceMixIn::setSurface(std::string _surface) {
    MeiAttribute *a = new MeiAttribute("surface", _surface);
    b->addAttribute(a);
};

bool mei::SurfaceMixIn::hasSurface() {
    return b->hasAttribute("surface");
};

void mei::SurfaceMixIn::removeSurface() {
    b->removeAttribute("surface");
};

/* include <surfacemixin> */
mei::SystemRefMixIn::SystemRefMixIn(MeiElement *b) {
    this->b = b;
};

mei::SystemRefMixIn::~SystemRefMixIn() {}
MeiAttribute* mei::SystemRefMixIn::getSbrefs() {
    if (!b->hasAttribute("sbrefs")) {
        throw AttributeNotFoundException("sbrefs");
    }
    return b->getAttribute("sbrefs");
};

void mei::SystemRefMixIn::setSbrefs(std::string _sbrefs) {
    MeiAttribute *a = new MeiAttribute("sbrefs", _sbrefs);
    b->addAttribute(a);
};

bool mei::SystemRefMixIn::hasSbrefs() {
    return b->hasAttribute("sbrefs");
};

void mei::SystemRefMixIn::removeSbrefs() {
    b->removeAttribute("sbrefs");
};

/* include <sbrefsmixin> */


