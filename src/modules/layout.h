/*
    Copyright (c) 2011-2012 Andrew Hankinson, Alastair Porter, and Others
    
    Permission is hereby granted, free of charge, to any person obtaining
    a copy of this software and associated documentation files (the
    "Software"), to deal in the Software without restriction, including
    without limitation the rights to use, copy, modify, merge, publish,
    distribute, sublicense, and/or sell copies of the Software, and to
    permit persons to whom the Software is furnished to do so, subject to
    the following conditions:
    
    The above copyright notice and this permission notice shall be
    included in all copies or substantial portions of the Software.
    
    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
    NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
    LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
    OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
    WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#ifndef LAYOUT_H_
#define LAYOUT_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "sharedmixins.h"
#include "layoutmixins.h"
#include "cmnmixins.h"
#include "mensuralmixins.h"
#include "critappmixins.h"


namespace mei {
/** \brief laidOutElement - @target is used to point to the element in the logical tree
 *  that is described here.
 * 
 *  The @staff and @layer attributes may be used to move an element to another staff
 *  or layer _in the layout tree_.
 */
class MEI_EXPORT LaidOutElement : public MeiElement {
    public:
        LaidOutElement();
        LaidOutElement(const LaidOutElement& other);
        virtual ~LaidOutElement();

/* include <laidOutElement> */

        CommonMixIn    m_Common;
        PointingMixIn    m_Pointing;
        CoordinatedMixIn    m_Coordinated;
        IgnoreMixIn    m_Ignore;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        Visualoffset2HoMixIn    m_Visualoffset2Ho;
        Visualoffset2VoMixIn    m_Visualoffset2Vo;

    private:
        REGISTER_DECLARATION(LaidOutElement);
};

/** \brief laidOutLayer - @staff may be used to override the parent's @staff.
 */
class MEI_EXPORT LaidOutLayer : public MeiElement {
    public:
        LaidOutLayer();
        LaidOutLayer(const LaidOutLayer& other);
        virtual ~LaidOutLayer();

/* include <laidOutLayer> */

        CommonMixIn    m_Common;
        PointingMixIn    m_Pointing;
        CoordinatedMixIn    m_Coordinated;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        CleffingLogMixIn    m_CleffingLog;
        TranspositionMixIn    m_Transposition;
        StaffDefVisMixIn    m_StaffDefVis;
        CleffingVisMixIn    m_CleffingVis;
        DistancesMixIn    m_Distances;
        KeySigDefaultVisMixIn    m_KeySigDefaultVis;
        LabelsAddlMixIn    m_LabelsAddl;
        LyricstyleMixIn    m_Lyricstyle;
        MeterSigDefaultVisMixIn    m_MeterSigDefaultVis;
        MultinummeasuresMixIn    m_Multinummeasures;
        OnelinestaffMixIn    m_Onelinestaff;
        ScalableMixIn    m_Scalable;
        TextstyleMixIn    m_Textstyle;
        VisibilityMixIn    m_Visibility;
        BeamingVisMixIn    m_BeamingVis;
        PianopedalsMixIn    m_Pianopedals;
        RehearsalMixIn    m_Rehearsal;
        SlurrendMixIn    m_Slurrend;
        TierendMixIn    m_Tierend;
        MensurDefaultVisMixIn    m_MensurDefaultVis;

    private:
        REGISTER_DECLARATION(LaidOutLayer);
};

/** \brief laidOutStaff - @staff is used to pick a staff by its @n from the logical tree
 */
class MEI_EXPORT LaidOutStaff : public MeiElement {
    public:
        LaidOutStaff();
        LaidOutStaff(const LaidOutStaff& other);
        virtual ~LaidOutStaff();

/* include <laidOutStaff> */

        CommonMixIn    m_Common;
        CoordinatedMixIn    m_Coordinated;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        Visualoffset2HoMixIn    m_Visualoffset2Ho;
        StaffidentMixIn    m_Staffident;
        TypedMixIn    m_Typed;
        CleffingLogMixIn    m_CleffingLog;
        TranspositionMixIn    m_Transposition;
        StaffDefVisMixIn    m_StaffDefVis;
        CleffingVisMixIn    m_CleffingVis;
        DistancesMixIn    m_Distances;
        KeySigDefaultVisMixIn    m_KeySigDefaultVis;
        LabelsAddlMixIn    m_LabelsAddl;
        LyricstyleMixIn    m_Lyricstyle;
        MeterSigDefaultVisMixIn    m_MeterSigDefaultVis;
        MultinummeasuresMixIn    m_Multinummeasures;
        OnelinestaffMixIn    m_Onelinestaff;
        ScalableMixIn    m_Scalable;
        TextstyleMixIn    m_Textstyle;
        VisibilityMixIn    m_Visibility;
        BeamingVisMixIn    m_BeamingVis;
        PianopedalsMixIn    m_Pianopedals;
        RehearsalMixIn    m_Rehearsal;
        SlurrendMixIn    m_Slurrend;
        TierendMixIn    m_Tierend;
        MensurDefaultVisMixIn    m_MensurDefaultVis;

