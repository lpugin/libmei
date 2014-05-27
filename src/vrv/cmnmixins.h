/////////////////////////////////////////////////////////////////////////////
// Name:        attributes.h
// Author:      Laurent Pugin
// Created:     2014
// Copyright (c) Authors and others. All rights reserved.
//
// Code generated using a modified version of libmei 
// by Andrew Hankinson, Alastair Porter, and Others
/////////////////////////////////////////////////////////////////////////////


#ifndef __VRV_CMNMIXIN_H__
#define __VRV_CMNMIXIN_H__

#include <string>

namespace vrv {
    
//----------------------------------------------------------------------------
// AttArpegLog
//----------------------------------------------------------------------------

class AttArpegLog 
{
public:
    AttArpegLog();
    virtual ~AttArpegLog();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetOrder(std::string order) { m_order = order; };
    std::string GetOrder() { return m_order; };
    ///@}

protected:
    /** Describes the direction in which an arpeggio is to be performed. **/
    std::string m_order;

    
/* include <ordermixin> */

};

//----------------------------------------------------------------------------
// AttArpegVis
//----------------------------------------------------------------------------

class AttArpegVis 
{
public:
    AttArpegVis();
    virtual ~AttArpegVis();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetArrow(std::string arrow) { m_arrow = arrow; };
    std::string GetArrow() { return m_arrow; };
    ///@}

protected:
    /** Indicates if an arrowhead is to be drawn as part of the arpeggiation symbol. **/
    std::string m_arrow;

    
/* include <arrowmixin> */

};

//----------------------------------------------------------------------------
// AttBTremLog
//----------------------------------------------------------------------------

class AttBTremLog 
{
public:
    AttBTremLog();
    virtual ~AttBTremLog();
    
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
// AttBeamed
//----------------------------------------------------------------------------

class AttBeamed 
{
public:
    AttBeamed();
    virtual ~AttBeamed();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetBeam(std::string beam) { m_beam = beam; };
    std::string GetBeam() { return m_beam; };
    ///@}

protected:
    /** Indicates that this event is "under a beam". **/
    std::string m_beam;

    
/* include <beammixin> */

};

//----------------------------------------------------------------------------
// AttBeamedwith
//----------------------------------------------------------------------------

class AttBeamedwith 
{
public:
    AttBeamedwith();
    virtual ~AttBeamedwith();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetBeamWith(std::string beamWith) { m_beamWith = beamWith; };
    std::string GetBeamWith() { return m_beamWith; };
    ///@}

protected:
    /**
     * In the case of cross-staff beams, the beam.with attribute is used to indicate
     * which staff the beam is connected to; that is, the staff above or the staff
     * below.
     **/
    std::string m_beamWith;

    
/* include <beam.withmixin> */

};

//----------------------------------------------------------------------------
// AttBeamingLog
//----------------------------------------------------------------------------

class AttBeamingLog 
{
public:
    AttBeamingLog();
    virtual ~AttBeamingLog();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetBeamGroup(std::string beamGroup) { m_beamGroup = beamGroup; };
    std::string GetBeamGroup() { return m_beamGroup; };
    //
    void SetBeamRests(std::string beamRests) { m_beamRests = beamRests; };
    std::string GetBeamRests() { return m_beamRests; };
    ///@}

protected:
    /**
     * Provides an example of how automated beaming (including secondary beams) is to
     * be performed.
     **/
    std::string m_beamGroup;
    /**
     * Indicates whether automatically-drawn beams should include rests shorter than a
     * quarter note duration.
     **/
    std::string m_beamRests;

    
/* include <beam.restsmixin> */

};

//----------------------------------------------------------------------------
// AttBeamrend
//----------------------------------------------------------------------------

class AttBeamrend 
{
public:
    AttBeamrend();
    virtual ~AttBeamrend();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetRend(std::string rend) { m_rend = rend; };
    std::string GetRend() { return m_rend; };
    //
    void SetSlopeDbl(double slopeDbl) { m_slopeDbl = slopeDbl; };
    double GetSlopeDbl() { return m_slopeDbl; };
    ///@}

protected:
    /** Describes the line style of the curve. **/
    std::string m_rend;
    /** Records the slope of the beam. **/
    double m_slopeDbl;

    
/* include <slopemixin> */

};

//----------------------------------------------------------------------------
// AttBeamsecondary
//----------------------------------------------------------------------------

class AttBeamsecondary 
{
public:
    AttBeamsecondary();
    virtual ~AttBeamsecondary();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetBreaksecInt(int breaksecInt) { m_breaksecInt = breaksecInt; };
    int GetBreaksecInt() { return m_breaksecInt; };
    ///@}

protected:
    /**
     * Presence of this attribute indicates that the secondary beam should be broken
     * following this note/chord.
     * The value of the attribute records the number of beams which should remain
     * unbroken.
     **/
    int m_breaksecInt;

    
/* include <breaksecmixin> */

};

//----------------------------------------------------------------------------
// AttBeatRptVis
//----------------------------------------------------------------------------

class AttBeatRptVis 
{
public:
    AttBeatRptVis();
    virtual ~AttBeatRptVis();
    
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
// AttBendGes
//----------------------------------------------------------------------------

class AttBendGes 
{
public:
    AttBendGes();
    virtual ~AttBendGes();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetAmount(std::string amount) { m_amount = amount; };
    std::string GetAmount() { return m_amount; };
    ///@}

protected:
    /**
     * Records the amount of detuning.
     * The decimal values should be rendered as a fraction (or an integer plus a
     * fraction) along with the bend symbol.
     **/
    std::string m_amount;

    
/* include <amountmixin> */

};

//----------------------------------------------------------------------------
// AttCutout
//----------------------------------------------------------------------------

class AttCutout 
{
public:
    AttCutout();
    virtual ~AttCutout();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetCutout(std::string cutout) { m_cutout = cutout; };
    std::string GetCutout() { return m_cutout; };
    ///@}

protected:
    /** "Cut-out" style indicated for this measure. **/
    std::string m_cutout;

    
/* include <cutoutmixin> */

};

//----------------------------------------------------------------------------
// AttExpandable
//----------------------------------------------------------------------------

class AttExpandable 
{
public:
    AttExpandable();
    virtual ~AttExpandable();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetExpand(std::string expand) { m_expand = expand; };
    std::string GetExpand() { return m_expand; };
    ///@}

protected:
    /**
     * Indicates whether to render a repeat symbol or the source material to which it
     * refers.
     * A value of 'true' renders the source material, while 'false' displays the repeat
     * symbol.
     **/
    std::string m_expand;

    
/* include <expandmixin> */

};

//----------------------------------------------------------------------------
// AttFTremLog
//----------------------------------------------------------------------------

class AttFTremLog 
{
public:
    AttFTremLog();
    virtual ~AttFTremLog();
    
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
// AttFermataVis
//----------------------------------------------------------------------------

class AttFermataVis 
{
public:
    AttFermataVis();
    virtual ~AttFermataVis();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetForm(std::string form) { m_form = form; };
    std::string GetForm() { return m_form; };
    //
    void SetShape(std::string shape) { m_shape = shape; };
    std::string GetShape() { return m_shape; };
    ///@}

protected:
    /** Records the function of the dot. **/
    std::string m_form;
    /** Describes a clef's shape. **/
    std::string m_shape;

    
/* include <shapemixin> */

};

//----------------------------------------------------------------------------
// AttGlissVis
//----------------------------------------------------------------------------

class AttGlissVis 
{
public:
    AttGlissVis();
    virtual ~AttGlissVis();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetText(std::string text) { m_text = text; };
    std::string GetText() { return m_text; };
    ///@}

protected:
    /** Records a text string, such as 'gliss', that accompanies the glissando mark. **/
    std::string m_text;

    
/* include <textmixin> */

};

//----------------------------------------------------------------------------
// AttGraced
//----------------------------------------------------------------------------

class AttGraced 
{
public:
    AttGraced();
    virtual ~AttGraced();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetGrace(std::string grace) { m_grace = grace; };
    std::string GetGrace() { return m_grace; };
    //
    void SetGraceTime(std::string graceTime) { m_graceTime = graceTime; };
    std::string GetGraceTime() { return m_graceTime; };
    ///@}

protected:
    /**
     * Marks a note or chord as a "grace" (without a definitive written duration) and
     * records from which other note/chord it should "steal" time.
     **/
    std::string m_grace;
    /** Records the amount of time to be "stolen" from a non-grace note/chord. **/
    std::string m_graceTime;

    
/* include <grace.timemixin> */

};

//----------------------------------------------------------------------------
// AttHairpinLog
//----------------------------------------------------------------------------

class AttHairpinLog 
{
public:
    AttHairpinLog();
    virtual ~AttHairpinLog();
    
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
// AttHairpinVis
//----------------------------------------------------------------------------

class AttHairpinVis 
{
public:
    AttHairpinVis();
    virtual ~AttHairpinVis();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetOpening(std::string opening) { m_opening = opening; };
    std::string GetOpening() { return m_opening; };
    ///@}

protected:
    /**
     * Specifies the distance between the points of the open end of a hairpin dynamic
     * mark.
     **/
    std::string m_opening;

    
/* include <openingmixin> */

};

//----------------------------------------------------------------------------
// AttHarpPedalLog
//----------------------------------------------------------------------------

class AttHarpPedalLog 
{
public:
    AttHarpPedalLog();
    virtual ~AttHarpPedalLog();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetC(std::string c) { m_c = c; };
    std::string GetC() { return m_c; };
    //
    void SetD(std::string d) { m_d = d; };
    std::string GetD() { return m_d; };
    //
    void SetE(std::string e) { m_e = e; };
    std::string GetE() { return m_e; };
    //
    void SetF(std::string f) { m_f = f; };
    std::string GetF() { return m_f; };
    //
    void SetG(std::string g) { m_g = g; };
    std::string GetG() { return m_g; };
    //
    void SetA(std::string a) { m_a = a; };
    std::string GetA() { return m_a; };
    //
    void SetB(std::string b) { m_b = b; };
    std::string GetB() { return m_b; };
    ///@}

protected:
    /** Indicates the pedal setting for the harp's C strings. **/
    std::string m_c;
    /** Indicates the pedal setting for the harp's D strings. **/
    std::string m_d;
    /** Indicates the pedal setting for the harp's E strings. **/
    std::string m_e;
    /** Indicates the pedal setting for the harp's F strings. **/
    std::string m_f;
    /** Indicates the pedal setting for the harp's G strings. **/
    std::string m_g;
    /** Indicates the pedal setting for the harp's A strings. **/
    std::string m_a;
    /** Indicates the pedal setting for the harp's B strings. **/
    std::string m_b;

    
/* include <bmixin> */

};

//----------------------------------------------------------------------------
// AttLvpresent
//----------------------------------------------------------------------------

class AttLvpresent 
{
public:
    AttLvpresent();
    virtual ~AttLvpresent();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetLv(std::string lv) { m_lv = lv; };
    std::string GetLv() { return m_lv; };
    ///@}

protected:
    /**
     * Indicates the attachment of an l.v.
     * (laissez vibrer) sign to this element.
     **/
    std::string m_lv;

    
/* include <lvmixin> */

};

//----------------------------------------------------------------------------
// AttMultiRestVis
//----------------------------------------------------------------------------

class AttMultiRestVis 
{
public:
    AttMultiRestVis();
    virtual ~AttMultiRestVis();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetBlock(std::string block) { m_block = block; };
    std::string GetBlock() { return m_block; };
    ///@}

protected:
    /**
     * When the block attribute is used, combinations of the 1, 2, and 4 measure rest
     * forms (Read, p.
     * 104) should be rendered instead of the modern form or an alternative symbol.
     **/
    std::string m_block;

    
/* include <blockmixin> */

};

//----------------------------------------------------------------------------
// AttNoteGesCmn
//----------------------------------------------------------------------------

class AttNoteGesCmn 
{
public:
    AttNoteGesCmn();
    virtual ~AttNoteGesCmn();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetGliss(std::string gliss) { m_gliss = gliss; };
    std::string GetGliss() { return m_gliss; };
    ///@}

protected:
    /** Indicates that this element participates in a glissando. **/
    std::string m_gliss;

    
/* include <glissmixin> */

};

//----------------------------------------------------------------------------
// AttNumbered
//----------------------------------------------------------------------------

class AttNumbered 
{
public:
    AttNumbered();
    virtual ~AttNumbered();
    
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
// AttNumberplacement
//----------------------------------------------------------------------------

class AttNumberplacement 
{
public:
    AttNumberplacement();
    virtual ~AttNumberplacement();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetNumPlace(std::string numPlace) { m_numPlace = numPlace; };
    std::string GetNumPlace() { return m_numPlace; };
    //
    void SetNumVisible(std::string numVisible) { m_numVisible = numVisible; };
    std::string GetNumVisible() { return m_numVisible; };
    ///@}

protected:
    /** States where the tuplet number will be placed in relation to the note heads. **/
    std::string m_numPlace;
    /** Determines if the tuplet number is visible. **/
    std::string m_numVisible;

    
/* include <num.visiblemixin> */

};

//----------------------------------------------------------------------------
// AttOctaveLog
//----------------------------------------------------------------------------

class AttOctaveLog 
{
public:
    AttOctaveLog();
    virtual ~AttOctaveLog();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetColl(std::string coll) { m_coll = coll; };
    std::string GetColl() { return m_coll; };
    ///@}

protected:
    /**
     * Indicates whether the octave displacement should be performed simultaneously
     * with the written notes, i.e., "coll' ottava".
     * Unlike other octave signs which are indicated by broken lines, coll' ottava
     * typically uses an unbroken line or a series of longer broken lines, ending with
     * a short vertical stroke. See Read, p. 47-48.
     **/
    std::string m_coll;

    
/* include <collmixin> */

};

//----------------------------------------------------------------------------
// AttPedalLog
//----------------------------------------------------------------------------

class AttPedalLog 
{
public:
    AttPedalLog();
    virtual ~AttPedalLog();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetDir(std::string dir) { m_dir = dir; };
    std::string GetDir() { return m_dir; };
    ///@}

protected:
    /** Records the position of the piano damper pedal. **/
    std::string m_dir;

    
/* include <dirmixin> */

};

//----------------------------------------------------------------------------
// AttPedalVis
//----------------------------------------------------------------------------

class AttPedalVis 
{
public:
    AttPedalVis();
    virtual ~AttPedalVis();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetStyle(std::string style) { m_style = style; };
    std::string GetStyle() { return m_style; };
    ///@}

protected:
    /** Determines whether piano pedal marks should be rendered as lines or as terms. **/
    std::string m_style;

    
/* include <stylemixin> */

};

//----------------------------------------------------------------------------
// AttPianopedals
//----------------------------------------------------------------------------

class AttPianopedals 
{
public:
    AttPianopedals();
    virtual ~AttPianopedals();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetPedalStyle(std::string pedalStyle) { m_pedalStyle = pedalStyle; };
    std::string GetPedalStyle() { return m_pedalStyle; };
    ///@}

protected:
    /** Determines whether piano pedal marks should be rendered as lines or as terms. **/
    std::string m_pedalStyle;

    
/* include <pedal.stylemixin> */

};

//----------------------------------------------------------------------------
// AttRehearsal
//----------------------------------------------------------------------------

class AttRehearsal 
{
public:
    AttRehearsal();
    virtual ~AttRehearsal();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetRehEnclose(std::string rehEnclose) { m_rehEnclose = rehEnclose; };
    std::string GetRehEnclose() { return m_rehEnclose; };
    ///@}

protected:
    /** Describes the enclosing shape for rehearsal marks. **/
    std::string m_rehEnclose;

    
/* include <reh.enclosemixin> */

};

//----------------------------------------------------------------------------
// AttScoreDefVisCmn
//----------------------------------------------------------------------------

class AttScoreDefVisCmn 
{
public:
    AttScoreDefVisCmn();
    virtual ~AttScoreDefVisCmn();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetGridShow(std::string gridShow) { m_gridShow = gridShow; };
    std::string GetGridShow() { return m_gridShow; };
    ///@}

protected:
    /** Determines whether to display guitar chord grids. **/
    std::string m_gridShow;

    
/* include <grid.showmixin> */

};

//----------------------------------------------------------------------------
// AttSlurrend
//----------------------------------------------------------------------------

class AttSlurrend 
{
public:
    AttSlurrend();
    virtual ~AttSlurrend();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetSlurRend(std::string slurRend) { m_slurRend = slurRend; };
    std::string GetSlurRend() { return m_slurRend; };
    ///@}

protected:
    /** Describes the line style of the slur. **/
    std::string m_slurRend;

    
/* include <slur.rendmixin> */

};

//----------------------------------------------------------------------------
// AttStemmedCmn
//----------------------------------------------------------------------------

class AttStemmedCmn 
{
public:
    AttStemmedCmn();
    virtual ~AttStemmedCmn();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetStemMod(std::string stemMod) { m_stemMod = stemMod; };
    std::string GetStemMod() { return m_stemMod; };
    //
    void SetStemWith(std::string stemWith) { m_stemWith = stemWith; };
    std::string GetStemWith() { return m_stemWith; };
    ///@}

protected:
    /**
     * Encodes any stem "modifiers"; that is, symbols rendered on the stem, such as
     * tremolo or Sprechstimme indicators.
     **/
    std::string m_stemMod;
    /**
     * Contains an indication of which staff a note or chord that logically belongs to
     * the current staff should be visually placed on; that is, the one above or the
     * one below.
     **/
    std::string m_stemWith;

    
/* include <stem.withmixin> */

};

//----------------------------------------------------------------------------
// AttTierend
//----------------------------------------------------------------------------

class AttTierend 
{
public:
    AttTierend();
    virtual ~AttTierend();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetTieRend(std::string tieRend) { m_tieRend = tieRend; };
    std::string GetTieRend() { return m_tieRend; };
    ///@}

protected:
    /** Describes the line style of the tie. **/
    std::string m_tieRend;

    
/* include <tie.rendmixin> */

};

//----------------------------------------------------------------------------
// AttTremmeasured
//----------------------------------------------------------------------------

class AttTremmeasured 
{
public:
    AttTremmeasured();
    virtual ~AttTremmeasured();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetMeasperf(std::string measperf) { m_measperf = measperf; };
    std::string GetMeasperf() { return m_measperf; };
    ///@}

protected:
    /** The performed duration of an individual note in a measured tremolo. **/
    std::string m_measperf;

    
/* include <measperfmixin> */

};

//----------------------------------------------------------------------------
// AttTupletLog
//----------------------------------------------------------------------------

class AttTupletLog 
{
public:
    AttTupletLog();
    virtual ~AttTupletLog();
    
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
// AttTupletVis
//----------------------------------------------------------------------------

class AttTupletVis 
{
public:
    AttTupletVis();
    virtual ~AttTupletVis();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetBracketPlace(std::string bracketPlace) { m_bracketPlace = bracketPlace; };
    std::string GetBracketPlace() { return m_bracketPlace; };
    //
    void SetBracketVisible(std::string bracketVisible) { m_bracketVisible = bracketVisible; };
    std::string GetBracketVisible() { return m_bracketVisible; };
    //
    void SetDurVisible(std::string durVisible) { m_durVisible = durVisible; };
    std::string GetDurVisible() { return m_durVisible; };
    //
    void SetNumFormat(std::string numFormat) { m_numFormat = numFormat; };
    std::string GetNumFormat() { return m_numFormat; };
    ///@}

protected:
    /**
     * Used to state where a tuplet bracket will be placed in relation to the note
     * heads.
     **/
    std::string m_bracketPlace;
    /** States whether a bracket should be rendered with a tuplet. **/
    std::string m_bracketVisible;
    /** Determines if the tuplet duration is visible. **/
    std::string m_durVisible;
    /** Controls how the num:numbase ratio is to be displayed. **/
    std::string m_numFormat;

    
/* include <num.formatmixin> */

};

//----------------------------------------------------------------------------
// AttTupletSpanLog
//----------------------------------------------------------------------------

class AttTupletSpanLog 
{
public:
    AttTupletSpanLog();
    virtual ~AttTupletSpanLog();
    
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

}

#endif  // __VRV_CMNMIXIN_H__

