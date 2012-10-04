#include "layout.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::LaidOutElement::LaidOutElement() :
    MeiElement("laidOutElement"),
    m_Common(this),
    m_Pointing(this),
    m_Coordinated(this),
    m_Ignore(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetVo(this),
    m_Visualoffset2Ho(this),
    m_Visualoffset2Vo(this)
{
}
REGISTER_DEFINITION(mei::LaidOutElement, "laidOutElement");
mei::LaidOutElement::~LaidOutElement() {}
mei::LaidOutElement::LaidOutElement(const LaidOutElement& other) :
    MeiElement(other),
    m_Common(this),
    m_Pointing(this),
    m_Coordinated(this),
    m_Ignore(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetVo(this),
    m_Visualoffset2Ho(this),
    m_Visualoffset2Vo(this)
{
}

/* include <laidOutElement> */

mei::LaidOutLayer::LaidOutLayer() :
    MeiElement("laidOutLayer"),
    m_Common(this),
    m_Pointing(this),
    m_Coordinated(this),
    m_Staffident(this),
    m_Layerident(this),
    m_CleffingLog(this),
    m_Transposition(this),
    m_StaffDefVis(this),
    m_CleffingVis(this),
    m_Distances(this),
    m_KeySigDefaultVis(this),
    m_LabelsAddl(this),
    m_Lyricstyle(this),
    m_MeterSigDefaultVis(this),
    m_Multinummeasures(this),
    m_Onelinestaff(this),
    m_Scalable(this),
    m_Textstyle(this),
    m_Visibility(this),
    m_BeamingVis(this),
    m_Pianopedals(this),
    m_Rehearsal(this),
    m_Slurrend(this),
    m_Tierend(this),
    m_MensurDefaultVis(this)
{
}
REGISTER_DEFINITION(mei::LaidOutLayer, "laidOutLayer");
mei::LaidOutLayer::~LaidOutLayer() {}
mei::LaidOutLayer::LaidOutLayer(const LaidOutLayer& other) :
    MeiElement(other),
    m_Common(this),
    m_Pointing(this),
    m_Coordinated(this),
    m_Staffident(this),
    m_Layerident(this),
    m_CleffingLog(this),
    m_Transposition(this),
    m_StaffDefVis(this),
    m_CleffingVis(this),
    m_Distances(this),
    m_KeySigDefaultVis(this),
    m_LabelsAddl(this),
    m_Lyricstyle(this),
    m_MeterSigDefaultVis(this),
    m_Multinummeasures(this),
    m_Onelinestaff(this),
    m_Scalable(this),
    m_Textstyle(this),
    m_Visibility(this),
    m_BeamingVis(this),
    m_Pianopedals(this),
    m_Rehearsal(this),
    m_Slurrend(this),
    m_Tierend(this),
    m_MensurDefaultVis(this)
{
}

/* include <laidOutLayer> */

mei::LaidOutStaff::LaidOutStaff() :
    MeiElement("laidOutStaff"),
    m_Common(this),
    m_Coordinated(this),
    m_VisualoffsetVo(this),
    m_Visualoffset2Ho(this),
    m_Staffident(this),
    m_Typed(this),
    m_CleffingLog(this),
    m_Transposition(this),
    m_StaffDefVis(this),
    m_CleffingVis(this),
    m_Distances(this),
    m_KeySigDefaultVis(this),
    m_LabelsAddl(this),
    m_Lyricstyle(this),
    m_MeterSigDefaultVis(this),
    m_Multinummeasures(this),
    m_Onelinestaff(this),
    m_Scalable(this),
    m_Textstyle(this),
    m_Visibility(this),
    m_BeamingVis(this),
    m_Pianopedals(this),
    m_Rehearsal(this),
    m_Slurrend(this),
    m_Tierend(this),
    m_MensurDefaultVis(this)
{
}
REGISTER_DEFINITION(mei::LaidOutStaff, "laidOutStaff");
mei::LaidOutStaff::~LaidOutStaff() {}
mei::LaidOutStaff::LaidOutStaff(const LaidOutStaff& other) :
    MeiElement(other),
    m_Common(this),
    m_Coordinated(this),
    m_VisualoffsetVo(this),
    m_Visualoffset2Ho(this),
    m_Staffident(this),
    m_Typed(this),
    m_CleffingLog(this),
    m_Transposition(this),
    m_StaffDefVis(this),
    m_CleffingVis(this),
    m_Distances(this),
    m_KeySigDefaultVis(this),
    m_LabelsAddl(this),
    m_Lyricstyle(this),
    m_MeterSigDefaultVis(this),
    m_Multinummeasures(this),
    m_Onelinestaff(this),
    m_Scalable(this),
    m_Textstyle(this),
    m_Visibility(this),
    m_BeamingVis(this),
    m_Pianopedals(this),
    m_Rehearsal(this),
    m_Slurrend(this),
    m_Tierend(this),
    m_MensurDefaultVis(this)
{
}

/* include <laidOutStaff> */

mei::Layout::Layout() :
    MeiElement("layout"),
    m_Common(this),
    m_Declaring(this),
    m_Source(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Layout, "layout");
mei::Layout::~Layout() {}
mei::Layout::Layout(const Layout& other) :
    MeiElement(other),
    m_Common(this),
    m_Declaring(this),
    m_Source(this),
    m_Typed(this)
{
}

/* include <layout> */

mei::Layouts::Layouts() :
    MeiElement("layouts"),
    m_Common(this)
{
}
REGISTER_DEFINITION(mei::Layouts, "layouts");
mei::Layouts::~Layouts() {}
mei::Layouts::Layouts(const Layouts& other) :
    MeiElement(other),
    m_Common(this)
{
}

/* include <layouts> */

mei::Mb::Mb() :
    MeiElement("mb"),
    m_Common(this),
    m_Barline(this),
    m_VisualoffsetHo(this),
    m_MeasureRef(this)
{
}
REGISTER_DEFINITION(mei::Mb, "mb");
mei::Mb::~Mb() {}
mei::Mb::Mb(const Mb& other) :
    MeiElement(other),
    m_Common(this),
    m_Barline(this),
    m_VisualoffsetHo(this),
    m_MeasureRef(this)
{
}

/* include <mb> */

mei::Page::Page() :
    MeiElement("page"),
    m_ScoreDefVis(this),
    m_Barplacement(this),
    m_CleffingVis(this),
    m_Distances(this),
    m_KeySigDefaultVis(this),
    m_Lyricstyle(this),
    m_MeterSigDefaultVis(this),
    m_Multinummeasures(this),
    m_Onelinestaff(this),
    m_Textstyle(this),
    m_ScoreDefVisCmn(this),
    m_BeamingVis(this),
    m_Pianopedals(this),
    m_Rehearsal(this),
    m_Slurrend(this),
    m_Tierend(this),
    m_MensurDefaultVis(this),
    m_Common(this),
    m_PageRef(this),
    m_Surface(this)
{
}
REGISTER_DEFINITION(mei::Page, "page");
mei::Page::~Page() {}
mei::Page::Page(const Page& other) :
    MeiElement(other),
    m_ScoreDefVis(this),
    m_Barplacement(this),
    m_CleffingVis(this),
    m_Distances(this),
    m_KeySigDefaultVis(this),
    m_Lyricstyle(this),
    m_MeterSigDefaultVis(this),
    m_Multinummeasures(this),
    m_Onelinestaff(this),
    m_Textstyle(this),
    m_ScoreDefVisCmn(this),
    m_BeamingVis(this),
    m_Pianopedals(this),
    m_Rehearsal(this),
    m_Slurrend(this),
    m_Tierend(this),
    m_MensurDefaultVis(this),
    m_Common(this),
    m_PageRef(this),
    m_Surface(this)
{
}

/* include <page> */

mei::System::System() :
    MeiElement("system"),
    m_ScoreDefVis(this),
    m_Barplacement(this),
    m_CleffingVis(this),
    m_Distances(this),
    m_KeySigDefaultVis(this),
    m_Lyricstyle(this),
    m_MeterSigDefaultVis(this),
    m_Multinummeasures(this),
    m_Onelinestaff(this),
    m_Textstyle(this),
    m_ScoreDefVisCmn(this),
    m_BeamingVis(this),
    m_Pianopedals(this),
    m_Rehearsal(this),
    m_Slurrend(this),
    m_Tierend(this),
    m_MensurDefaultVis(this),
    m_Common(this),
    m_SystemRef(this),
    m_Coordinated(this),
    m_VisualoffsetVo(this),
    m_Visualoffset2Ho(this)
{
}
REGISTER_DEFINITION(mei::System, "system");
mei::System::~System() {}
mei::System::System(const System& other) :
    MeiElement(other),
    m_ScoreDefVis(this),
    m_Barplacement(this),
    m_CleffingVis(this),
    m_Distances(this),
    m_KeySigDefaultVis(this),
    m_Lyricstyle(this),
    m_MeterSigDefaultVis(this),
    m_Multinummeasures(this),
    m_Onelinestaff(this),
    m_Textstyle(this),
    m_ScoreDefVisCmn(this),
    m_BeamingVis(this),
    m_Pianopedals(this),
    m_Rehearsal(this),
    m_Slurrend(this),
    m_Tierend(this),
    m_MensurDefaultVis(this),
    m_Common(this),
    m_SystemRef(this),
    m_Coordinated(this),
    m_VisualoffsetVo(this),
    m_Visualoffset2Ho(this)
{
}

/* include <system> */



