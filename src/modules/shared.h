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

#ifndef SHARED_H_
#define SHARED_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "sharedmixins.h"
#include "facsimilemixins.h"
#include "mensuralmixins.h"
#include "analysismixins.h"
#include "linkalignmixins.h"
#include "critappmixins.h"
#include "cmnmixins.h"
#include "cmnornamentsmixins.h"
#include "edittransmixins.h"
#include "midimixins.h"
#include "tablaturemixins.h"
#include "layoutmixins.h"
#include <string>


namespace mei {
/** \brief (accidental) – Records a temporary alteration to the pitch of a note.
 */
class MEI_EXPORT Accid : public MeiElement {
    public:
        Accid();
        Accid(const Accid& other);
        virtual ~Accid();

/* include <accid> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        TypographyMixIn    m_Typography;
        AccidLogMixIn    m_AccidLog;
        AccidentalMixIn    m_Accidental;
        PlistMixIn    m_Plist;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        ColorMixIn    m_Color;
        EnclosingcharsMixIn    m_Enclosingchars;
        PlacementMixIn    m_Placement;
        StafflocMixIn    m_Staffloc;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        XyMixIn    m_Xy;
        StafflocPitchedMixIn    m_StafflocPitched;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Accid);
};

/** \brief – Name of an actor appearing within a cast list.
 */
class MEI_EXPORT Actor : public MeiElement {
    public:
        Actor();
        Actor(const Actor& other);
        virtual ~Actor();

/* include <actor> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Actor);
};

/** \brief (address line) – Single line of a postal address.
 */
class MEI_EXPORT AddrLine : public MeiElement {
    public:
        AddrLine();
        AddrLine(const AddrLine& other);
        virtual ~AddrLine();

/* include <addrLine> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(AddrLine);
};

/** \brief – Contains a postal address, for example of a publisher, an organization, or
 *  an individual.
 */
class MEI_EXPORT Address : public MeiElement {
    public:
        Address();
        Address(const Address& other);
        virtual ~Address();

/* include <address> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Address);
};

/** \brief (annotation) – Provides a short statement explaining the text or indicating
 *  the basis for an assertion.
 */
class MEI_EXPORT Annot : public MeiElement {
    public:
        Annot();
        Annot(const Annot& other);
        virtual ~Annot();

/* include <annot> */

        BiblMixIn    m_Bibl;
        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        SourceMixIn    m_Source;
        TypedMixIn    m_Typed;
        StartendidMixIn    m_Startendid;
        StartidMixIn    m_Startid;
        DurationTimestampMixIn    m_DurationTimestamp;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        DurationPerformedMixIn    m_DurationPerformed;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        PlistMixIn    m_Plist;
        ResponsibilityMixIn    m_Responsibility;

    private:
        REGISTER_DECLARATION(Annot);
};

/** \brief (articulation) – An indication of how to play a note or chord.
 */
class MEI_EXPORT Artic : public MeiElement {
    public:
        Artic();
        Artic(const Artic& other);
        virtual ~Artic();

/* include <artic> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        TypographyMixIn    m_Typography;
        ArticulationMixIn    m_Articulation;
        PlistMixIn    m_Plist;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        ColorMixIn    m_Color;
        EnclosingcharsMixIn    m_Enclosingchars;
        PlacementMixIn    m_Placement;
        StafflocMixIn    m_Staffloc;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetToMixIn    m_VisualoffsetTo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        XyMixIn    m_Xy;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Artic);
};

/** \brief – Vertical line drawn through one or more staves that divides musical notation
 *  into metrical units.
 */
class MEI_EXPORT BarLine : public MeiElement {
    public:
        BarLine();
        BarLine(const BarLine& other);
        virtual ~BarLine();

/* include <barLine> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        PointingMixIn    m_Pointing;
        BarLineLogMixIn    m_BarLineLog;
        MeterconformanceBarMixIn    m_MeterconformanceBar;
        BarplacementMixIn    m_Barplacement;
        ColorMixIn    m_Color;
        MeasurementMixIn    m_Measurement;
        WidthMixIn    m_Width;
        TimestampMusicalMixIn    m_TimestampMusical;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(BarLine);
};

/** \brief (bibliographic reference) – Provides a citation for a published work.
 */
class MEI_EXPORT Bibl : public MeiElement {
    public:
        Bibl();
        Bibl(const Bibl& other);
        virtual ~Bibl();

/* include <bibl> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        PointingMixIn    m_Pointing;

    private:
        REGISTER_DECLARATION(Bibl);
};

/** \brief – Contains the whole of a single musical text, excluding any front or back
 *  matter.
 */
class MEI_EXPORT Body : public MeiElement {
    public:
        Body();
        Body(const Body& other);
        virtual ~Body();

/* include <body> */

        CommonMixIn    m_Common;
        DeclaringMixIn    m_Declaring;

