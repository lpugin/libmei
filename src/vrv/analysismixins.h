/////////////////////////////////////////////////////////////////////////////
// Name:        attributes.h
// Author:      Laurent Pugin
// Created:     2014
// Copyright (c) Authors and others. All rights reserved.
//
// Code generated using a modified version of libmei 
// by Andrew Hankinson, Alastair Porter, and Others
/////////////////////////////////////////////////////////////////////////////


#ifndef __VRV_ANALYSISMIXIN_H__
#define __VRV_ANALYSISMIXIN_H__

#include <string>

namespace vrv {
    
//----------------------------------------------------------------------------
// AttCommonAnl
//----------------------------------------------------------------------------

class AttCommonAnl 
{
public:
    AttCommonAnl();
    virtual ~AttCommonAnl();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetCopyof(std::string copyof) { m_copyof = copyof; };
    std::string GetCopyof() { return m_copyof; };
    //
    void SetCorresp(std::string corresp) { m_corresp = corresp; };
    std::string GetCorresp() { return m_corresp; };
    //
    void SetNext(std::string next) { m_next = next; };
    std::string GetNext() { return m_next; };
    //
    void SetPrev(std::string prev) { m_prev = prev; };
    std::string GetPrev() { return m_prev; };
    //
    void SetSameas(std::string sameas) { m_sameas = sameas; };
    std::string GetSameas() { return m_sameas; };
    //
    void SetSynch(std::string synch) { m_synch = synch; };
    std::string GetSynch() { return m_synch; };
    ///@}

protected:
    /** Points to an element of which the current element is a copy. **/
    std::string m_copyof;
    /**
     * Used to point to other elements that correspond to this one in a generic
     * fashion.
     **/
    std::string m_corresp;
    /** Used to point to the next event(s) in a user-defined collection. **/
    std::string m_next;
    /** Points to the previous event(s) in a user-defined collection. **/
    std::string m_prev;
    /**
     * Points to an element that is the same as the current element but is not a
     * literal copy of the current element.
     **/
    std::string m_sameas;
    /** Points to elements that are synchronous with the current element. **/
    std::string m_synch;

    
/* include <synchmixin> */

};

//----------------------------------------------------------------------------
// AttHarmonicfunction
//----------------------------------------------------------------------------

class AttHarmonicfunction 
{
public:
    AttHarmonicfunction();
    virtual ~AttHarmonicfunction();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetHfunc(std::string hfunc) { m_hfunc = hfunc; };
    std::string GetHfunc() { return m_hfunc; };
    ///@}

protected:
    /** Describes harmonic function in any convenient typology. **/
    std::string m_hfunc;

    
/* include <hfuncmixin> */

};

//----------------------------------------------------------------------------
// AttIntervalharmonic
//----------------------------------------------------------------------------

class AttIntervalharmonic 
{
public:
    AttIntervalharmonic();
    virtual ~AttIntervalharmonic();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetInth(std::string inth) { m_inth = inth; };
    std::string GetInth() { return m_inth; };
    ///@}

protected:
    /**
     * Encodes the harmonic interval between this note and other pitches occurring at
     * the same time.
     **/
    std::string m_inth;

    
/* include <inthmixin> */

};

//----------------------------------------------------------------------------
// AttIntervallicdesc
//----------------------------------------------------------------------------

class AttIntervallicdesc 
{
public:
    AttIntervallicdesc();
    virtual ~AttIntervallicdesc();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetIntm(std::string intm) { m_intm = intm; };
    std::string GetIntm() { return m_intm; };
    ///@}

protected:
    /**
     * Encodes the melodic interval from the previous pitch.
     * The value may be a general directional indication (u, d, s) or a precise numeric
     * value in half steps.
     **/
    std::string m_intm;

    
/* include <intmmixin> */

};

//----------------------------------------------------------------------------
// AttMelodicfunction
//----------------------------------------------------------------------------

class AttMelodicfunction 
{
public:
    AttMelodicfunction();
    virtual ~AttMelodicfunction();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetMfunc(std::string mfunc) { m_mfunc = mfunc; };
    std::string GetMfunc() { return m_mfunc; };
    ///@}

protected:
    /** Describes melodic function in any convenient typology. **/
    std::string m_mfunc;

    
/* include <mfuncmixin> */

};

//----------------------------------------------------------------------------
// AttPitchclass
//----------------------------------------------------------------------------

class AttPitchclass 
{
public:
    AttPitchclass();
    virtual ~AttPitchclass();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetPclass(std::string pclass) { m_pclass = pclass; };
    std::string GetPclass() { return m_pclass; };
    ///@}

protected:
    /** Holds pitch class information. **/
    std::string m_pclass;

    
/* include <pclassmixin> */

};

//----------------------------------------------------------------------------
// AttSolfa
//----------------------------------------------------------------------------

class AttSolfa 
{
public:
    AttSolfa();
    virtual ~AttSolfa();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetPsolfa(std::string psolfa) { m_psolfa = psolfa; };
    std::string GetPsolfa() { return m_psolfa; };
    ///@}

protected:
    /**
     * Contains sol-fa designation, e.g., do, re, mi, etc., in either a fixed or
     * movable Do system.
     **/
    std::string m_psolfa;

    
/* include <psolfamixin> */

};

}

#endif  // __VRV_ANALYSISMIXIN_H__

