/////////////////////////////////////////////////////////////////////////////
// Name:        attributes.h
// Author:      Laurent Pugin
// Created:     2014
// Copyright (c) Authors and others. All rights reserved.
//
// Code generated using a modified version of libmei 
// by Andrew Hankinson, Alastair Porter, and Others
/////////////////////////////////////////////////////////////////////////////


#ifndef __VRV_SHAREDMIXIN_H__
#define __VRV_SHAREDMIXIN_H__

#include <string>

namespace vrv {
    
//----------------------------------------------------------------------------
// AttAccidLog
//----------------------------------------------------------------------------

class AttAccidLog 
{
public:
    AttAccidLog();
    virtual ~AttAccidLog();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetFunc(std::string func) { m_func = func; };
    std::string GetFunc() { return m_func; };
    ///@}

protected:
    /** Records the function of an accidental. **/
    std::string m_func;

    
/* include <funcmixin> */

};

//----------------------------------------------------------------------------
// AttAccidental
//----------------------------------------------------------------------------

class AttAccidental 
{
public:
    AttAccidental();
    virtual ~AttAccidental();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetAccid(std::string accid) { m_accid = accid; };
    std::string GetAccid() { return m_accid; };
    ///@}

protected:
    /** Captures a written accidental. **/
    std::string m_accid;

    
/* include <accidmixin> */

};

//----------------------------------------------------------------------------
// AttAccidentalPerformed
//----------------------------------------------------------------------------

class AttAccidentalPerformed 
{
public:
    AttAccidentalPerformed();
    virtual ~AttAccidentalPerformed();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetAccidGes(std::string accidGes) { m_accidGes = accidGes; };
    std::string GetAccidGes() { return m_accidGes; };
    ///@}

protected:
    /**
     * Records the performed pitch inflection when it differs from the written
     * accidental.
     **/
    std::string m_accidGes;

    
/* include <accid.gesmixin> */

};

//----------------------------------------------------------------------------
// AttAltsym
//----------------------------------------------------------------------------

class AttAltsym 
{
public:
    AttAltsym();
    virtual ~AttAltsym();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetAltsym(std::string altsym) { m_altsym = altsym; };
    std::string GetAltsym() { return m_altsym; };
    ///@}

protected:
    /**
     * Provides a way of pointing to a user-defined symbol.
     * It must contain an ID of a <symbolDef> element elsewhere in the document.
     **/
    std::string m_altsym;

    
/* include <altsymmixin> */

};

//----------------------------------------------------------------------------
// AttArticulation
//----------------------------------------------------------------------------

class AttArticulation 
{
public:
    AttArticulation();
    virtual ~AttArticulation();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetArtic(std::string artic) { m_artic = artic; };
    std::string GetArtic() { return m_artic; };
    ///@}

protected:
    /**
     * Encodes the written articulation(s).
     * Articulations are normally encoded in order from the note head outward; that is,
     * away from the stem. See additional notes at att.vis.note. Only articulations
     * should be encoded in the artic attribute; fingerings should be encoded using the
     * <dir> element.
     **/
    std::string m_artic;

    
/* include <articmixin> */

};

//----------------------------------------------------------------------------
// AttArticulationPerformed
//----------------------------------------------------------------------------

class AttArticulationPerformed 
{
public:
    AttArticulationPerformed();
    virtual ~AttArticulationPerformed();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetArticGes(std::string articGes) { m_articGes = articGes; };
    std::string GetArticGes() { return m_articGes; };
    ///@}

protected:
    /** Records performed articulation that differs from the written value. **/
    std::string m_articGes;

    
/* include <artic.gesmixin> */

};

//----------------------------------------------------------------------------
// AttAugmentdots
//----------------------------------------------------------------------------

class AttAugmentdots 
{
public:
    AttAugmentdots();
    virtual ~AttAugmentdots();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetDots(std::string dots) { m_dots = dots; };
    std::string GetDots() { return m_dots; };
    ///@}

protected:
    /** Records the number of augmentation dots required by a dotted duration. **/
    std::string m_dots;

    
/* include <dotsmixin> */

};

//----------------------------------------------------------------------------
// AttAuthorized
//----------------------------------------------------------------------------

class AttAuthorized 
{
public:
    AttAuthorized();
    virtual ~AttAuthorized();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetAuthority(std::string authority) { m_authority = authority; };
    std::string GetAuthority() { return m_authority; };
    //
    void SetAuthURI(std::string authURI) { m_authURI = authURI; };
    std::string GetAuthURI() { return m_authURI; };
    ///@}

protected:
    /**
     * A name or label associated with the controlled vocabulary from which the value
     * is taken.
     **/
    std::string m_authority;
    /**
     * The web-accessible location of the controlled vocabulary from which the value is
     * taken.
     **/
    std::string m_authURI;

    
/* include <authURImixin> */

};

//----------------------------------------------------------------------------
// AttBarLineLog
//----------------------------------------------------------------------------

class AttBarLineLog 
{
public:
    AttBarLineLog();
    virtual ~AttBarLineLog();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetRend(std::string rend) { m_rend = rend; };
    std::string GetRend() { return m_rend; };
    ///@}

protected:
    /** Describes the line style of the curve. **/
    std::string m_rend;

    
/* include <rendmixin> */

};

//----------------------------------------------------------------------------
// AttBarplacement
//----------------------------------------------------------------------------

class AttBarplacement 
{
public:
    AttBarplacement();
    virtual ~AttBarplacement();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetBarplace(std::string barplace) { m_barplace = barplace; };
    std::string GetBarplace() { return m_barplace; };
    //
    void SetTaktplace(std::string taktplace) { m_taktplace = taktplace; };
    std::string GetTaktplace() { return m_taktplace; };
    ///@}

protected:
    /** Records the location of a bar line. **/
    std::string m_barplace;
    /**
     * If takt bar lines are to be used, then the taktplace attribute may be used to
     * denote the staff location of the shortened bar line.
     * The location may include staff lines, spaces, and the spaces directly above and
     * below the staff. The value ranges between 0 (just below the staff) to 2 * number
     * of staff lines (directly above the staff). For example, on a 5-line staff the
     * lines would be numbered 1,3,5,7, and 9 while the spaces would be numbered
     * 0,2,4,6,8,10. For example, a value of '9' puts the bar line through the top line
     * of a 5-line staff.
     **/
    std::string m_taktplace;

    
/* include <taktplacemixin> */

};

//----------------------------------------------------------------------------
// AttBeamingVis
//----------------------------------------------------------------------------

class AttBeamingVis 
{
public:
    AttBeamingVis();
    virtual ~AttBeamingVis();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetBeamRend(std::string beamRend) { m_beamRend = beamRend; };
    std::string GetBeamRend() { return m_beamRend; };
    //
    void SetBeamSlopeDbl(double beamSlopeDbl) { m_beamSlopeDbl = beamSlopeDbl; };
    double GetBeamSlopeDbl() { return m_beamSlopeDbl; };
    ///@}

protected:
    /** Encodes whether a beam is "feathered" and in which direction. **/
    std::string m_beamRend;
    /** Captures beam slope. **/
    double m_beamSlopeDbl;

    
/* include <beam.slopemixin> */

};

//----------------------------------------------------------------------------
// AttBibl
//----------------------------------------------------------------------------

class AttBibl 
{
public:
    AttBibl();
    virtual ~AttBibl();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetAnalog(std::string analog) { m_analog = analog; };
    std::string GetAnalog() { return m_analog; };
    ///@}

protected:
    /**
     * Contains a reference to a field or element in another descriptive encoding
     * system to which this MEI element is comparable.
     **/
    std::string m_analog;

    
/* include <analogmixin> */

};

//----------------------------------------------------------------------------
// AttCalendared
//----------------------------------------------------------------------------

class AttCalendared 
{
public:
    AttCalendared();
    virtual ~AttCalendared();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetCalendar(std::string calendar) { m_calendar = calendar; };
    std::string GetCalendar() { return m_calendar; };
    ///@}

protected:
    /**
     * Indicates the calendar system to which a date belongs, for example, Gregorian,
     * Julian, Roman, Mosaic, Revolutionary, Islamic, etc.
     **/
    std::string m_calendar;

    
/* include <calendarmixin> */

};

//----------------------------------------------------------------------------
// AttCanonical
//----------------------------------------------------------------------------

class AttCanonical 
{
public:
    AttCanonical();
    virtual ~AttCanonical();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetDbkey(std::string dbkey) { m_dbkey = dbkey; };
    std::string GetDbkey() { return m_dbkey; };
    ///@}

protected:
    /** Used to record a value which serves as a primary key in an external database. **/
    std::string m_dbkey;

    
/* include <dbkeymixin> */

};

//----------------------------------------------------------------------------
// AttChordVis
//----------------------------------------------------------------------------

class AttChordVis 
{
public:
    AttChordVis();
    virtual ~AttChordVis();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetCluster(std::string cluster) { m_cluster = cluster; };
    std::string GetCluster() { return m_cluster; };
    ///@}

protected:
    /**
     * Indicates a single alternative note head should be displayed instead of
     * individual note heads.
     * See Read, p. 320-321, re: tone clusters.
     **/
    std::string m_cluster;

    
/* include <clustermixin> */

};

//----------------------------------------------------------------------------
// AttClefLog
//----------------------------------------------------------------------------

class AttClefLog 
{
public:
    AttClefLog();
    virtual ~AttClefLog();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetCautionary(std::string cautionary) { m_cautionary = cautionary; };
    std::string GetCautionary() { return m_cautionary; };
    ///@}

protected:
    /**
     * Records the function of the clef.
     * A "cautionary" clef does not change the following pitches.
     **/
    std::string m_cautionary;

    
/* include <cautionarymixin> */

};

//----------------------------------------------------------------------------
// AttCleffingLog
//----------------------------------------------------------------------------

class AttCleffingLog 
{
public:
    AttCleffingLog();
    virtual ~AttCleffingLog();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetClefShape(std::string clefShape) { m_clefShape = clefShape; };
    std::string GetClefShape() { return m_clefShape; };
    //
    void SetClefLine(std::string clefLine) { m_clefLine = clefLine; };
    std::string GetClefLine() { return m_clefLine; };
    //
    void SetClefDis(std::string clefDis) { m_clefDis = clefDis; };
    std::string GetClefDis() { return m_clefDis; };
    //
    void SetClefDisPlace(std::string clefDisPlace) { m_clefDisPlace = clefDisPlace; };
    std::string GetClefDisPlace() { return m_clefDisPlace; };
    ///@}

protected:
    /** Encodes a value for the clef symbol. **/
    std::string m_clefShape;
    /**
     * Contains a default value for the position of the clef.
     * The value must be in the range between 1 and the number of lines on the staff.
     * The numbering of lines starts with the lowest line of the staff.
     **/
    std::string m_clefLine;
    /** Records the amount of octave displacement to be applied to the clef. **/
    std::string m_clefDis;
    /** Records the direction of octave displacement to be applied to the clef. **/
    std::string m_clefDisPlace;

    
/* include <clef.dis.placemixin> */

};

//----------------------------------------------------------------------------
// AttCleffingVis
//----------------------------------------------------------------------------

class AttCleffingVis 
{
public:
    AttCleffingVis();
    virtual ~AttCleffingVis();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetClefColor(std::string clefColor) { m_clefColor = clefColor; };
    std::string GetClefColor() { return m_clefColor; };
    //
    void SetClefVisible(std::string clefVisible) { m_clefVisible = clefVisible; };
    std::string GetClefVisible() { return m_clefVisible; };
    ///@}

protected:
    /** Describes the color of the clef. **/
    std::string m_clefColor;
    /** Determines whether the clef is to be displayed. **/
    std::string m_clefVisible;

    
/* include <clef.visiblemixin> */

};

//----------------------------------------------------------------------------
// AttClefshape
//----------------------------------------------------------------------------

class AttClefshape 
{
public:
    AttClefshape();
    virtual ~AttClefshape();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetShape(std::string shape) { m_shape = shape; };
    std::string GetShape() { return m_shape; };
    ///@}

protected:
    /** Describes a clef's shape. **/
    std::string m_shape;

    
/* include <shapemixin> */

};

//----------------------------------------------------------------------------
// AttColor
//----------------------------------------------------------------------------

class AttColor 
{
public:
    AttColor();
    virtual ~AttColor();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetColor(std::string color) { m_color = color; };
    std::string GetColor() { return m_color; };
    ///@}

protected:
    /**
     * Used to indicate visual appearance.
     * Do not confuse this with the musical term 'color' as used in pre-CMN notation.
     **/
    std::string m_color;

    
/* include <colormixin> */

};

//----------------------------------------------------------------------------
// AttColoration
//----------------------------------------------------------------------------

class AttColoration 
{
public:
    AttColoration();
    virtual ~AttColoration();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetColored(std::string colored) { m_colored = colored; };
    std::string GetColored() { return m_colored; };
    ///@}

protected:
    /**
     * Indicates this feature is 'colored'; that is, it is a participant in a change in
     * rhythmic values.
     * In mensural notation, coloration is indicated by colored notes (red, black,
     * etc.) where void notes would otherwise occur. In CMN, coloration is indicated by
     * an inverse color; that is, the note head is void when it would otherwise be
     * filled and vice versa.
     **/
    std::string m_colored;

    
/* include <coloredmixin> */

};

//----------------------------------------------------------------------------
// AttCommon
//----------------------------------------------------------------------------

class AttCommon 
{
public:
    AttCommon();
    virtual ~AttCommon();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetLabel(std::string label) { m_label = label; };
    std::string GetLabel() { return m_label; };
    //
    void SetN(std::string n) { m_n = n; };
    std::string GetN() { return m_n; };
    //
    void SetBase(std::string base) { m_base = base; };
    std::string GetBase() { return m_base; };
    ///@}

protected:
    /**
     * Provides a label for an element.
     * The value may be any string.
     **/
    std::string m_label;
    /**
     * Provides a name or number designation for an element.
     * While the value need not be unique, it is required to be a single token.
     **/
    std::string m_n;
    /** --- **/
    std::string m_base;

    
/* include <basemixin> */

};

//----------------------------------------------------------------------------
// AttCoordinated
//----------------------------------------------------------------------------

class AttCoordinated 
{
public:
    AttCoordinated();
    virtual ~AttCoordinated();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetUlxInt(int ulxInt) { m_ulxInt = ulxInt; };
    int GetUlxInt() { return m_ulxInt; };
    //
    void SetUlyInt(int ulyInt) { m_ulyInt = ulyInt; };
    int GetUlyInt() { return m_ulyInt; };
    //
    void SetLrxInt(int lrxInt) { m_lrxInt = lrxInt; };
    int GetLrxInt() { return m_lrxInt; };
    //
    void SetLryInt(int lryInt) { m_lryInt = lryInt; };
    int GetLryInt() { return m_lryInt; };
    ///@}

protected:
    /** Indicates the upper-left corner x coordinate. **/
    int m_ulxInt;
    /** Indicates the upper-left corner y coordinate. **/
    int m_ulyInt;
    /** Indicates the lower-right corner x coordinate. **/
    int m_lrxInt;
    /** Indicates the lower-left corner x coordinate. **/
    int m_lryInt;

    
/* include <lrymixin> */

};

//----------------------------------------------------------------------------
// AttCurvature
//----------------------------------------------------------------------------

class AttCurvature 
{
public:
    AttCurvature();
    virtual ~AttCurvature();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetBezier(std::string bezier) { m_bezier = bezier; };
    std::string GetBezier() { return m_bezier; };
    //
    void SetBulge(std::string bulge) { m_bulge = bulge; };
    std::string GetBulge() { return m_bulge; };
    //
    void SetCurvedir(std::string curvedir) { m_curvedir = curvedir; };
    std::string GetCurvedir() { return m_curvedir; };
    ///@}

protected:
    /**
     * Records the placement of Bezier control points as a series of space-separated xy
     * coordinates, e.g., 19 45 -32 118.
     **/
    std::string m_bezier;
    /**
     * Describes a curve as a set of distance values above or below an imaginary line
     * connecting the endpoints of the curve.
     * The bulge attribute must contain one or more decimal values expressed in inter-
     * line units.
     **/
    std::string m_bulge;
    /** Describes a curve with a generic term indicating the direction of curvature. **/
    std::string m_curvedir;

    
/* include <curvedirmixin> */

};

//----------------------------------------------------------------------------
// AttCurverend
//----------------------------------------------------------------------------

class AttCurverend 
{
public:
    AttCurverend();
    virtual ~AttCurverend();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetRend(std::string rend) { m_rend = rend; };
    std::string GetRend() { return m_rend; };
    ///@}

protected:
    /** Describes the line style of the curve. **/
    std::string m_rend;

    
/* include <rendmixin> */

};

//----------------------------------------------------------------------------
// AttCustosLog
//----------------------------------------------------------------------------

class AttCustosLog 
{
public:
    AttCustosLog();
    virtual ~AttCustosLog();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetTarget(std::string target) { m_target = target; };
    std::string GetTarget() { return m_target; };
    ///@}

protected:
    /**
     * Allows the use of one or more previously-undeclared URIs to identify an external
     * electronic object.
     **/
    std::string m_target;

    
/* include <targetmixin> */

};

//----------------------------------------------------------------------------
// AttDatable
//----------------------------------------------------------------------------

class AttDatable 
{
public:
    AttDatable();
    virtual ~AttDatable();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetEnddate(std::string enddate) { m_enddate = enddate; };
    std::string GetEnddate() { return m_enddate; };
    //
    void SetIsodate(std::string isodate) { m_isodate = isodate; };
    std::string GetIsodate() { return m_isodate; };
    //
    void SetNotafter(std::string notafter) { m_notafter = notafter; };
    std::string GetNotafter() { return m_notafter; };
    //
    void SetNotbefore(std::string notbefore) { m_notbefore = notbefore; };
    std::string GetNotbefore() { return m_notbefore; };
    //
    void SetStartdate(std::string startdate) { m_startdate = startdate; };
    std::string GetStartdate() { return m_startdate; };
    ///@}

protected:
    /** Contains the end point of a date range in standard ISO form. **/
    std::string m_enddate;
    /** Provides the value of a textual date in standard ISO form. **/
    std::string m_isodate;
    /** Contains an upper boundary for an uncertain date in standard ISO form. **/
    std::string m_notafter;
    /** Contains a lower boundary, in standard ISO form, for an uncertain date. **/
    std::string m_notbefore;
    /** Contains the starting point of a date range in standard ISO form. **/
    std::string m_startdate;

    
/* include <startdatemixin> */

};

//----------------------------------------------------------------------------
// AttDatapointing
//----------------------------------------------------------------------------

class AttDatapointing 
{
public:
    AttDatapointing();
    virtual ~AttDatapointing();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetData(std::string data) { m_data = data; };
    std::string GetData() { return m_data; };
    ///@}

protected:
    /** Used to link metadata elements to one or more data-containing elements. **/
    std::string m_data;

    
/* include <datamixin> */

};

//----------------------------------------------------------------------------
// AttDeclaring
//----------------------------------------------------------------------------

class AttDeclaring 
{
public:
    AttDeclaring();
    virtual ~AttDeclaring();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetDecls(std::string decls) { m_decls = decls; };
    std::string GetDecls() { return m_decls; };
    ///@}

protected:
    /**
     * Identifies one or more metadata elements within the header, which are understood
     * to apply to the element bearing this attribute and its content.
     **/
    std::string m_decls;

    
/* include <declsmixin> */

};

//----------------------------------------------------------------------------
// AttDistances
//----------------------------------------------------------------------------

class AttDistances 
{
public:
    AttDistances();
    virtual ~AttDistances();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetDynamDistDbl(double dynamDistDbl) { m_dynamDistDbl = dynamDistDbl; };
    double GetDynamDistDbl() { return m_dynamDistDbl; };
    //
    void SetHarmDistDbl(double harmDistDbl) { m_harmDistDbl = harmDistDbl; };
    double GetHarmDistDbl() { return m_harmDistDbl; };
    //
    void SetTextDistDbl(double textDistDbl) { m_textDistDbl = textDistDbl; };
    double GetTextDistDbl() { return m_textDistDbl; };
    ///@}

protected:
    /** Records the distance from the staff for dynamic marks in 1/2 inter-line units. **/
    double m_dynamDistDbl;
    /**
     * Records the default distance from the staff of harmonic indications, such as
     * guitar chord grids or functional labels.
     **/
    double m_harmDistDbl;
    /** Determines how far from the staff to render text elements. **/
    double m_textDistDbl;

    
/* include <text.distmixin> */

};

//----------------------------------------------------------------------------
// AttDotLog
//----------------------------------------------------------------------------

class AttDotLog 
{
public:
    AttDotLog();
    virtual ~AttDotLog();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetForm(std::string form) { m_form = form; };
    std::string GetForm() { return m_form; };
    ///@}

protected:
    /** Records the function of the dot. **/
    std::string m_form;

    
/* include <formmixin> */

};

//----------------------------------------------------------------------------
// AttDurationDefault
//----------------------------------------------------------------------------

class AttDurationDefault 
{
public:
    AttDurationDefault();
    virtual ~AttDurationDefault();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetDurDefault(std::string durDefault) { m_durDefault = durDefault; };
    std::string GetDurDefault() { return m_durDefault; };
    ///@}

protected:
    /**
     * Contains a default duration in those situations when the first note, rest,
     * chord, etc.
     * in a measure does not have a duration specified.
     **/
    std::string m_durDefault;

    
/* include <dur.defaultmixin> */

};

//----------------------------------------------------------------------------
// AttDurationMusical
//----------------------------------------------------------------------------

class AttDurationMusical 
{
public:
    AttDurationMusical();
    virtual ~AttDurationMusical();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetDur(std::string dur) { m_dur = dur; };
    std::string GetDur() { return m_dur; };
    ///@}

protected:
    /**
     * Records the duration of a feature using the relative durational values provided
     * by the data.DURATION datatype.
     **/
    std::string m_dur;

    
/* include <durmixin> */

};

//----------------------------------------------------------------------------
// AttDurationPerformed
//----------------------------------------------------------------------------

class AttDurationPerformed 
{
public:
    AttDurationPerformed();
    virtual ~AttDurationPerformed();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetDurGes(std::string durGes) { m_durGes = durGes; };
    std::string GetDurGes() { return m_durGes; };
    ///@}

protected:
    /**
     * Records performed duration information that differs from written duration.
     * Its value may be expressed in any convenient form, such as measures[s]+
     * beat[s].beatpart, ppq (MIDI clicks), Humdrum **recip values, or MusicXML
     * 'divisions', etc.
     **/
    std::string m_durGes;

    
/* include <dur.gesmixin> */

};

//----------------------------------------------------------------------------
// AttDurationRatio
//----------------------------------------------------------------------------

class AttDurationRatio 
{
public:
    AttDurationRatio();
    virtual ~AttDurationRatio();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetNumInt(int numInt) { m_numInt = numInt; };
    int GetNumInt() { return m_numInt; };
    //
    void SetNumbaseInt(int numbaseInt) { m_numbaseInt = numbaseInt; };
    int GetNumbaseInt() { return m_numbaseInt; };
    ///@}

protected:
    /**
     * Along with numbase, describes duration as a ratio.
     * num is the first value in the ratio, while numbase is the second.
     **/
    int m_numInt;
    /**
     * Along with num, describes duration as a ratio.
     * num is the first value in the ratio, while numbase is the second.
     **/
    int m_numbaseInt;

    
/* include <numbasemixin> */

};

//----------------------------------------------------------------------------
// AttDurationTimestamp
//----------------------------------------------------------------------------

class AttDurationTimestamp 
{
public:
    AttDurationTimestamp();
    virtual ~AttDurationTimestamp();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetDur(std::string dur) { m_dur = dur; };
    std::string GetDur() { return m_dur; };
    ///@}

protected:
    /**
     * Records the duration of a feature using the relative durational values provided
     * by the data.DURATION datatype.
     **/
    std::string m_dur;

    
/* include <durmixin> */

};

//----------------------------------------------------------------------------
// AttEnclosingchars
//----------------------------------------------------------------------------

class AttEnclosingchars 
{
public:
    AttEnclosingchars();
    virtual ~AttEnclosingchars();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetEnclose(std::string enclose) { m_enclose = enclose; };
    std::string GetEnclose() { return m_enclose; };
    ///@}

protected:
    /**
     * Records the characters often used to mark accidentals, articulations, and
     * sometimes notes as having a cautionary or editorial function.
     * For an example of cautionary accidentals enclosed in parentheses, see Read, p.
     * 131, ex. 9-14.
     **/
    std::string m_enclose;

    
/* include <enclosemixin> */

};

//----------------------------------------------------------------------------
// AttFermatapresent
//----------------------------------------------------------------------------

class AttFermatapresent 
{
public:
    AttFermatapresent();
    virtual ~AttFermatapresent();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetFermata(std::string fermata) { m_fermata = fermata; };
    std::string GetFermata() { return m_fermata; };
    ///@}

protected:
    /**
     * Indicates the attachment of a fermata to this element.
     * If visual information about the fermata needs to be recorded, then a <fermata>
     * element should be employed instead.
     **/
    std::string m_fermata;

    
/* include <fermatamixin> */

};

//----------------------------------------------------------------------------
// AttHandident
//----------------------------------------------------------------------------

class AttHandident 
{
public:
    AttHandident();
    virtual ~AttHandident();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetHand(std::string hand) { m_hand = hand; };
    std::string GetHand() { return m_hand; };
    ///@}

protected:
    /**
     * Signifies the hand responsible for an action.
     * The value must be the ID of a <hand> element declared in the header.
     **/
    std::string m_hand;

    
/* include <handmixin> */

};

//----------------------------------------------------------------------------
// AttHorizontalalign
//----------------------------------------------------------------------------

class AttHorizontalalign 
{
public:
    AttHorizontalalign();
    virtual ~AttHorizontalalign();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetHalign(std::string halign) { m_halign = halign; };
    std::string GetHalign() { return m_halign; };
    ///@}

protected:
    /** Records horizontal alignment. **/
    std::string m_halign;

    
/* include <halignmixin> */

};

//----------------------------------------------------------------------------
// AttInstrumentident
//----------------------------------------------------------------------------

class AttInstrumentident 
{
public:
    AttInstrumentident();
    virtual ~AttInstrumentident();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetInstr(std::string instr) { m_instr = instr; };
    std::string GetInstr() { return m_instr; };
    ///@}

protected:
    /**
     * Provides a way of pointing to a MIDI instrument definition.
     * It must contain the ID of an <instrDef> element elsewhere in the document.
     **/
    std::string m_instr;

    
/* include <instrmixin> */

};

//----------------------------------------------------------------------------
// AttInternetmedia
//----------------------------------------------------------------------------

class AttInternetmedia 
{
public:
    AttInternetmedia();
    virtual ~AttInternetmedia();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetMimetype(std::string mimetype) { m_mimetype = mimetype; };
    std::string GetMimetype() { return m_mimetype; };
    ///@}

protected:
    /**
     * Specifies the applicable MIME (multimedia internet mail extension) type.
     * The value should be a valid MIME media type defined by the Internet Engineering
     * Task Force in RFC 2046.
     **/
    std::string m_mimetype;

    
/* include <mimetypemixin> */

};

//----------------------------------------------------------------------------
// AttJoined
//----------------------------------------------------------------------------

class AttJoined 
{
public:
    AttJoined();
    virtual ~AttJoined();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetJoin(std::string join) { m_join = join; };
    std::string GetJoin() { return m_join; };
    ///@}

protected:
    /**
     * Used for linking visually separate entities that form a single logical entity,
     * for example, multiple slurs broken across a system break that form a single
     * musical phrase.
     * Also used to indicate a measure which metrically completes the current one.
     * Record the identifiers of the separately encoded components, excluding the one
     * carrying the attribute.
     **/
    std::string m_join;

    
/* include <joinmixin> */

};

//----------------------------------------------------------------------------
// AttKeySigLog
//----------------------------------------------------------------------------

class AttKeySigLog 
{
public:
    AttKeySigLog();
    virtual ~AttKeySigLog();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetMode(std::string mode) { m_mode = mode; };
    std::string GetMode() { return m_mode; };
    ///@}

protected:
    /** Indicates major, minor, or other tonality. **/
    std::string m_mode;

    
/* include <modemixin> */

};

//----------------------------------------------------------------------------
// AttKeySigDefaultLog
//----------------------------------------------------------------------------

class AttKeySigDefaultLog 
{
public:
    AttKeySigDefaultLog();
    virtual ~AttKeySigDefaultLog();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetKeyAccid(std::string keyAccid) { m_keyAccid = keyAccid; };
    std::string GetKeyAccid() { return m_keyAccid; };
    //
    void SetKeyMode(std::string keyMode) { m_keyMode = keyMode; };
    std::string GetKeyMode() { return m_keyMode; };
    //
    void SetKeyPname(std::string keyPname) { m_keyPname = keyPname; };
    std::string GetKeyPname() { return m_keyPname; };
    //
    void SetKeySig(std::string keySig) { m_keySig = keySig; };
    std::string GetKeySig() { return m_keySig; };
    //
    void SetKeySigMixed(std::string keySigMixed) { m_keySigMixed = keySigMixed; };
    std::string GetKeySigMixed() { return m_keySigMixed; };
    ///@}

protected:
    /**
     * Contains an accidental for the tonic key, if one is required, e.g., if key.pname
     * equals 'c' and key.accid equals 's', then a tonic of C# is indicated.
     **/
    std::string m_keyAccid;
    /** Indicates major, minor, or other tonality. **/
    std::string m_keyMode;
    /**
     * Holds the pitch name of the tonic key, e.g.
     * 'c' for the key of C.
     **/
    std::string m_keyPname;
    /** Indicates where the key lies in the circle of fifths. **/
    std::string m_keySig;
    /**
     * Mixed key signatures, e.g.
     * those consisting of a mixture of flats and sharps (Read, p. 143, ex. 9-39), and
     * key signatures with unorthodox placement of the accidentals (Read, p. 141) must
     * be indicated by setting the key.sig attribute to 'mixed' and providing explicit
     * key signature information in the key.sig.mixed attribute or in the <keySig>
     * element. It is intended that key.sig.mixed contain a series of tokens with each
     * token containing pitch name, accidental, and octave, such as 'A4 Cs5 Ef5' that
     * indicate what key accidentals should be rendered and where they should be
     * placed.
     **/
    std::string m_keySigMixed;

    
/* include <key.sig.mixedmixin> */

};

//----------------------------------------------------------------------------
// AttKeySigDefaultVis
//----------------------------------------------------------------------------

class AttKeySigDefaultVis 
{
public:
    AttKeySigDefaultVis();
    virtual ~AttKeySigDefaultVis();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetKeySigShow(std::string keySigShow) { m_keySigShow = keySigShow; };
    std::string GetKeySigShow() { return m_keySigShow; };
    //
    void SetKeySigShowchange(std::string keySigShowchange) { m_keySigShowchange = keySigShowchange; };
    std::string GetKeySigShowchange() { return m_keySigShowchange; };
    ///@}

protected:
    /** Indicates whether the key signature should be displayed. **/
    std::string m_keySigShow;
    /** Determines whether cautionary accidentals should be displayed at a key change. **/
    std::string m_keySigShowchange;

    
/* include <key.sig.showchangemixin> */

};

//----------------------------------------------------------------------------
// AttLabelsAddl
//----------------------------------------------------------------------------

class AttLabelsAddl 
{
public:
    AttLabelsAddl();
    virtual ~AttLabelsAddl();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetLabelAbbr(std::string labelAbbr) { m_labelAbbr = labelAbbr; };
    std::string GetLabelAbbr() { return m_labelAbbr; };
    ///@}

protected:
    /**
     * Provides a label for a group of staves on pages after the first page.
     * Usually, this label takes an abbreviated form.
     **/
    std::string m_labelAbbr;

    
/* include <label.abbrmixin> */

};

//----------------------------------------------------------------------------
// AttLang
//----------------------------------------------------------------------------

class AttLang 
{
public:
    AttLang();
    virtual ~AttLang();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetLang(std::string lang) { m_lang = lang; };
    std::string GetLang() { return m_lang; };
    ///@}

protected:
    /** --- **/
    std::string m_lang;

    
/* include <langmixin> */

};

//----------------------------------------------------------------------------
// AttLayerLog
//----------------------------------------------------------------------------

class AttLayerLog 
{
public:
    AttLayerLog();
    virtual ~AttLayerLog();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetDef(std::string def) { m_def = def; };
    std::string GetDef() { return m_def; };
    ///@}

protected:
    /** Provides a mechanism for linking the layer to a layerDef element. **/
    std::string m_def;

    
/* include <defmixin> */

};

//----------------------------------------------------------------------------
// AttLayerident
//----------------------------------------------------------------------------

class AttLayerident 
{
public:
    AttLayerident();
    virtual ~AttLayerident();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetLayer(std::string layer) { m_layer = layer; };
    std::string GetLayer() { return m_layer; };
    ///@}

protected:
    /** Identifies the layer to which a feature applies. **/
    std::string m_layer;

    
/* include <layermixin> */

};

//----------------------------------------------------------------------------
// AttLineloc
//----------------------------------------------------------------------------

class AttLineloc 
{
public:
    AttLineloc();
    virtual ~AttLineloc();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetLine(std::string line) { m_line = line; };
    std::string GetLine() { return m_line; };
    ///@}

protected:
    /**
     * Indicates the line upon which a feature stands.
     * The value must be in the range between 1 and the number of lines on the staff.
     * The numbering of lines starts with the lowest line of the staff.
     **/
    std::string m_line;

    
/* include <linemixin> */

};

//----------------------------------------------------------------------------
// AttLinerend
//----------------------------------------------------------------------------

class AttLinerend 
{
public:
    AttLinerend();
    virtual ~AttLinerend();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetRend(std::string rend) { m_rend = rend; };
    std::string GetRend() { return m_rend; };
    ///@}

protected:
    /** Describes the line style of the curve. **/
    std::string m_rend;

    
/* include <rendmixin> */

};

//----------------------------------------------------------------------------
// AttLyricstyle
//----------------------------------------------------------------------------

class AttLyricstyle 
{
public:
    AttLyricstyle();
    virtual ~AttLyricstyle();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetLyricAlignDbl(double lyricAlignDbl) { m_lyricAlignDbl = lyricAlignDbl; };
    double GetLyricAlignDbl() { return m_lyricAlignDbl; };
    //
    void SetLyricFam(std::string lyricFam) { m_lyricFam = lyricFam; };
    std::string GetLyricFam() { return m_lyricFam; };
    //
    void SetLyricName(std::string lyricName) { m_lyricName = lyricName; };
    std::string GetLyricName() { return m_lyricName; };
    //
    void SetLyricSizeDbl(double lyricSizeDbl) { m_lyricSizeDbl = lyricSizeDbl; };
    double GetLyricSizeDbl() { return m_lyricSizeDbl; };
    //
    void SetLyricStyle(std::string lyricStyle) { m_lyricStyle = lyricStyle; };
    std::string GetLyricStyle() { return m_lyricStyle; };
    //
    void SetLyricWeight(std::string lyricWeight) { m_lyricWeight = lyricWeight; };
    std::string GetLyricWeight() { return m_lyricWeight; };
    ///@}

protected:
    /** Describes the alignment of lyric syllables associated with a note or chord. **/
    double m_lyricAlignDbl;
    /** Sets the font family default value for lyrics. **/
    std::string m_lyricFam;
    /** Sets the font name default value for lyrics. **/
    std::string m_lyricName;
    /** Sets the default font size value for lyrics. **/
    double m_lyricSizeDbl;
    /** Sets the default font style value for lyrics. **/
    std::string m_lyricStyle;
    /** Sets the default font weight value for lyrics. **/
    std::string m_lyricWeight;

    
/* include <lyric.weightmixin> */

};

//----------------------------------------------------------------------------
// AttMeasureLog
//----------------------------------------------------------------------------

class AttMeasureLog 
{
public:
    AttMeasureLog();
    virtual ~AttMeasureLog();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetLeft(std::string left) { m_left = left; };
    std::string GetLeft() { return m_left; };
    //
    void SetRight(std::string right) { m_right = right; };
    std::string GetRight() { return m_right; };
    ///@}

protected:
    /**
     * Indicates the visual rendition of the left bar line.
     * It is present here only for facilitation of translation from legacy encodings
     * which use it. Usually, it can be safely ignored.
     **/
    std::string m_left;
    /** Indicates the function of the right bar line and is structurally important. **/
    std::string m_right;

    
/* include <rightmixin> */

};

//----------------------------------------------------------------------------
// AttMeasurement
//----------------------------------------------------------------------------

class AttMeasurement 
{
public:
    AttMeasurement();
    virtual ~AttMeasurement();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetUnitDbl(double unitDbl) { m_unitDbl = unitDbl; };
    double GetUnitDbl() { return m_unitDbl; };
    ///@}

protected:
    /** Indicates the unit used for a measurement of size. **/
    double m_unitDbl;

    
/* include <unitmixin> */

};

//----------------------------------------------------------------------------
// AttMediabounds
//----------------------------------------------------------------------------

class AttMediabounds 
{
public:
    AttMediabounds();
    virtual ~AttMediabounds();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetBegin(std::string begin) { m_begin = begin; };
    std::string GetBegin() { return m_begin; };
    //
    void SetEnd(std::string end) { m_end = end; };
    std::string GetEnd() { return m_end; };
    //
    void SetBetype(std::string betype) { m_betype = betype; };
    std::string GetBetype() { return m_betype; };
    ///@}

protected:
    /**
     * Specifies a point where the relevant content begins.
     * A numerical value must be less and a time value must be earlier than that in the
     * end attribute.
     **/
    std::string m_begin;
    /**
     * Specifies a point where the relevant content ends.
     * If not specified, the end of the content is assumed to be the end point. A
     * numerical value must be greater and a time value must be later than that in the
     * begin attribute.
     **/
    std::string m_end;
    /**
     * Type of values used in the begin/end attributes.
     * The begin and end attributes can only be interpreted meaningfully in conjunction
     * with this attribute.
     **/
    std::string m_betype;

    
/* include <betypemixin> */

};

//----------------------------------------------------------------------------
// AttMedium
//----------------------------------------------------------------------------

class AttMedium 
{
public:
    AttMedium();
    virtual ~AttMedium();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetMedium(std::string medium) { m_medium = medium; };
    std::string GetMedium() { return m_medium; };
    ///@}

protected:
    /** Describes the writing medium. **/
    std::string m_medium;

    
/* include <mediummixin> */

};

//----------------------------------------------------------------------------
// AttMeiversion
//----------------------------------------------------------------------------

class AttMeiversion 
{
public:
    AttMeiversion();
    virtual ~AttMeiversion();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetMeiversion(std::string meiversion) { m_meiversion = meiversion; };
    std::string GetMeiversion() { return m_meiversion; };
    ///@}

protected:
    /** Specifies the version number of the MEI Guidelines in use. **/
    std::string m_meiversion;

    
/* include <meiversionmixin> */

};

//----------------------------------------------------------------------------
// AttMensurLog
//----------------------------------------------------------------------------

class AttMensurLog 
{
public:
    AttMensurLog();
    virtual ~AttMensurLog();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetDot(std::string dot) { m_dot = dot; };
    std::string GetDot() { return m_dot; };
    //
    void SetModusmaior(std::string modusmaior) { m_modusmaior = modusmaior; };
    std::string GetModusmaior() { return m_modusmaior; };
    //
    void SetModusminor(std::string modusminor) { m_modusminor = modusminor; };
    std::string GetModusminor() { return m_modusminor; };
    //
    void SetProlatio(std::string prolatio) { m_prolatio = prolatio; };
    std::string GetProlatio() { return m_prolatio; };
    //
    void SetSign(std::string sign) { m_sign = sign; };
    std::string GetSign() { return m_sign; };
    //
    void SetTempus(std::string tempus) { m_tempus = tempus; };
    std::string GetTempus() { return m_tempus; };
    ///@}

protected:
    /** Specifies whether a dot is to be added to the base symbol. **/
    std::string m_dot;
    /** Describes the maxima-long relationship. **/
    std::string m_modusmaior;
    /** Describes the long-breve relationship. **/
    std::string m_modusminor;
    /** Describes the semibreve-minim relationship. **/
    std::string m_prolatio;
    /** The base symbol in the mensuration sign/time signature of mensural notation. **/
    std::string m_sign;
    /** Describes the breve-semibreve relationship. **/
    std::string m_tempus;

    
/* include <tempusmixin> */

};

//----------------------------------------------------------------------------
// AttMeterSigLog
//----------------------------------------------------------------------------

class AttMeterSigLog 
{
public:
    AttMeterSigLog();
    virtual ~AttMeterSigLog();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetCountDbl(double countDbl) { m_countDbl = countDbl; };
    double GetCountDbl() { return m_countDbl; };
    //
    void SetSym(std::string sym) { m_sym = sym; };
    std::string GetSym() { return m_sym; };
    //
    void SetUnitDbl(double unitDbl) { m_unitDbl = unitDbl; };
    double GetUnitDbl() { return m_unitDbl; };
    ///@}

protected:
    /**
     * Captures the number of beats in a measure, that is, the top number of the meter
     * signature.
     **/
    double m_countDbl;
    /**
     * Indicates the use of a meter symbol instead of a numeric meter signature, that
     * is, 'C' for common time or 'C' with a slash for cut time.
     **/
    std::string m_sym;
    /** Indicates the unit used for a measurement of size. **/
    double m_unitDbl;

    
/* include <unitmixin> */

};

//----------------------------------------------------------------------------
// AttMeterSigVis
//----------------------------------------------------------------------------

class AttMeterSigVis 
{
public:
    AttMeterSigVis();
    virtual ~AttMeterSigVis();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetRend(std::string rend) { m_rend = rend; };
    std::string GetRend() { return m_rend; };
    ///@}

protected:
    /** Describes the line style of the curve. **/
    std::string m_rend;

    
/* include <rendmixin> */

};

//----------------------------------------------------------------------------
// AttMeterSigDefaultLog
//----------------------------------------------------------------------------

class AttMeterSigDefaultLog 
{
public:
    AttMeterSigDefaultLog();
    virtual ~AttMeterSigDefaultLog();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetMeterCountDbl(double meterCountDbl) { m_meterCountDbl = meterCountDbl; };
    double GetMeterCountDbl() { return m_meterCountDbl; };
    //
    void SetMeterUnitDbl(double meterUnitDbl) { m_meterUnitDbl = meterUnitDbl; };
    double GetMeterUnitDbl() { return m_meterUnitDbl; };
    ///@}

protected:
    /**
     * Captures the number of beats in a measure, that is, the top number of the meter
     * signature.
     **/
    double m_meterCountDbl;
    /**
     * Contains the number indicating the beat unit, that is, the bottom number of the
     * meter signature.
     **/
    double m_meterUnitDbl;

    
/* include <meter.unitmixin> */

};

//----------------------------------------------------------------------------
// AttMeterSigDefaultVis
//----------------------------------------------------------------------------

class AttMeterSigDefaultVis 
{
public:
    AttMeterSigDefaultVis();
    virtual ~AttMeterSigDefaultVis();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetMeterRend(std::string meterRend) { m_meterRend = meterRend; };
    std::string GetMeterRend() { return m_meterRend; };
    //
    void SetMeterShowchange(std::string meterShowchange) { m_meterShowchange = meterShowchange; };
    std::string GetMeterShowchange() { return m_meterShowchange; };
    //
    void SetMeterSym(std::string meterSym) { m_meterSym = meterSym; };
    std::string GetMeterSym() { return m_meterSym; };
    ///@}

protected:
    /** Contains an indication of how the meter signature should be rendered. **/
    std::string m_meterRend;
    /**
     * Determines whether a new meter signature should be displayed when the meter
     * signature changes.
     **/
    std::string m_meterShowchange;
    /**
     * Indicates the use of a meter symbol instead of a numeric meter signature, that
     * is, 'C' for common time or 'C' with a slash for cut time.
     **/
    std::string m_meterSym;

    
/* include <meter.symmixin> */

};

//----------------------------------------------------------------------------
// AttMeterconformance
//----------------------------------------------------------------------------

class AttMeterconformance 
{
public:
    AttMeterconformance();
    virtual ~AttMeterconformance();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetMetcon(std::string metcon) { m_metcon = metcon; };
    std::string GetMetcon() { return m_metcon; };
    ///@}

protected:
    /**
     * Indicates the relationship between the content of a staff or layer and the
     * prevailing meter.
     **/
    std::string m_metcon;

    
/* include <metconmixin> */

};

//----------------------------------------------------------------------------
// AttMeterconformanceBar
//----------------------------------------------------------------------------

class AttMeterconformanceBar 
{
public:
    AttMeterconformanceBar();
    virtual ~AttMeterconformanceBar();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetMetcon(std::string metcon) { m_metcon = metcon; };
    std::string GetMetcon() { return m_metcon; };
    //
    void SetControl(std::string control) { m_control = control; };
    std::string GetControl() { return m_control; };
    ///@}

protected:
    /**
     * Indicates the relationship between the content of a staff or layer and the
     * prevailing meter.
     **/
    std::string m_metcon;
    /**
     * Indicates whether or not a bar line is "controlling"; that is, if it indicates a
     * point of alignment across all the parts.
     * Bar lines within a score are usually controlling; that is, they "line up". Bar
     * lines within parts may or may not be controlling. When applied to <measure>,
     * this attribute indicates the nature of the right barline but not the left.
     **/
    std::string m_control;

    
/* include <controlmixin> */

};

//----------------------------------------------------------------------------
// AttMmtempo
//----------------------------------------------------------------------------

class AttMmtempo 
{
public:
    AttMmtempo();
    virtual ~AttMmtempo();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetMm(std::string mm) { m_mm = mm; };
    std::string GetMm() { return m_mm; };
    ///@}

protected:
    /**
     * Used to describe tempo in terms of beats (meter signature denominator) per
     * minute, ala M.M.
     * (Maezel's Metronome).
     **/
    std::string m_mm;

    
/* include <mmmixin> */

};

//----------------------------------------------------------------------------
// AttMultinummeasures
//----------------------------------------------------------------------------

class AttMultinummeasures 
{
public:
    AttMultinummeasures();
    virtual ~AttMultinummeasures();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetMultiNumber(std::string multiNumber) { m_multiNumber = multiNumber; };
    std::string GetMultiNumber() { return m_multiNumber; };
    ///@}

protected:
    /**
     * Indicates whether programmatically calculated counts of multiple measures of
     * rest (mRest) and whole measure repeats (mRpt) in parts should be rendered.
     **/
    std::string m_multiNumber;

    
/* include <multi.numbermixin> */

};

//----------------------------------------------------------------------------
// AttName
//----------------------------------------------------------------------------

class AttName 
{
public:
    AttName();
    virtual ~AttName();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetNymref(std::string nymref) { m_nymref = nymref; };
    std::string GetNymref() { return m_nymref; };
    //
    void SetRole(std::string role) { m_role = role; };
    std::string GetRole() { return m_role; };
    ///@}

protected:
    /**
     * Used to record a pointer to the regularized form of the name elsewhere in the
     * document.
     **/
    std::string m_nymref;
    /**
     * Used to specify further information about the entity referenced by this name,
     * for example, the occupation of a person or the status of a place.
     **/
    std::string m_role;

    
/* include <rolemixin> */

};

//----------------------------------------------------------------------------
// AttNoteGes
//----------------------------------------------------------------------------

class AttNoteGes 
{
public:
    AttNoteGes();
    virtual ~AttNoteGes();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetOctGes(std::string octGes) { m_octGes = octGes; };
    std::string GetOctGes() { return m_octGes; };
    //
    void SetPnameGes(std::string pnameGes) { m_pnameGes = pnameGes; };
    std::string GetPnameGes() { return m_pnameGes; };
    //
    void SetPnum(std::string pnum) { m_pnum = pnum; };
    std::string GetPnum() { return m_pnum; };
    ///@}

protected:
    /** Records performed octave information that differs from the written value. **/
    std::string m_octGes;
    /** Contains a performed pitch name that differs from the written value. **/
    std::string m_pnameGes;
    /** Holds a pitch-to-number mapping, a base-40 or MIDI note number, for example. **/
    std::string m_pnum;

    
/* include <pnummixin> */

};

//----------------------------------------------------------------------------
// AttNoteVis
//----------------------------------------------------------------------------

class AttNoteVis 
{
public:
    AttNoteVis();
    virtual ~AttNoteVis();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetHeadshape(std::string headshape) { m_headshape = headshape; };
    std::string GetHeadshape() { return m_headshape; };
    ///@}

protected:
    /** Used to override the head shape normally used for the given duration. **/
    std::string m_headshape;

    
/* include <headshapemixin> */

};

//----------------------------------------------------------------------------
// AttOctave
//----------------------------------------------------------------------------

class AttOctave 
{
public:
    AttOctave();
    virtual ~AttOctave();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetOct(std::string oct) { m_oct = oct; };
    std::string GetOct() { return m_oct; };
    ///@}

protected:
    /** Captures written octave information. **/
    std::string m_oct;

    
/* include <octmixin> */

};

//----------------------------------------------------------------------------
// AttOctavedefault
//----------------------------------------------------------------------------

class AttOctavedefault 
{
public:
    AttOctavedefault();
    virtual ~AttOctavedefault();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetOctaveDefault(std::string octaveDefault) { m_octaveDefault = octaveDefault; };
    std::string GetOctaveDefault() { return m_octaveDefault; };
    ///@}

protected:
    /**
     * Contains a default octave specification for use when the first note, rest,
     * chord, etc.
     * in a measure does not have an octave value specified.
     **/
    std::string m_octaveDefault;

    
/* include <octave.defaultmixin> */

};

//----------------------------------------------------------------------------
// AttOctavedisplacement
//----------------------------------------------------------------------------

class AttOctavedisplacement 
{
public:
    AttOctavedisplacement();
    virtual ~AttOctavedisplacement();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetDis(std::string dis) { m_dis = dis; };
    std::string GetDis() { return m_dis; };
    //
    void SetDisPlace(std::string disPlace) { m_disPlace = disPlace; };
    std::string GetDisPlace() { return m_disPlace; };
    ///@}

protected:
    /** Records the amount of octave displacement. **/
    std::string m_dis;
    /** Records the direction of octave displacement. **/
    std::string m_disPlace;

    
/* include <dis.placemixin> */

};

//----------------------------------------------------------------------------
// AttOnelinestaff
//----------------------------------------------------------------------------

class AttOnelinestaff 
{
public:
    AttOnelinestaff();
    virtual ~AttOnelinestaff();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetOntheline(std::string ontheline) { m_ontheline = ontheline; };
    std::string GetOntheline() { return m_ontheline; };
    ///@}

protected:
    /**
     * Determines the placement of notes on a 1-line staff.
     * A value of 'true' places all notes on the line, while a value of 'false' places
     * stems-up notes above the line and stems-down notes below the line.
     **/
    std::string m_ontheline;

    
/* include <onthelinemixin> */

};

//----------------------------------------------------------------------------
// AttPadLog
//----------------------------------------------------------------------------

class AttPadLog 
{
public:
    AttPadLog();
    virtual ~AttPadLog();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetNumInt(int numInt) { m_numInt = numInt; };
    int GetNumInt() { return m_numInt; };
    ///@}

protected:
    /**
     * Along with numbase, describes duration as a ratio.
     * num is the first value in the ratio, while numbase is the second.
     **/
    int m_numInt;

    
/* include <nummixin> */

};

//----------------------------------------------------------------------------
// AttPbVis
//----------------------------------------------------------------------------

class AttPbVis 
{
public:
    AttPbVis();
    virtual ~AttPbVis();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetFunc(std::string func) { m_func = func; };
    std::string GetFunc() { return m_func; };
    ///@}

protected:
    /** Records the function of an accidental. **/
    std::string m_func;

    
/* include <funcmixin> */

};

//----------------------------------------------------------------------------
// AttPitch
//----------------------------------------------------------------------------

class AttPitch 
{
public:
    AttPitch();
    virtual ~AttPitch();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetPname(std::string pname) { m_pname = pname; };
    std::string GetPname() { return m_pname; };
    ///@}

protected:
    /** Contains a written pitch name. **/
    std::string m_pname;

    
/* include <pnamemixin> */

};

//----------------------------------------------------------------------------
// AttPlacement
//----------------------------------------------------------------------------

class AttPlacement 
{
public:
    AttPlacement();
    virtual ~AttPlacement();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetPlace(std::string place) { m_place = place; };
    std::string GetPlace() { return m_place; };
    ///@}

protected:
    /**
     * Captures the placement of the item with respect to the staff with which it is
     * associated.
     **/
    std::string m_place;

    
/* include <placemixin> */

};

//----------------------------------------------------------------------------
// AttPlist
//----------------------------------------------------------------------------

class AttPlist 
{
public:
    AttPlist();
    virtual ~AttPlist();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetPlist(std::string plist) { m_plist = plist; };
    std::string GetPlist() { return m_plist; };
    //
    void SetEvaluate(std::string evaluate) { m_evaluate = evaluate; };
    std::string GetEvaluate() { return m_evaluate; };
    ///@}

protected:
    /**
     * Contains a space separated list of references that identify logical events that
     * participate in a collection, such as notes under a phrase mark.
     **/
    std::string m_plist;
    /** Specifies the intended meaning when the target of a pointer is itself a pointer. **/
    std::string m_evaluate;

    
/* include <evaluatemixin> */

};

//----------------------------------------------------------------------------
// AttPointing
//----------------------------------------------------------------------------

class AttPointing 
{
public:
    AttPointing();
    virtual ~AttPointing();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetActuate(std::string actuate) { m_actuate = actuate; };
    std::string GetActuate() { return m_actuate; };
    //
    void SetRole(std::string role) { m_role = role; };
    std::string GetRole() { return m_role; };
    //
    void SetShow(std::string show) { m_show = show; };
    std::string GetShow() { return m_show; };
    //
    void SetTarget(std::string target) { m_target = target; };
    std::string GetTarget() { return m_target; };
    //
    void SetTargettype(std::string targettype) { m_targettype = targettype; };
    std::string GetTargettype() { return m_targettype; };
    //
    void SetTitle(std::string title) { m_title = title; };
    std::string GetTitle() { return m_title; };
    ///@}

protected:
    /** --- **/
    std::string m_actuate;
    /**
     * Used to specify further information about the entity referenced by this name,
     * for example, the occupation of a person or the status of a place.
     **/
    std::string m_role;
    /** --- **/
    std::string m_show;
    /**
     * Allows the use of one or more previously-undeclared URIs to identify an external
     * electronic object.
     **/
    std::string m_target;
    /**
     * In contrast with the role attribute, allows the target resource to be
     * characterized using any convenient classification scheme or typology.
     **/
    std::string m_targettype;
    /** --- **/
    std::string m_title;

    
/* include <titlemixin> */

};

//----------------------------------------------------------------------------
// AttRelativesize
//----------------------------------------------------------------------------

class AttRelativesize 
{
public:
    AttRelativesize();
    virtual ~AttRelativesize();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetSize(std::string size) { m_size = size; };
    std::string GetSize() { return m_size; };
    ///@}

protected:
    /** Describes the relative size of a feature. **/
    std::string m_size;

    
/* include <sizemixin> */

};

//----------------------------------------------------------------------------
// AttResponsibility
//----------------------------------------------------------------------------

class AttResponsibility 
{
public:
    AttResponsibility();
    virtual ~AttResponsibility();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetResp(std::string resp) { m_resp = resp; };
    std::string GetResp() { return m_resp; };
    ///@}

protected:
    /**
     * Captures information regarding responsibility for some aspect of the text's
     * creation, transcription, editing, or encoding.
     * Its value must point to one or more identifiers declared in the document header.
     **/
    std::string m_resp;

    
/* include <respmixin> */

};

//----------------------------------------------------------------------------
// AttSbVis
//----------------------------------------------------------------------------

class AttSbVis 
{
public:
    AttSbVis();
    virtual ~AttSbVis();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetRend(std::string rend) { m_rend = rend; };
    std::string GetRend() { return m_rend; };
    ///@}

protected:
    /** Describes the line style of the curve. **/
    std::string m_rend;

    
/* include <rendmixin> */

};

//----------------------------------------------------------------------------
// AttScalable
//----------------------------------------------------------------------------

class AttScalable 
{
public:
    AttScalable();
    virtual ~AttScalable();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetScale(std::string scale) { m_scale = scale; };
    std::string GetScale() { return m_scale; };
    ///@}

protected:
    /** Scale factor to be applied to the feature to make it the desired display size. **/
    std::string m_scale;

    
/* include <scalemixin> */

};

//----------------------------------------------------------------------------
// AttScoreDefGes
//----------------------------------------------------------------------------

class AttScoreDefGes 
{
public:
    AttScoreDefGes();
    virtual ~AttScoreDefGes();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetTunePname(std::string tunePname) { m_tunePname = tunePname; };
    std::string GetTunePname() { return m_tunePname; };
    //
    void SetTuneHzDbl(double tuneHzDbl) { m_tuneHzDbl = tuneHzDbl; };
    double GetTuneHzDbl() { return m_tuneHzDbl; };
    //
    void SetTuneTemper(std::string tuneTemper) { m_tuneTemper = tuneTemper; };
    std::string GetTuneTemper() { return m_tuneTemper; };
    ///@}

protected:
    /** Holds the pitch name of a tuning reference pitch. **/
    std::string m_tunePname;
    /** Holds a value for cycles per second, i.e., Hertz, for a tuning reference pitch. **/
    double m_tuneHzDbl;
    /** Provides an indication of the tuning system, 'just', for example. **/
    std::string m_tuneTemper;

    
/* include <tune.tempermixin> */

};

//----------------------------------------------------------------------------
// AttScoreDefVis
//----------------------------------------------------------------------------

class AttScoreDefVis 
{
public:
    AttScoreDefVis();
    virtual ~AttScoreDefVis();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetEndingRend(std::string endingRend) { m_endingRend = endingRend; };
    std::string GetEndingRend() { return m_endingRend; };
    //
    void SetMnumVisible(std::string mnumVisible) { m_mnumVisible = mnumVisible; };
    std::string GetMnumVisible() { return m_mnumVisible; };
    //
    void SetMusicName(std::string musicName) { m_musicName = musicName; };
    std::string GetMusicName() { return m_musicName; };
    //
    void SetMusicSizeDbl(double musicSizeDbl) { m_musicSizeDbl = musicSizeDbl; };
    double GetMusicSizeDbl() { return m_musicSizeDbl; };
    //
    void SetOptimize(std::string optimize) { m_optimize = optimize; };
    std::string GetOptimize() { return m_optimize; };
    //
    void SetPageHeightDbl(double pageHeightDbl) { m_pageHeightDbl = pageHeightDbl; };
    double GetPageHeightDbl() { return m_pageHeightDbl; };
    //
    void SetPageWidthDbl(double pageWidthDbl) { m_pageWidthDbl = pageWidthDbl; };
    double GetPageWidthDbl() { return m_pageWidthDbl; };
    //
    void SetPageUnits(std::string pageUnits) { m_pageUnits = pageUnits; };
    std::string GetPageUnits() { return m_pageUnits; };
    //
    void SetPageTopmarDbl(double pageTopmarDbl) { m_pageTopmarDbl = pageTopmarDbl; };
    double GetPageTopmarDbl() { return m_pageTopmarDbl; };
    //
    void SetPageBotmarDbl(double pageBotmarDbl) { m_pageBotmarDbl = pageBotmarDbl; };
    double GetPageBotmarDbl() { return m_pageBotmarDbl; };
    //
    void SetPageLeftmarDbl(double pageLeftmarDbl) { m_pageLeftmarDbl = pageLeftmarDbl; };
    double GetPageLeftmarDbl() { return m_pageLeftmarDbl; };
    //
    void SetPageRightmarDbl(double pageRightmarDbl) { m_pageRightmarDbl = pageRightmarDbl; };
    double GetPageRightmarDbl() { return m_pageRightmarDbl; };
    //
    void SetPagePanels(std::string pagePanels) { m_pagePanels = pagePanels; };
    std::string GetPagePanels() { return m_pagePanels; };
    //
    void SetPageScale(std::string pageScale) { m_pageScale = pageScale; };
    std::string GetPageScale() { return m_pageScale; };
    //
    void SetSpacingPackexpDbl(double spacingPackexpDbl) { m_spacingPackexpDbl = spacingPackexpDbl; };
    double GetSpacingPackexpDbl() { return m_spacingPackexpDbl; };
    //
    void SetSpacingPackfactDbl(double spacingPackfactDbl) { m_spacingPackfactDbl = spacingPackfactDbl; };
    double GetSpacingPackfactDbl() { return m_spacingPackfactDbl; };
    //
    void SetSpacingStaffDbl(double spacingStaffDbl) { m_spacingStaffDbl = spacingStaffDbl; };
    double GetSpacingStaffDbl() { return m_spacingStaffDbl; };
    //
    void SetSpacingSystem(std::string spacingSystem) { m_spacingSystem = spacingSystem; };
    std::string GetSpacingSystem() { return m_spacingSystem; };
    //
    void SetSystemLeftmarDbl(double systemLeftmarDbl) { m_systemLeftmarDbl = systemLeftmarDbl; };
    double GetSystemLeftmarDbl() { return m_systemLeftmarDbl; };
    //
    void SetSystemRightmarDbl(double systemRightmarDbl) { m_systemRightmarDbl = systemRightmarDbl; };
    double GetSystemRightmarDbl() { return m_systemRightmarDbl; };
    //
    void SetSystemTopmarDbl(double systemTopmarDbl) { m_systemTopmarDbl = systemTopmarDbl; };
    double GetSystemTopmarDbl() { return m_systemTopmarDbl; };
    ///@}

protected:
    /** Describes where ending marks should be displayed. **/
    std::string m_endingRend;
    /** Indicates whether measure numbers should be displayed. **/
    std::string m_mnumVisible;
    /** Sets the default music font name. **/
    std::string m_musicName;
    /** Sets the default music font size. **/
    double m_musicSizeDbl;
    /**
     * Indicates whether staves without notes, rests, etc.
     * should be displayed. When the value is 'true', empty staves are displayed.
     **/
    std::string m_optimize;
    /** Describes the physical height of the rendered output page. **/
    double m_pageHeightDbl;
    /** Describes the physical width of the rendered output page. **/
    double m_pageWidthDbl;
    /**
     * Contains the real-world measurement units (inches, centimeters, millimeters)
     * used to describe the rendered page height, width, and margins.
     **/
    std::string m_pageUnits;
    /** Indicates the amount of whitespace at the top of a rendered score page. **/
    double m_pageTopmarDbl;
    /** Indicates the amount of whitespace at the bottom of a rendered score page. **/
    double m_pageBotmarDbl;
    /** Indicates the amount of whitespace at the left side of a rendered score page. **/
    double m_pageLeftmarDbl;
    /** Indicates the amount of whitespace at the right side of a rendered score page. **/
    double m_pageRightmarDbl;
    /** Indicates the number of logical pages to be rendered on a single physical page. **/
    std::string m_pagePanels;
    /** Indicates how the page should be scaled when rendered. **/
    std::string m_pageScale;
    /** Describes a note's spacing relative to its time value. **/
    double m_spacingPackexpDbl;
    /** Describes the note spacing of output. **/
    double m_spacingPackfactDbl;
    /** Sets the minimum amount of space between staves in the same system. **/
    double m_spacingStaffDbl;
    /**
     * Contains a space-separated pair of numbers describing the minimum and maximum
     * amount of space between systems.
     **/
    std::string m_spacingSystem;
    /**
     * Describes the amount of whitespace at the left system margin relative to
     * page.leftmar.
     **/
    double m_systemLeftmarDbl;
    /**
     * Describes the amount of whitespace at the right system margin relative to
     * page.rightmar.
     **/
    double m_systemRightmarDbl;
    /**
     * Describes the distance from page's top edge to the first system; used for first
     * page only.
     **/
    double m_systemTopmarDbl;

    
/* include <system.topmarmixin> */

};

//----------------------------------------------------------------------------
// AttSectionVis
//----------------------------------------------------------------------------

class AttSectionVis 
{
public:
    AttSectionVis();
    virtual ~AttSectionVis();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetRestart(std::string restart) { m_restart = restart; };
    std::string GetRestart() { return m_restart; };
    ///@}

protected:
    /** Indicates that staves begin again with this section. **/
    std::string m_restart;

    
/* include <restartmixin> */

};

//----------------------------------------------------------------------------
// AttSequence
//----------------------------------------------------------------------------

class AttSequence 
{
public:
    AttSequence();
    virtual ~AttSequence();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetSeqInt(int seqInt) { m_seqInt = seqInt; };
    int GetSeqInt() { return m_seqInt; };
    ///@}

protected:
    /**
     * Used to assign a sequence number related to the order in which the encoded
     * features carrying this attribute are believed to have occurred.
     **/
    int m_seqInt;

    
/* include <seqmixin> */

};

//----------------------------------------------------------------------------
// AttSlashcount
//----------------------------------------------------------------------------

class AttSlashcount 
{
public:
    AttSlashcount();
    virtual ~AttSlashcount();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetSlash(std::string slash) { m_slash = slash; };
    std::string GetSlash() { return m_slash; };
    ///@}

protected:
    /** Indicates the number of slashes present. **/
    std::string m_slash;

    
/* include <slashmixin> */

};

//----------------------------------------------------------------------------
// AttSlurpresent
//----------------------------------------------------------------------------

class AttSlurpresent 
{
public:
    AttSlurpresent();
    virtual ~AttSlurpresent();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetSlur(std::string slur) { m_slur = slur; };
    std::string GetSlur() { return m_slur; };
    ///@}

protected:
    /**
     * Indicates that this element participates in a slur.
     * If visual information about the slur needs to be recorded, then a <slur> element
     * should be employed.
     **/
    std::string m_slur;

    
/* include <slurmixin> */

};

//----------------------------------------------------------------------------
// AttSpaceVis
//----------------------------------------------------------------------------

class AttSpaceVis 
{
public:
    AttSpaceVis();
    virtual ~AttSpaceVis();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetCompressable(std::string compressable) { m_compressable = compressable; };
    std::string GetCompressable() { return m_compressable; };
    ///@}

protected:
    /**
     * Indicates whether a space is 'compressible', i.e., if it may be removed at the
     * discretion of processing software.
     **/
    std::string m_compressable;

    
/* include <compressablemixin> */

};

//----------------------------------------------------------------------------
// AttStaffLog
//----------------------------------------------------------------------------

class AttStaffLog 
{
public:
    AttStaffLog();
    virtual ~AttStaffLog();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetDef(std::string def) { m_def = def; };
    std::string GetDef() { return m_def; };
    ///@}

protected:
    /** Provides a mechanism for linking the layer to a layerDef element. **/
    std::string m_def;

    
/* include <defmixin> */

};

//----------------------------------------------------------------------------
// AttStaffDefVis
//----------------------------------------------------------------------------

class AttStaffDefVis 
{
public:
    AttStaffDefVis();
    virtual ~AttStaffDefVis();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetGridShow(std::string gridShow) { m_gridShow = gridShow; };
    std::string GetGridShow() { return m_gridShow; };
    //
    void SetLayerscheme(std::string layerscheme) { m_layerscheme = layerscheme; };
    std::string GetLayerscheme() { return m_layerscheme; };
    //
    void SetLinesInt(int linesInt) { m_linesInt = linesInt; };
    int GetLinesInt() { return m_linesInt; };
    //
    void SetLinesColor(std::string linesColor) { m_linesColor = linesColor; };
    std::string GetLinesColor() { return m_linesColor; };
    //
    void SetLinesVisible(std::string linesVisible) { m_linesVisible = linesVisible; };
    std::string GetLinesVisible() { return m_linesVisible; };
    //
    void SetSpacingDbl(double spacingDbl) { m_spacingDbl = spacingDbl; };
    double GetSpacingDbl() { return m_spacingDbl; };
    ///@}

protected:
    /** Determines whether to display guitar chord grids. **/
    std::string m_gridShow;
    /** Indicates the number of layers and their stem directions. **/
    std::string m_layerscheme;
    /** Indicates the number of staff lines. **/
    int m_linesInt;
    /**
     * Captures the colors of the staff lines.
     * The value is structured; that is, it should have the same number of space-
     * separated RGB values as the number of lines indicated by the lines attribute. A
     * line can be made invisible by assigning it the same RGB value as the background,
     * usually white.
     **/
    std::string m_linesColor;
    /** Records whether all staff lines are visible. **/
    std::string m_linesVisible;
    /**
     * Records the absolute distance (as opposed to the relative distances recorded in
     * <scoreDef> elements) between this staff and the preceding one in the same
     * system.
     * This value is meaningless for the first staff in a system since the
     * spacing.system attribute indicates the spacing between systems.
     **/
    double m_spacingDbl;

    
/* include <spacingmixin> */

};

//----------------------------------------------------------------------------
// AttStaffGrpVis
//----------------------------------------------------------------------------

class AttStaffGrpVis 
{
public:
    AttStaffGrpVis();
    virtual ~AttStaffGrpVis();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetBarthru(std::string barthru) { m_barthru = barthru; };
    std::string GetBarthru() { return m_barthru; };
    ///@}

protected:
    /**
     * Indicates whether bar lines go across the space between staves (true) or are
     * only drawn across the lines of each staff (false).
     **/
    std::string m_barthru;

    
/* include <barthrumixin> */

};

//----------------------------------------------------------------------------
// AttStaffgroupingsym
//----------------------------------------------------------------------------

class AttStaffgroupingsym 
{
public:
    AttStaffgroupingsym();
    virtual ~AttStaffgroupingsym();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetSymbol(std::string symbol) { m_symbol = symbol; };
    std::string GetSymbol() { return m_symbol; };
    ///@}

protected:
    /** Specifies the symbol used to group a set of staves. **/
    std::string m_symbol;

    
/* include <symbolmixin> */

};

//----------------------------------------------------------------------------
// AttStaffident
//----------------------------------------------------------------------------

class AttStaffident 
{
public:
    AttStaffident();
    virtual ~AttStaffident();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetStaff(std::string staff) { m_staff = staff; };
    std::string GetStaff() { return m_staff; };
    ///@}

protected:
    /**
     * Signifies the staff on which a notated event occurs or to which a control event
     * applies.
     * Mandatory when applicable.
     **/
    std::string m_staff;

    
/* include <staffmixin> */

};

//----------------------------------------------------------------------------
// AttStaffloc
//----------------------------------------------------------------------------

class AttStaffloc 
{
public:
    AttStaffloc();
    virtual ~AttStaffloc();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetLoc(std::string loc) { m_loc = loc; };
    std::string GetLoc() { return m_loc; };
    ///@}

protected:
    /** Holds the staff location of the feature. **/
    std::string m_loc;

    
/* include <locmixin> */

};

//----------------------------------------------------------------------------
// AttStartendid
//----------------------------------------------------------------------------

class AttStartendid 
{
public:
    AttStartendid();
    virtual ~AttStartendid();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetEndid(std::string endid) { m_endid = endid; };
    std::string GetEndid() { return m_endid; };
    ///@}

protected:
    /**
     * Indicates the final element in a sequence of events to which the feature
     * applies.
     **/
    std::string m_endid;

    
/* include <endidmixin> */

};

//----------------------------------------------------------------------------
// AttStartid
//----------------------------------------------------------------------------

class AttStartid 
{
public:
    AttStartid();
    virtual ~AttStartid();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetStartid(std::string startid) { m_startid = startid; };
    std::string GetStartid() { return m_startid; };
    ///@}

protected:
    /**
     * Holds a reference to the first element in a sequence of events to which the
     * feature applies.
     **/
    std::string m_startid;

    
/* include <startidmixin> */

};

//----------------------------------------------------------------------------
// AttStemmed
//----------------------------------------------------------------------------

class AttStemmed 
{
public:
    AttStemmed();
    virtual ~AttStemmed();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetStemDir(std::string stemDir) { m_stemDir = stemDir; };
    std::string GetStemDir() { return m_stemDir; };
    //
    void SetStemLenDbl(double stemLenDbl) { m_stemLenDbl = stemLenDbl; };
    double GetStemLenDbl() { return m_stemLenDbl; };
    //
    void SetStemPos(std::string stemPos) { m_stemPos = stemPos; };
    std::string GetStemPos() { return m_stemPos; };
    //
    void SetStemXDbl(double stemXDbl) { m_stemXDbl = stemXDbl; };
    double GetStemXDbl() { return m_stemXDbl; };
    //
    void SetStemYDbl(double stemYDbl) { m_stemYDbl = stemYDbl; };
    double GetStemYDbl() { return m_stemYDbl; };
    ///@}

protected:
    /** Describes the direction of a stem. **/
    std::string m_stemDir;
    /** Encodes the stem length. **/
    double m_stemLenDbl;
    /** Records the position of the stem in relation to the note head(s). **/
    std::string m_stemPos;
    /** Records the output x coordinate of the stem's attachment point. **/
    double m_stemXDbl;
    /** Records the output y coordinate of the stem's attachment point. **/
    double m_stemYDbl;

    
/* include <stem.ymixin> */

};

//----------------------------------------------------------------------------
// AttSylLog
//----------------------------------------------------------------------------

class AttSylLog 
{
public:
    AttSylLog();
    virtual ~AttSylLog();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetCon(std::string con) { m_con = con; };
    std::string GetCon() { return m_con; };
    //
    void SetWordpos(std::string wordpos) { m_wordpos = wordpos; };
    std::string GetWordpos() { return m_wordpos; };
    ///@}

protected:
    /**
     * Describes the symbols typically used to indicate breaks between syllables and
     * their functions.
     **/
    std::string m_con;
    /** Records the position of a syllable within a word. **/
    std::string m_wordpos;

    
/* include <wordposmixin> */

};

//----------------------------------------------------------------------------
// AttSyltext
//----------------------------------------------------------------------------

class AttSyltext 
{
public:
    AttSyltext();
    virtual ~AttSyltext();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetSyl(std::string syl) { m_syl = syl; };
    std::string GetSyl() { return m_syl; };
    ///@}

protected:
    /** Holds an associated sung text syllable. **/
    std::string m_syl;

    
/* include <sylmixin> */

};

//----------------------------------------------------------------------------
// AttTextstyle
//----------------------------------------------------------------------------

class AttTextstyle 
{
public:
    AttTextstyle();
    virtual ~AttTextstyle();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetTextFam(std::string textFam) { m_textFam = textFam; };
    std::string GetTextFam() { return m_textFam; };
    //
    void SetTextName(std::string textName) { m_textName = textName; };
    std::string GetTextName() { return m_textName; };
    //
    void SetTextSizeDbl(double textSizeDbl) { m_textSizeDbl = textSizeDbl; };
    double GetTextSizeDbl() { return m_textSizeDbl; };
    //
    void SetTextStyle(std::string textStyle) { m_textStyle = textStyle; };
    std::string GetTextStyle() { return m_textStyle; };
    //
    void SetTextWeight(std::string textWeight) { m_textWeight = textWeight; };
    std::string GetTextWeight() { return m_textWeight; };
    ///@}

protected:
    /**
     * Provides a default value for the font family name of text (other than lyrics)
     * when this information is not provided on the individual elements.
     **/
    std::string m_textFam;
    /**
     * Provides a default value for the font name of text (other than lyrics) when this
     * information is not provided on the individual elements.
     **/
    std::string m_textName;
    /**
     * Provides a default value for the font size of text (other than lyrics) when this
     * information is not provided on the individual elements.
     **/
    double m_textSizeDbl;
    /**
     * Provides a default value for the font style of text (other than lyrics) when
     * this information is not provided on the individual elements.
     **/
    std::string m_textStyle;
    /**
     * Provides a default value for the font weight for text (other than lyrics) when
     * this information is not provided on the individual elements.
     **/
    std::string m_textWeight;

    
/* include <text.weightmixin> */

};

//----------------------------------------------------------------------------
// AttTiepresent
//----------------------------------------------------------------------------

class AttTiepresent 
{
public:
    AttTiepresent();
    virtual ~AttTiepresent();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetTie(std::string tie) { m_tie = tie; };
    std::string GetTie() { return m_tie; };
    ///@}

protected:
    /**
     * Indicates that this element participates in a tie.
     * If visual information about the tie needs to be recorded, then a <tie> element
     * should be employed.
     **/
    std::string m_tie;

    
/* include <tiemixin> */

};

//----------------------------------------------------------------------------
// AttTimestampMusical
//----------------------------------------------------------------------------

class AttTimestampMusical 
{
public:
    AttTimestampMusical();
    virtual ~AttTimestampMusical();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetTstamp(std::string tstamp) { m_tstamp = tstamp; };
    std::string GetTstamp() { return m_tstamp; };
    ///@}

protected:
    /**
     * Encodes the onset time in terms of musical time, i.e.,
     * beats[.fractional_beat_part].
     **/
    std::string m_tstamp;

    
/* include <tstampmixin> */

};

//----------------------------------------------------------------------------
// AttTimestampPerformed
//----------------------------------------------------------------------------

class AttTimestampPerformed 
{
public:
    AttTimestampPerformed();
    virtual ~AttTimestampPerformed();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetTstampGesInt(int tstampGesInt) { m_tstampGesInt = tstampGesInt; };
    int GetTstampGesInt() { return m_tstampGesInt; };
    //
    void SetTstampReal(std::string tstampReal) { m_tstampReal = tstampReal; };
    std::string GetTstampReal() { return m_tstampReal; };
    ///@}

protected:
    /**
     * Used to record the onset time in pulses per quarter note (ppq, MusicXML
     * divisions, or MIDI clicks) since the start of the file.
     **/
    int m_tstampGesInt;
    /** Used to record the onset time in terms of ISO time since the start of the file. **/
    std::string m_tstampReal;

    
/* include <tstamp.realmixin> */

};

//----------------------------------------------------------------------------
// AttTransposition
//----------------------------------------------------------------------------

class AttTransposition 
{
public:
    AttTransposition();
    virtual ~AttTransposition();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetTransDiatDbl(double transDiatDbl) { m_transDiatDbl = transDiatDbl; };
    double GetTransDiatDbl() { return m_transDiatDbl; };
    //
    void SetTransSemiDbl(double transSemiDbl) { m_transSemiDbl = transSemiDbl; };
    double GetTransSemiDbl() { return m_transSemiDbl; };
    ///@}

protected:
    /**
     * Records the amount of diatonic pitch shift, e.g., C to C♯ = 0, C to D♭ = 1,
     * necessary to calculate the sounded pitch from the written one.
     **/
    double m_transDiatDbl;
    /**
     * Records the amount of pitch shift in semitones, e.g., C to C♯ = 1, C to D♭ =
     * 1, necessary to calculate the sounded pitch from the written one.
     **/
    double m_transSemiDbl;

    
/* include <trans.semimixin> */

};

//----------------------------------------------------------------------------
// AttTupletpresent
//----------------------------------------------------------------------------

class AttTupletpresent 
{
public:
    AttTupletpresent();
    virtual ~AttTupletpresent();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetTuplet(std::string tuplet) { m_tuplet = tuplet; };
    std::string GetTuplet() { return m_tuplet; };
    ///@}

protected:
    /**
     * Indicates that this feature participates in a tuplet.
     * If visual information about the tuplet needs to be recorded, then a <tuplet>
     * element should be employed.
     **/
    std::string m_tuplet;

    
/* include <tupletmixin> */

};

//----------------------------------------------------------------------------
// AttTyped
//----------------------------------------------------------------------------

class AttTyped 
{
public:
    AttTyped();
    virtual ~AttTyped();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetType(std::string type) { m_type = type; };
    std::string GetType() { return m_type; };
    //
    void SetSubtype(std::string subtype) { m_subtype = subtype; };
    std::string GetSubtype() { return m_subtype; };
    ///@}

protected:
    /**
     * Characterizes the element in some sense, using any convenient classification
     * scheme or typology.
     **/
    std::string m_type;
    /**
     * Provide any sub-classification for the element, additional to that given by its
     * type attribute.
     **/
    std::string m_subtype;

    
/* include <subtypemixin> */

};

//----------------------------------------------------------------------------
// AttTypography
//----------------------------------------------------------------------------

class AttTypography 
{
public:
    AttTypography();
    virtual ~AttTypography();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetFontfam(std::string fontfam) { m_fontfam = fontfam; };
    std::string GetFontfam() { return m_fontfam; };
    //
    void SetFontname(std::string fontname) { m_fontname = fontname; };
    std::string GetFontname() { return m_fontname; };
    //
    void SetFontsizeDbl(double fontsizeDbl) { m_fontsizeDbl = fontsizeDbl; };
    double GetFontsizeDbl() { return m_fontsizeDbl; };
    //
    void SetFontstyle(std::string fontstyle) { m_fontstyle = fontstyle; };
    std::string GetFontstyle() { return m_fontstyle; };
    //
    void SetFontweight(std::string fontweight) { m_fontweight = fontweight; };
    std::string GetFontweight() { return m_fontweight; };
    ///@}

protected:
    /** Contains the name of a font-family. **/
    std::string m_fontfam;
    /** Holds the name of a font. **/
    std::string m_fontname;
    /** Indicates the size of a font in printers' points, i.e., 1/72nd of an inch. **/
    double m_fontsizeDbl;
    /** Records the style of a font, i.e, italic, oblique, or normal. **/
    std::string m_fontstyle;
    /** Used to indicate bold type. **/
    std::string m_fontweight;

    
/* include <fontweightmixin> */

};

//----------------------------------------------------------------------------
// AttVisibility
//----------------------------------------------------------------------------

class AttVisibility 
{
public:
    AttVisibility();
    virtual ~AttVisibility();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetVisible(std::string visible) { m_visible = visible; };
    std::string GetVisible() { return m_visible; };
    ///@}

protected:
    /**
     * Indicates if a feature should be rendered when the notation is presented
     * graphically or sounded when it is presented in an aural form.
     **/
    std::string m_visible;

    
/* include <visiblemixin> */

};

//----------------------------------------------------------------------------
// AttVisualoffsetHo
//----------------------------------------------------------------------------

class AttVisualoffsetHo 
{
public:
    AttVisualoffsetHo();
    virtual ~AttVisualoffsetHo();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetHo(std::string ho) { m_ho = ho; };
    std::string GetHo() { return m_ho; };
    ///@}

protected:
    /**
     * Records a horizontal adjustment to a feature's programmatically-determined
     * location in terms of staff interline distance; that is, in units of 1/2 the
     * distance between adjacent staff lines.
     **/
    std::string m_ho;

    
/* include <homixin> */

};

//----------------------------------------------------------------------------
// AttVisualoffsetTo
//----------------------------------------------------------------------------

class AttVisualoffsetTo 
{
public:
    AttVisualoffsetTo();
    virtual ~AttVisualoffsetTo();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetTo(std::string to) { m_to = to; };
    std::string GetTo() { return m_to; };
    ///@}

protected:
    /**
     * Records a timestamp adjustment of a feature's programmatically-determined
     * location in terms of musical time; that is, beats.
     **/
    std::string m_to;

    
/* include <tomixin> */

};

//----------------------------------------------------------------------------
// AttVisualoffsetVo
//----------------------------------------------------------------------------

class AttVisualoffsetVo 
{
public:
    AttVisualoffsetVo();
    virtual ~AttVisualoffsetVo();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetVo(std::string vo) { m_vo = vo; };
    std::string GetVo() { return m_vo; };
    ///@}

protected:
    /**
     * Records the vertical adjustment of a feature's programmatically-determined
     * location in terms of staff interline distance; that is, in units of 1/2 the
     * distance between adjacent staff lines.
     **/
    std::string m_vo;

    
/* include <vomixin> */

};

//----------------------------------------------------------------------------
// AttVisualoffset2Ho
//----------------------------------------------------------------------------

class AttVisualoffset2Ho 
{
public:
    AttVisualoffset2Ho();
    virtual ~AttVisualoffset2Ho();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetStartho(std::string startho) { m_startho = startho; };
    std::string GetStartho() { return m_startho; };
    //
    void SetEndho(std::string endho) { m_endho = endho; };
    std::string GetEndho() { return m_endho; };
    ///@}

protected:
    /**
     * Records the horizontal adjustment of a feature's programmatically-determined
     * start point.
     **/
    std::string m_startho;
    /**
     * Records the horizontal adjustment of a feature's programmatically-determined end
     * point.
     **/
    std::string m_endho;

    
/* include <endhomixin> */

};

//----------------------------------------------------------------------------
// AttVisualoffset2To
//----------------------------------------------------------------------------

class AttVisualoffset2To 
{
public:
    AttVisualoffset2To();
    virtual ~AttVisualoffset2To();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetStartto(std::string startto) { m_startto = startto; };
    std::string GetStartto() { return m_startto; };
    //
    void SetEndto(std::string endto) { m_endto = endto; };
    std::string GetEndto() { return m_endto; };
    ///@}

protected:
    /**
     * Records a timestamp adjustment of a feature's programmatically-determined start
     * point.
     **/
    std::string m_startto;
    /**
     * Records a timestamp adjustment of a feature's programmatically-determined end
     * point.
     **/
    std::string m_endto;

    
/* include <endtomixin> */

};

//----------------------------------------------------------------------------
// AttVisualoffset2Vo
//----------------------------------------------------------------------------

class AttVisualoffset2Vo 
{
public:
    AttVisualoffset2Vo();
    virtual ~AttVisualoffset2Vo();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetStartvo(std::string startvo) { m_startvo = startvo; };
    std::string GetStartvo() { return m_startvo; };
    //
    void SetEndvo(std::string endvo) { m_endvo = endvo; };
    std::string GetEndvo() { return m_endvo; };
    ///@}

protected:
    /**
     * Records a vertical adjustment of a feature's programmatically-determined start
     * point.
     **/
    std::string m_startvo;
    /**
     * Records a vertical adjustment of a feature's programmatically-determined end
     * point.
     **/
    std::string m_endvo;

    
/* include <endvomixin> */

};

//----------------------------------------------------------------------------
// AttWidth
//----------------------------------------------------------------------------

class AttWidth 
{
public:
    AttWidth();
    virtual ~AttWidth();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetWidthDbl(double widthDbl) { m_widthDbl = widthDbl; };
    double GetWidthDbl() { return m_widthDbl; };
    ///@}

protected:
    /**
     * Measurement of the horizontal dimension of an entity.
     * This value can only be interpreted meaningfully in combination with the units
     * attribute. The width attribute may be used to capture measure width data for
     * interchange with music printing systems that utilize this information for
     * printing. On <barLine> the width attribute captures the width of the preceding
     * measure.
     **/
    double m_widthDbl;

    
/* include <widthmixin> */

};

//----------------------------------------------------------------------------
// AttXy
//----------------------------------------------------------------------------

class AttXy 
{
public:
    AttXy();
    virtual ~AttXy();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetXDbl(double xDbl) { m_xDbl = xDbl; };
    double GetXDbl() { return m_xDbl; };
    //
    void SetYDbl(double yDbl) { m_yDbl = yDbl; };
    double GetYDbl() { return m_yDbl; };
    ///@}

protected:
    /**
     * Encodes an x coordinate for a feature in an output coordinate system.
     * When it is necessary to record the placement of a feature in a facsimile image,
     * use the facs attribute.
     **/
    double m_xDbl;
    /**
     * Encodes an y coordinate for a feature in an output coordinate system.
     * When it is necessary to record the placement of a feature in a facsimile image,
     * use the facs attribute.
     **/
    double m_yDbl;

    
/* include <ymixin> */

};

//----------------------------------------------------------------------------
// AttXy2
//----------------------------------------------------------------------------

class AttXy2 
{
public:
    AttXy2();
    virtual ~AttXy2();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetX2Dbl(double x2Dbl) { m_x2Dbl = x2Dbl; };
    double GetX2Dbl() { return m_x2Dbl; };
    //
    void SetY2Dbl(double y2Dbl) { m_y2Dbl = y2Dbl; };
    double GetY2Dbl() { return m_y2Dbl; };
    ///@}

protected:
    /** Encodes the optional 2nd x coordinate. **/
    double m_x2Dbl;
    /** Encodes the optional 2nd y coordinate. **/
    double m_y2Dbl;

    
/* include <y2mixin> */

};

}

#endif  // __VRV_SHAREDMIXIN_H__