    private:
        REGISTER_DECLARATION(Body);
};

/** \brief – A label which accompanies an illustration or a table.
 */
class MEI_EXPORT Caption : public MeiElement {
    public:
        Caption();
        Caption(const Caption& other);
        virtual ~Caption();

/* include <caption> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Caption);
};

/** \brief (cast group) – Groups one or more individual castItem elements within a cast
 *  list.
 */
class MEI_EXPORT CastGrp : public MeiElement {
    public:
        CastGrp();
        CastGrp(const CastGrp& other);
        virtual ~CastGrp();

/* include <castGrp> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(CastGrp);
};

/** \brief – Contains a single entry within a cast list, describing either a single role
 *  or a list of non-speaking roles.
 */
class MEI_EXPORT CastItem : public MeiElement {
    public:
        CastItem();
        CastItem(const CastItem& other);
        virtual ~CastItem();

/* include <castItem> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(CastItem);
};

/** \brief – Contains a single cast list or dramatis personae.
 */
class MEI_EXPORT CastList : public MeiElement {
    public:
        CastList();
        CastList(const CastList& other);
        virtual ~CastList();

/* include <castList> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(CastList);
};

/** \brief – A simultaneous sounding of two or more notes in the same layer *with the
 *  same duration*.
 */
class MEI_EXPORT Chord : public MeiElement {
    public:
        Chord();
        Chord(const Chord& other);
        virtual ~Chord();

/* include <chord> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        ArticulationMixIn    m_Articulation;
        AugmentdotsMixIn    m_Augmentdots;
        DurationMusicalMixIn    m_DurationMusical;
        FermatapresentMixIn    m_Fermatapresent;
        SyltextMixIn    m_Syltext;
        SlurpresentMixIn    m_Slurpresent;
        TiepresentMixIn    m_Tiepresent;
        TupletpresentMixIn    m_Tupletpresent;
        BeamedMixIn    m_Beamed;
        LvpresentMixIn    m_Lvpresent;
        OrnamMixIn    m_Ornam;
        ChordVisMixIn    m_ChordVis;
        AltsymMixIn    m_Altsym;
        ColorMixIn    m_Color;
        RelativesizeMixIn    m_Relativesize;
        StemmedMixIn    m_Stemmed;
        StemmedCmnMixIn    m_StemmedCmn;
        VisibilityMixIn    m_Visibility;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetToMixIn    m_VisualoffsetTo;
        XyMixIn    m_Xy;
        BeamsecondaryMixIn    m_Beamsecondary;
        ArticulationPerformedMixIn    m_ArticulationPerformed;
        DurationPerformedMixIn    m_DurationPerformed;
        InstrumentidentMixIn    m_Instrumentident;
        GracedMixIn    m_Graced;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        MelodicfunctionMixIn    m_Melodicfunction;

    private:
        REGISTER_DECLARATION(Chord);
};

/** \brief – Indication of the exact location of a particular note on the staff and,
 *  therefore, the other notes as well.
 */
class MEI_EXPORT Clef : public MeiElement {
    public:
        Clef();
        Clef(const Clef& other);
        virtual ~Clef();

/* include <clef> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        ClefLogMixIn    m_ClefLog;
        ClefshapeMixIn    m_Clefshape;
        LinelocMixIn    m_Lineloc;
        OctaveMixIn    m_Octave;
        OctavedisplacementMixIn    m_Octavedisplacement;
        AltsymMixIn    m_Altsym;
        ColorMixIn    m_Color;

    private:
        REGISTER_DECLARATION(Clef);
};

/** \brief (clef group) – A set of simultaneously-occurring clefs.
 */
class MEI_EXPORT ClefGrp : public MeiElement {
    public:
        ClefGrp();
        ClefGrp(const ClefGrp& other);
        virtual ~ClefGrp();

/* include <clefGrp> */

        CommonMixIn    m_Common;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        FacsimileMixIn    m_Facsimile;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(ClefGrp);
};

/** \brief – Symbol placed at the end of a line of music to indicate the first note of
 *  the next line.
 * 
 *  Sometimes called a "direct".
 */
class MEI_EXPORT Custos : public MeiElement {
    public:
        Custos();
        Custos(const Custos& other);
        virtual ~Custos();

/* include <custos> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        SourceMixIn    m_Source;
        CustosLogMixIn    m_CustosLog;
        PitchMixIn    m_Pitch;
        OctaveMixIn    m_Octave;
        AltsymMixIn    m_Altsym;
        ColorMixIn    m_Color;
        StafflocMixIn    m_Staffloc;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Custos);
};

/** \brief – A string identifying a point in time or the time period between two such
 *  points.
 */
class MEI_EXPORT Date : public MeiElement {
    public:
        Date();
        Date(const Date& other);
        virtual ~Date();

/* include <date> */