    private:
        REGISTER_DECLARATION(LaidOutStaff);
};

/** \brief layout - The @type attribute should be used to indicate the purpose of this
 *  layout.
 * 
 *  Recommended values are 'transcription' and 'rendering'.
 */
class MEI_EXPORT Layout : public MeiElement {
    public:
        Layout();
        Layout(const Layout& other);
        virtual ~Layout();

/* include <layout> */

        CommonMixIn    m_Common;
        DeclaringMixIn    m_Declaring;
        SourceMixIn    m_Source;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Layout);
};

/** \brief layouts - Container element for layout elements
 */
class MEI_EXPORT Layouts : public MeiElement {
    public:
        Layouts();
        Layouts(const Layouts& other);
        virtual ~Layouts();

/* include <layouts> */

        CommonMixIn    m_Common;

    private:
        REGISTER_DECLARATION(Layouts);
};

/** \brief mb - (measure break)
 */
class MEI_EXPORT Mb : public MeiElement {
    public:
        Mb();
        Mb(const Mb& other);
        virtual ~Mb();

/* include <mb> */

        CommonMixIn    m_Common;
        BarlineMixIn    m_Barline;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        MeasureRefMixIn    m_MeasureRef;

    private:
        REGISTER_DECLARATION(Mb);
};

/** \brief page -
 */
class MEI_EXPORT Page : public MeiElement {
    public:
        Page();
        Page(const Page& other);
        virtual ~Page();

/* include <page> */

        ScoreDefVisMixIn    m_ScoreDefVis;
        BarplacementMixIn    m_Barplacement;
        CleffingVisMixIn    m_CleffingVis;
        DistancesMixIn    m_Distances;
        KeySigDefaultVisMixIn    m_KeySigDefaultVis;
        LyricstyleMixIn    m_Lyricstyle;
        MeterSigDefaultVisMixIn    m_MeterSigDefaultVis;
        MultinummeasuresMixIn    m_Multinummeasures;
        OnelinestaffMixIn    m_Onelinestaff;
        TextstyleMixIn    m_Textstyle;
        ScoreDefVisCmnMixIn    m_ScoreDefVisCmn;
        BeamingVisMixIn    m_BeamingVis;
        PianopedalsMixIn    m_Pianopedals;
        RehearsalMixIn    m_Rehearsal;
        SlurrendMixIn    m_Slurrend;
        TierendMixIn    m_Tierend;
        MensurDefaultVisMixIn    m_MensurDefaultVis;
        CommonMixIn    m_Common;
        PageRefMixIn    m_PageRef;
        SurfaceMixIn    m_Surface;

    private:
        REGISTER_DECLARATION(Page);
};

/** \brief system -
 */
class MEI_EXPORT System : public MeiElement {
    public:
        System();
        System(const System& other);
        virtual ~System();

/* include <system> */

        ScoreDefVisMixIn    m_ScoreDefVis;
        BarplacementMixIn    m_Barplacement;
        CleffingVisMixIn    m_CleffingVis;
        DistancesMixIn    m_Distances;
        KeySigDefaultVisMixIn    m_KeySigDefaultVis;
        LyricstyleMixIn    m_Lyricstyle;
        MeterSigDefaultVisMixIn    m_MeterSigDefaultVis;
        MultinummeasuresMixIn    m_Multinummeasures;
        OnelinestaffMixIn    m_Onelinestaff;
        TextstyleMixIn    m_Textstyle;
        ScoreDefVisCmnMixIn    m_ScoreDefVisCmn;
        BeamingVisMixIn    m_BeamingVis;
        PianopedalsMixIn    m_Pianopedals;
        RehearsalMixIn    m_Rehearsal;
        SlurrendMixIn    m_Slurrend;
        TierendMixIn    m_Tierend;
        MensurDefaultVisMixIn    m_MensurDefaultVis;
        CommonMixIn    m_Common;
        SystemRefMixIn    m_SystemRef;
        CoordinatedMixIn    m_Coordinated;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        Visualoffset2HoMixIn    m_Visualoffset2Ho;

    private:
        REGISTER_DECLARATION(System);
};
}
#endif  // LAYOUT_H_
