/////////////////////////////////////////////////////////////////////////////
// Name:        attributes.h
// Author:      Laurent Pugin
// Created:     2014
// Copyright (c) Authors and others. All rights reserved.
//
// Code generated using a modified version of libmei 
// by Andrew Hankinson, Alastair Porter, and Others
/////////////////////////////////////////////////////////////////////////////


#ifndef __VRV_HARMONYMIXIN_H__
#define __VRV_HARMONYMIXIN_H__

#include <string>

namespace vrv {
    
//----------------------------------------------------------------------------
// AttFretlocation
//----------------------------------------------------------------------------

class AttFretlocation 
{
public:
    AttFretlocation();
    virtual ~AttFretlocation();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetFret(std::string fret) { m_fret = fret; };
    std::string GetFret() { return m_fret; };
    ///@}

protected:
    /** Records the location at which a string should be stopped against a fret. **/
    std::string m_fret;

    
/* include <fretmixin> */

};

//----------------------------------------------------------------------------
// AttHarmLog
//----------------------------------------------------------------------------

class AttHarmLog 
{
public:
    AttHarmLog();
    virtual ~AttHarmLog();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetChordref(std::string chordref) { m_chordref = chordref; };
    std::string GetChordref() { return m_chordref; };
    ///@}

protected:
    /** Contains a reference to a <chordDef> element elsewhere in the document. **/
    std::string m_chordref;

    
/* include <chordrefmixin> */

};

//----------------------------------------------------------------------------
// AttHarmVis
//----------------------------------------------------------------------------

class AttHarmVis 
{
public:
    AttHarmVis();
    virtual ~AttHarmVis();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetExtender(std::string extender) { m_extender = extender; };
    std::string GetExtender() { return m_extender; };
    //
    void SetRendgrid(std::string rendgrid) { m_rendgrid = rendgrid; };
    std::string GetRendgrid() { return m_rendgrid; };
    ///@}

protected:
    /**
     * Indicates the presence of an extension symbol, typically a dash or underscore,
     * drawn from the end of the harmonic indication to the point indicated by the dur
     * attribute.
     **/
    std::string m_extender;
    /** Describes how the harmonic indication should be rendered. **/
    std::string m_rendgrid;

    
/* include <rendgridmixin> */

};

}

#endif  // __VRV_HARMONYMIXIN_H__