        BiblMixIn    m_Bibl;
        CalendaredMixIn    m_Calendared;
        CommonMixIn    m_Common;
        DatableMixIn    m_Datable;
        EditMixIn    m_Edit;
        ResponsibilityMixIn    m_Responsibility;
        SourceMixIn    m_Source;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Date);
};

/** \brief (directive) – A text expression that is on the score (typically above, below,
 *  or between staves, but not on the staff) not encoded elsewhere in more specific
 *  elements, such as <tempo> or <dynam>.
 */
class MEI_EXPORT Dir : public MeiElement {
    public:
        Dir();
        Dir(const Dir& other);
        virtual ~Dir();

/* include <dir> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        TypedMixIn    m_Typed;
        PlistMixIn    m_Plist;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        StartendidMixIn    m_Startendid;
        StartidMixIn    m_Startid;
        DurationTimestampMixIn    m_DurationTimestamp;
        PlacementMixIn    m_Placement;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetToMixIn    m_VisualoffsetTo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        Visualoffset2HoMixIn    m_Visualoffset2Ho;
        Visualoffset2ToMixIn    m_Visualoffset2To;
        XyMixIn    m_Xy;
        DurationPerformedMixIn    m_DurationPerformed;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Dir);
};

/** \brief – Dot of augmentation or division.
 */
class MEI_EXPORT Dot : public MeiElement {
    public:
        Dot();
        Dot(const Dot& other);
        virtual ~Dot();

/* include <dot> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        DotLogMixIn    m_DotLog;
        PlistMixIn    m_Plist;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        ColorMixIn    m_Color;
        StafflocMixIn    m_Staffloc;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        XyMixIn    m_Xy;
        StafflocPitchedMixIn    m_StafflocPitched;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Dot);
};

/** \brief (dynamic) – Indication of the volume of a note, phrase, or section of music.
 */
class MEI_EXPORT Dynam : public MeiElement {
    public:
        Dynam();
        Dynam(const Dynam& other);
        virtual ~Dynam();

/* include <dynam> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        PlistMixIn    m_Plist;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        StartendidMixIn    m_Startendid;
        StartidMixIn    m_Startid;
        DurationTimestampMixIn    m_DurationTimestamp;
        PlacementMixIn    m_Placement;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetToMixIn    m_VisualoffsetTo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        Visualoffset2HoMixIn    m_Visualoffset2Ho;
        Visualoffset2ToMixIn    m_Visualoffset2To;
        XyMixIn    m_Xy;
        DurationPerformedMixIn    m_DurationPerformed;
        MidivalueMixIn    m_Midivalue;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Dynam);
};

/** \brief (edition designation) – A word or text phrase that indicates a difference in
 *  either content or form between the item being described and a related item
 *  previously issued by the same publisher/distributor (e.g.
 * 
 *  2nd edition, version 2.0, etc.), or simultaneously issued by either the same
 *  publisher/distributor or another publisher/distributor (e.g. large print
 *  edition, British edition, etc.).
 */
class MEI_EXPORT Edition : public MeiElement {
    public:
        Edition();
        Edition(const Edition& other);
        virtual ~Edition();

/* include <edition> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(Edition);
};

/** \brief – Alternative ending for a repeated passage of music; i.e., prima volta,
 *  seconda volta, etc.
 */
class MEI_EXPORT Ending : public MeiElement {
    public:
        Ending();
        Ending(const Ending& other);
        virtual ~Ending();

/* include <ending> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        TypedMixIn    m_Typed;
        PointingMixIn    m_Pointing;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Ending);
};

/** \brief – Indicates how a section may be programmatically expanded into its 'through-
 *  composed' form.
 */
class MEI_EXPORT Expansion : public MeiElement {
    public:
        Expansion();
        Expansion(const Expansion& other);
        virtual ~Expansion();

/* include <expansion> */

        CommonMixIn    m_Common;
        SourceMixIn    m_Source;
        TypedMixIn    m_Typed;
        PlistMixIn    m_Plist;

    private:
        REGISTER_DECLARATION(Expansion);
};

/** \brief (forme work) – This element is intended for capture of header/footer material
 *  that is non-repeating; that is, occuring on isolated pages.
 * 
 *  For recurring headers and footers use pgHead* and pgFoot* elements.
 */
class MEI_EXPORT Fw : public MeiElement {
    public:
        Fw();
        Fw(const Fw& other);
        virtual ~Fw();

/* include <fw> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Fw);
};

/** \brief – Contains a composite musical text, grouping together a sequence of distinct
 *  musical texts (or groups of such musical texts) which are regarded as a unit for
 *  some purpose, for example, the collected works of a composer.
 */
class MEI_EXPORT Group : public MeiElement {
    public:
        Group();
        Group(const Group& other);
        virtual ~Group();

/* include <group> */

        CommonMixIn    m_Common;
        DeclaringMixIn    m_Declaring;

    private:
        REGISTER_DECLARATION(Group);
};

/** \brief (group symbol) – A brace or bracket used to group two or more staves of a
 *  score or part.
 */
class MEI_EXPORT GrpSym : public MeiElement {
    public:
        GrpSym();
        GrpSym(const GrpSym& other);
        virtual ~GrpSym();

/* include <grpSym> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        StaffgroupingsymMixIn    m_Staffgroupingsym;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetToMixIn    m_VisualoffsetTo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        XyMixIn    m_Xy;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(GrpSym);
};

/** \brief – An alpha-numeric string that establishes the identity of the described
 *  material.
 */
class MEI_EXPORT Identifier : public MeiElement {
    public:
        Identifier();
        Identifier(const Identifier& other);
        virtual ~Identifier();

/* include <identifier> */

        AuthorizedMixIn    m_Authorized;
        BiblMixIn    m_Bibl;
        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Identifier);
};

/** \brief (incipit) – The opening music and/or words of a composition.
 */
class MEI_EXPORT Incip : public MeiElement {
    public:
        Incip();
        Incip(const Incip& other);
        virtual ~Incip();

/* include <incip> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Incip);
};

/** \brief (key accidental) – Accidental in a key signature.
 */
class MEI_EXPORT KeyAccid : public MeiElement {
    public:
        KeyAccid();
        KeyAccid(const KeyAccid& other);
        virtual ~KeyAccid();
        /** \brief records the function of the dot.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();

/* include <keyAccid> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(KeyAccid);
};

/** \brief (key signature) – Written key signature.
 */
class MEI_EXPORT KeySig : public MeiElement {
    public:
        KeySig();
        KeySig(const KeySig& other);
        virtual ~KeySig();

/* include <keySig> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        KeySigLogMixIn    m_KeySigLog;
        AccidentalMixIn    m_Accidental;
        PitchMixIn    m_Pitch;

    private:
        REGISTER_DECLARATION(KeySig);
};

/** \brief – A text string that identifies a staff, staff group, or contentItem.
 */
class MEI_EXPORT Label : public MeiElement {
    public:
        Label();
        Label(const Label& other);
        virtual ~Label();

/* include <label> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        SourceMixIn    m_Source;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Label);
};

/** \brief – An independent stream of events on a staff.
 */
class MEI_EXPORT Layer : public MeiElement {
    public:
        Layer();
        Layer(const Layer& other);
        virtual ~Layer();

/* include <layer> */

        CommonMixIn    m_Common;
        DeclaringMixIn    m_Declaring;
        FacsimileMixIn    m_Facsimile;
        LayerLogMixIn    m_LayerLog;
        MeterconformanceMixIn    m_Meterconformance;
        VisibilityMixIn    m_Visibility;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Layer);
};

/** \brief (layer definition) – Container for layer meta-information.
 */
class MEI_EXPORT LayerDef : public MeiElement {
    public:
        LayerDef();
        LayerDef(const LayerDef& other);
        virtual ~LayerDef();

/* include <layerDef> */

        CommonMixIn    m_Common;
        DeclaringMixIn    m_Declaring;
        DurationDefaultMixIn    m_DurationDefault;
        OctavedefaultMixIn    m_Octavedefault;
        BeamingLogMixIn    m_BeamingLog;
        LabelsAddlMixIn    m_LabelsAddl;
        BeamingVisMixIn    m_BeamingVis;
        TextstyleMixIn    m_Textstyle;
        VisibilityMixIn    m_Visibility;
        InstrumentidentMixIn    m_Instrumentident;

    private:
        REGISTER_DECLARATION(LayerDef);
};

/** \brief (line break) – An empty formatting element that forces text to begin on a new
 *  line.
 */
class MEI_EXPORT Lb : public MeiElement {
    public:
        Lb();
        Lb(const Lb& other);
        virtual ~Lb();
        /** \brief records the function of an accidental.
         */
        MeiAttribute* getFunc();
        void setFunc(std::string _func);
        bool hasFunc();
        void removeFunc();

/* include <lb> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        SourceMixIn    m_Source;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Lb);
};

/** \brief (musical division) – contains a subdivision of the body of a musical text.
 */
class MEI_EXPORT Mdiv : public MeiElement {
    public:
        Mdiv();
        Mdiv(const Mdiv& other);
        virtual ~Mdiv();

/* include <mdiv> */

        CommonMixIn    m_Common;
        DeclaringMixIn    m_Declaring;
        FacsimileMixIn    m_Facsimile;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Mdiv);
};

/** \brief – Contains a single MEI-conformant document, consisting of an MEI header and a
 *  musical text, either in isolation or as part of an meiCorpus element.
 */
class MEI_EXPORT Mei : public MeiElement {
    public:
        Mei();
        Mei(const Mei& other);
        virtual ~Mei();

/* include <mei> */

        MeiversionMixIn    m_Meiversion;

    private:
        REGISTER_DECLARATION(Mei);
};

/** \brief ― Contains a single musical text of any kind, whether unitary or composite,
 *  for example, an etude, opera, song cycle, symphony, or anthology of piano solos.
 */
class MEI_EXPORT Music : public MeiElement {
    public:
        Music();
        Music(const Music& other);
        virtual ~Music();

/* include <music> */

        CommonMixIn    m_Common;
        DeclaringMixIn    m_Declaring;
        MeiversionMixIn    m_Meiversion;

    private:
        REGISTER_DECLARATION(Music);
};

/** \brief – Proper noun or noun phrase.
 */
class MEI_EXPORT Name : public MeiElement {
    public:
        Name();
        Name(const Name& other);
        virtual ~Name();

/* include <name> */

        BiblMixIn    m_Bibl;
        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        NameMixIn    m_Name;
        AuthorizedMixIn    m_Authorized;
        CanonicalMixIn    m_Canonical;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Name);
};

/** \brief – A single pitched event.
 */
class MEI_EXPORT Note : public MeiElement {
    public:
        Note();
        Note(const Note& other);
        virtual ~Note();

/* include <note> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        AccidentalMixIn    m_Accidental;
        ArticulationMixIn    m_Articulation;
        AugmentdotsMixIn    m_Augmentdots;
        DurationMusicalMixIn    m_DurationMusical;
        FermatapresentMixIn    m_Fermatapresent;
        PitchMixIn    m_Pitch;
        OctaveMixIn    m_Octave;
        SyltextMixIn    m_Syltext;
        SlurpresentMixIn    m_Slurpresent;
        TiepresentMixIn    m_Tiepresent;
        TupletpresentMixIn    m_Tupletpresent;
        BeamedMixIn    m_Beamed;
        LvpresentMixIn    m_Lvpresent;
        OrnamMixIn    m_Ornam;
        NoteLogMensuralMixIn    m_NoteLogMensural;
        NoteVisMixIn    m_NoteVis;
        AltsymMixIn    m_Altsym;
        ColorMixIn    m_Color;
        ColorationMixIn    m_Coloration;
        EnclosingcharsMixIn    m_Enclosingchars;
        RelativesizeMixIn    m_Relativesize;
        StafflocMixIn    m_Staffloc;
        StemmedMixIn    m_Stemmed;
        StemmedCmnMixIn    m_StemmedCmn;
        VisibilityMixIn    m_Visibility;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetToMixIn    m_VisualoffsetTo;
        XyMixIn    m_Xy;
        BeamsecondaryMixIn    m_Beamsecondary;
        NoteGesMixIn    m_NoteGes;
        AccidentalPerformedMixIn    m_AccidentalPerformed;
        ArticulationPerformedMixIn    m_ArticulationPerformed;
        DurationPerformedMixIn    m_DurationPerformed;
        InstrumentidentMixIn    m_Instrumentident;
        NoteGesCmnMixIn    m_NoteGesCmn;
        GracedMixIn    m_Graced;
        DurationRatioMixIn    m_DurationRatio;
        NoteGesTablatureMixIn    m_NoteGesTablature;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        HarmonicfunctionMixIn    m_Harmonicfunction;
        IntervallicdescMixIn    m_Intervallicdesc;
        IntervalharmonicMixIn    m_Intervalharmonic;
        MelodicfunctionMixIn    m_Melodicfunction;
        PitchclassMixIn    m_Pitchclass;
        SolfaMixIn    m_Solfa;

    private:
        REGISTER_DECLARATION(Note);
};

/** \brief (number) – Numeric information in any form.
 */
class MEI_EXPORT Num : public MeiElement {
    public:
        Num();
        Num(const Num& other);
        virtual ~Num();

/* include <num> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        MeasurementMixIn    m_Measurement;

    private:
        REGISTER_DECLARATION(Num);
};

/** \brief (paragraph) – One or more text phrases that form a logical prose passage.
 */
class MEI_EXPORT P : public MeiElement {
    public:
        P();
        P(const P& other);
        virtual ~P();

/* include <p> */

        CommonMixIn    m_Common;
        DeclaringMixIn    m_Declaring;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(P);
};

/** \brief (padding) – An indication of extra visual space between notational elements.
 */
class MEI_EXPORT Pad : public MeiElement {
    public:
        Pad();
        Pad(const Pad& other);
        virtual ~Pad();

/* include <pad> */

        CommonMixIn    m_Common;
        PadLogMixIn    m_PadLog;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;

    private:
        REGISTER_DECLARATION(Pad);
};

/** \brief – An alternative visual rendition of the score from a particular performer's
 *  (or group of performers') point of view.
 */
class MEI_EXPORT Part : public MeiElement {
    public:
        Part();
        Part(const Part& other);
        virtual ~Part();

/* include <part> */

        CommonMixIn    m_Common;
        DeclaringMixIn    m_Declaring;
        TypedMixIn    m_Typed;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Part);
};

/** \brief – Provides a container for performers' parts.
 */
class MEI_EXPORT Parts : public MeiElement {
    public:
        Parts();
        Parts(const Parts& other);
        virtual ~Parts();

/* include <parts> */

        CommonMixIn    m_Common;
        DeclaringMixIn    m_Declaring;
        TypedMixIn    m_Typed;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Parts);
};

/** \brief (page break) ― An empty formatting element that forces text to begin on a new
 *  page.
 */
class MEI_EXPORT Pb : public MeiElement {
    public:
        Pb();
        Pb(const Pb& other);
        virtual ~Pb();

/* include <pb> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        PointingMixIn    m_Pointing;
        SourceMixIn    m_Source;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        PbVisMixIn    m_PbVis;
        LayoutMixIn    m_Layout;

    private:
        REGISTER_DECLARATION(Pb);
};

/** \brief (page description) – Contains a brief prose description of the appearance or
 *  description of the content of a physical page.
 */
class MEI_EXPORT PgDesc : public MeiElement {
    public:
        PgDesc();
        PgDesc(const PgDesc& other);
        virtual ~PgDesc();

/* include <pgDesc> */

        CommonMixIn    m_Common;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(PgDesc);
};

/** \brief (page footer) – A running footer on the first page.
 */
class MEI_EXPORT PgFoot : public MeiElement {
    public:
        PgFoot();
        PgFoot(const PgFoot& other);
        virtual ~PgFoot();

/* include <pgFoot> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(PgFoot);
};

/** \brief (page footer 2) – A running footer on the pages following the first.
 */
class MEI_EXPORT PgFoot2 : public MeiElement {
    public:
        PgFoot2();
        PgFoot2(const PgFoot2& other);
        virtual ~PgFoot2();

/* include <pgFoot2> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(PgFoot2);
};

/** \brief (page header) – A running header on the first page.
 */
class MEI_EXPORT PgHead : public MeiElement {
    public:
        PgHead();
        PgHead(const PgHead& other);
        virtual ~PgHead();

/* include <pgHead> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(PgHead);
};

/** \brief (page header 2) – A running header on the pages following the first.
 */
class MEI_EXPORT PgHead2 : public MeiElement {
    public:
        PgHead2();
        PgHead2(const PgHead2& other);
        virtual ~PgHead2();

/* include <pgHead2> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(PgHead2);
};

/** \brief – Indication of 1) a "unified melodic idea" or 2) performance technique.
 */
class MEI_EXPORT Phrase : public MeiElement {
    public:
        Phrase();
        Phrase(const Phrase& other);
        virtual ~Phrase();

/* include <phrase> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        PlistMixIn    m_Plist;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        StartendidMixIn    m_Startendid;
        StartidMixIn    m_Startid;
        DurationTimestampMixIn    m_DurationTimestamp;
        ColorMixIn    m_Color;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetToMixIn    m_VisualoffsetTo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        Visualoffset2HoMixIn    m_Visualoffset2Ho;
        Visualoffset2ToMixIn    m_Visualoffset2To;
        Visualoffset2VoMixIn    m_Visualoffset2Vo;
        XyMixIn    m_Xy;
        Xy2MixIn    m_Xy2;
        CurvatureMixIn    m_Curvature;
        CurverendMixIn    m_Curverend;
        DurationPerformedMixIn    m_DurationPerformed;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        JoinedMixIn    m_Joined;

    private:
        REGISTER_DECLARATION(Phrase);
};

/** \brief (render) – A formatting element indicating special visual rendering, e.g.,
 *  bold or italicized, of a text word or phrase.
 */
class MEI_EXPORT Rend : public MeiElement {
    public:
        Rend();
        Rend(const Rend& other);
        virtual ~Rend();
        /** \brief used to extend the values of the rend attribute.
         */
        MeiAttribute* getAltrend();
        void setAltrend(std::string _altrend);
        bool hasAltrend();
        void removeAltrend();
        /** \brief describes the line style of the curve.
         */
        MeiAttribute* getRend();
        void setRend(std::string _rend);
        bool hasRend();
        void removeRend();
        /** \brief A positive value for rotation rotates the text in a counter-clockwise fashion,
         *  while negative values produce clockwise rotation.
         */
        MeiAttribute* getRotation();
        void setRotation(std::string _rotation);
        bool hasRotation();
        void removeRotation();
        /** \brief specifies the vertical position of the element content relative to the
         *  surrounding text.
         */
        MeiAttribute* getValign();
        void setValign(std::string _valign);
        bool hasValign();
        void removeValign();

/* include <rend> */

        ColorMixIn    m_Color;
        CommonMixIn    m_Common;
        LangMixIn    m_Lang;
        TypographyMixIn    m_Typography;
        HorizontalalignMixIn    m_Horizontalalign;

    private:
        REGISTER_DECLARATION(Rend);
};

/** \brief – Institution or agency which holds a bibliographic item.
 */
class MEI_EXPORT Repository : public MeiElement {
    public:
        Repository();
        Repository(const Repository& other);
        virtual ~Repository();

/* include <repository> */

        BiblMixIn    m_Bibl;
        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        NameMixIn    m_Name;
        AuthorizedMixIn    m_Authorized;
        CanonicalMixIn    m_Canonical;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Repository);
};

/** \brief – A non-sounding event found in the source being transcribed.
 */
class MEI_EXPORT Rest : public MeiElement {
    public:
        Rest();
        Rest(const Rest& other);
        virtual ~Rest();

/* include <rest> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        AugmentdotsMixIn    m_Augmentdots;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        DurationMusicalMixIn    m_DurationMusical;
        FermatapresentMixIn    m_Fermatapresent;
        TupletpresentMixIn    m_Tupletpresent;
        BeamedMixIn    m_Beamed;
        AltsymMixIn    m_Altsym;
        ColorMixIn    m_Color;
        RelativesizeMixIn    m_Relativesize;
        StafflocMixIn    m_Staffloc;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetToMixIn    m_VisualoffsetTo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        XyMixIn    m_Xy;
        RestVisMensuralMixIn    m_RestVisMensural;
        StafflocPitchedMixIn    m_StafflocPitched;
        DurationPerformedMixIn    m_DurationPerformed;
        InstrumentidentMixIn    m_Instrumentident;
        DurationRatioMixIn    m_DurationRatio;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Rest);
};

/** \brief – Name of a dramatic role, as given in a cast list.
 */
class MEI_EXPORT Role : public MeiElement {
    public:
        Role();
        Role(const Role& other);
        virtual ~Role();

/* include <role> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Role);
};

/** \brief (role description) – Describes a character's role in a drama.
 */
class MEI_EXPORT RoleDesc : public MeiElement {
    public:
        RoleDesc();
        RoleDesc(const RoleDesc& other);
        virtual ~RoleDesc();

/* include <roleDesc> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(RoleDesc);
};

/** \brief (system break) ― An empty formatting element that forces musical notation to
 *  begin on a new line.
 */
class MEI_EXPORT Sb : public MeiElement {
    public:
        Sb();
        Sb(const Sb& other);
        virtual ~Sb();

/* include <sb> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        SourceMixIn    m_Source;
        SbVisMixIn    m_SbVis;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        LayoutMixIn    m_Layout;

    private:
        REGISTER_DECLARATION(Sb);
};

/** \brief – Full score view of the musical content.
 */
class MEI_EXPORT Score : public MeiElement {
    public:
        Score();
        Score(const Score& other);
        virtual ~Score();

/* include <score> */

        CommonMixIn    m_Common;
        DeclaringMixIn    m_Declaring;
        TypedMixIn    m_Typed;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Score);
};

/** \brief (score definition) – Container for score meta-information.
 */
class MEI_EXPORT ScoreDef : public MeiElement {
    public:
        ScoreDef();
        ScoreDef(const ScoreDef& other);
        virtual ~ScoreDef();

/* include <scoreDef> */

        CommonMixIn    m_Common;
        CleffingLogMixIn    m_CleffingLog;
        DurationDefaultMixIn    m_DurationDefault;
        KeySigDefaultLogMixIn    m_KeySigDefaultLog;
        MeterSigDefaultLogMixIn    m_MeterSigDefaultLog;
        OctavedefaultMixIn    m_Octavedefault;
        TranspositionMixIn    m_Transposition;
        BeamingLogMixIn    m_BeamingLog;
        MensurDefaultLogMixIn    m_MensurDefaultLog;
        DurationRatioMixIn    m_DurationRatio;
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
        ScoreDefGesMixIn    m_ScoreDefGes;
        ChannelizedMixIn    m_Channelized;
        TimebaseMixIn    m_Timebase;
        MiditempoMixIn    m_Miditempo;
        MmtempoMixIn    m_Mmtempo;

    private:
        REGISTER_DECLARATION(ScoreDef);
};

/** \brief – Segment of music data.
 */
class MEI_EXPORT Section : public MeiElement {
    public:
        Section();
        Section(const Section& other);
        virtual ~Section();

/* include <section> */

        CommonMixIn    m_Common;
        DeclaringMixIn    m_Declaring;
        FacsimileMixIn    m_Facsimile;
        TypedMixIn    m_Typed;
        PointingMixIn    m_Pointing;
        SectionVisMixIn    m_SectionVis;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Section);
};

/** \brief – A placeholder used to fill an incomplete measure, layer, etc.
 * 
 *  most often so that the combined duration of the events equals the number of
 *  beats in the measure.
 */
class MEI_EXPORT Space : public MeiElement {
    public:
        Space();
        Space(const Space& other);
        virtual ~Space();

/* include <space> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        AugmentdotsMixIn    m_Augmentdots;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        DurationMusicalMixIn    m_DurationMusical;
        FermatapresentMixIn    m_Fermatapresent;
        TupletpresentMixIn    m_Tupletpresent;
        BeamedMixIn    m_Beamed;
        SpaceVisMixIn    m_SpaceVis;
        DurationPerformedMixIn    m_DurationPerformed;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Space);
};

/** \brief (stacked text) – An inline table with a single column.
 */
class MEI_EXPORT Stack : public MeiElement {
    public:
        Stack();
        Stack(const Stack& other);
        virtual ~Stack();
        /** \brief indicates the delimiter used to mark the portions of text that are to be
         *  stacked.
         */
        MeiAttribute* getDelim();
        void setDelim(std::string _delim);
        bool hasDelim();
        void removeDelim();
        /** \brief specifies how the stacked text components should be aligned.
         */
        MeiAttribute* getAlign();
        void setAlign(std::string _align);
        bool hasAlign();
        void removeAlign();

/* include <stack> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Stack);
};

/** \brief – A group of equidistant horizontal lines on which notes are placed in order
 *  to represent pitch or a grouping element for individual 'strands' of notes,
 *  rests, etc.
 * 
 *  that may or may not actually be rendered on staff lines; that is, both
 *  diastematic and non-diastematic signs.
 */
class MEI_EXPORT Staff : public MeiElement {
    public:
        Staff();
        Staff(const Staff& other);
        virtual ~Staff();

/* include <staff> */

        CommonMixIn    m_Common;
        DeclaringMixIn    m_Declaring;
        FacsimileMixIn    m_Facsimile;
        StaffLogMixIn    m_StaffLog;
        MeterconformanceMixIn    m_Meterconformance;
        VisibilityMixIn    m_Visibility;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Staff);
};

/** \brief (staff definition) – Container for staff meta-information.
 */
class MEI_EXPORT StaffDef : public MeiElement {
    public:
        StaffDef();
        StaffDef(const StaffDef& other);
        virtual ~StaffDef();

/* include <staffDef> */

        CommonMixIn    m_Common;
        DeclaringMixIn    m_Declaring;
        CleffingLogMixIn    m_CleffingLog;
        DurationDefaultMixIn    m_DurationDefault;
        KeySigDefaultLogMixIn    m_KeySigDefaultLog;
        MeterSigDefaultLogMixIn    m_MeterSigDefaultLog;
        OctavedefaultMixIn    m_Octavedefault;
        TranspositionMixIn    m_Transposition;
        BeamingLogMixIn    m_BeamingLog;
        StaffDefLogMensuralMixIn    m_StaffDefLogMensural;
        MensurDefaultLogMixIn    m_MensurDefaultLog;
        DurationRatioMixIn    m_DurationRatio;
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
        InstrumentidentMixIn    m_Instrumentident;
        TimebaseMixIn    m_Timebase;
        StaffDefGesTablatureMixIn    m_StaffDefGesTablature;

    private:
        REGISTER_DECLARATION(StaffDef);
};

/** \brief (staff group) – A group of bracketed or braced staves.
 */
class MEI_EXPORT StaffGrp : public MeiElement {
    public:
        StaffGrp();
        StaffGrp(const StaffGrp& other);
        virtual ~StaffGrp();

/* include <staffGrp> */

        CommonMixIn    m_Common;
        DeclaringMixIn    m_Declaring;
        FacsimileMixIn    m_Facsimile;
        StaffGrpVisMixIn    m_StaffGrpVis;
        LabelsAddlMixIn    m_LabelsAddl;
        StaffgroupingsymMixIn    m_Staffgroupingsym;
        VisibilityMixIn    m_Visibility;
        InstrumentidentMixIn    m_Instrumentident;

    private:
        REGISTER_DECLARATION(StaffGrp);
};

/** \brief (syllable) – Individual lyric syllable.
 */
class MEI_EXPORT Syl : public MeiElement {
    public:
        Syl();
        Syl(const Syl& other);
        virtual ~Syl();

/* include <syl> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        SylLogMixIn    m_SylLog;
        TypographyMixIn    m_Typography;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetToMixIn    m_VisualoffsetTo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        XyMixIn    m_Xy;
        HorizontalalignMixIn    m_Horizontalalign;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Syl);
};

/** \brief – Text and symbols descriptive of tempo, mood, or style, e.g., "allarg.", "a
 *  tempo", "cantabile", "Moderato", "♩=60", "Moderato ♩ =60").
 */
class MEI_EXPORT Tempo : public MeiElement {
    public:
        Tempo();
        Tempo(const Tempo& other);
        virtual ~Tempo();

/* include <tempo> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        PlistMixIn    m_Plist;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        StartidMixIn    m_Startid;
        PlacementMixIn    m_Placement;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetToMixIn    m_VisualoffsetTo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        Visualoffset2HoMixIn    m_Visualoffset2Ho;
        Visualoffset2ToMixIn    m_Visualoffset2To;
        XyMixIn    m_Xy;
        MiditempoMixIn    m_Miditempo;
        MmtempoMixIn    m_Mmtempo;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Tempo);
};

/** \brief – Title of a bibliographic entity.
 */
class MEI_EXPORT Title : public MeiElement {
    public:
        Title();
        Title(const Title& other);
        virtual ~Title();
        /** \brief indicates the bibliographic level for a title.
         */
        MeiAttribute* getLevel();
        void setLevel(std::string _level);
        bool hasLevel();
        void removeLevel();

/* include <title> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        NameMixIn    m_Name;
        AuthorizedMixIn    m_Authorized;
        CanonicalMixIn    m_Canonical;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Title);
};

/** \brief – Contains a transcription of the title page of a text.
 */
class MEI_EXPORT TitlePage : public MeiElement {
    public:
        TitlePage();
        TitlePage(const TitlePage& other);
        virtual ~TitlePage();

/* include <titlePage> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(TitlePage);
};
}
#endif  // SHARED_H_
