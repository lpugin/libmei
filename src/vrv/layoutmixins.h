/////////////////////////////////////////////////////////////////////////////
// Name:        attributes.h
// Author:      Laurent Pugin
// Created:     2014
// Copyright (c) Authors and others. All rights reserved.
//
// Code generated using a modified version of libmei 
// by Andrew Hankinson, Alastair Porter, and Others
/////////////////////////////////////////////////////////////////////////////


#ifndef __VRV_LAYOUTMIXIN_H__
#define __VRV_LAYOUTMIXIN_H__

#include <string>

namespace vrv {
    
//----------------------------------------------------------------------------
// AttBarline
//----------------------------------------------------------------------------

class AttBarline 
{
public:
    AttBarline();
    virtual ~AttBarline();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetBarline(std::string barline) { m_barline = barline; };
    std::string GetBarline() { return m_barline; };
    ///@}

protected:
    /**
     * Indicates if the element describes the beginning or end of a measure.
     * If a //mb/@barline="left" is pointing to a measure without a @left, there is no
     * barline drawn by default. If a //mb/@barline="right" is pointing to a measure
     * without a @right, there is a regular barline drawn by default.
     **/
    std::string m_barline;

    
/* include <barlinemixin> */

};

//----------------------------------------------------------------------------
// AttIgnore
//----------------------------------------------------------------------------

class AttIgnore 
{
public:
    AttIgnore();
    virtual ~AttIgnore();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetIgnored(std::string ignored) { m_ignored = ignored; };
    std::string GetIgnored() { return m_ignored; };
    ///@}

protected:
    /**
     * Indicates whether the referenced element should be included or omitted from the
     * rendering.
     **/
    std::string m_ignored;

    
/* include <ignoredmixin> */

};

//----------------------------------------------------------------------------
// AttLayout
//----------------------------------------------------------------------------

class AttLayout 
{
public:
    AttLayout();
    virtual ~AttLayout();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetIgnored(std::string ignored) { m_ignored = ignored; };
    std::string GetIgnored() { return m_ignored; };
    ///@}

protected:
    /**
     * Indicates whether the referenced element should be included or omitted from the
     * rendering.
     **/
    std::string m_ignored;

    
/* include <ignoredmixin> */

};

//----------------------------------------------------------------------------
// AttMeasureRef
//----------------------------------------------------------------------------

class AttMeasureRef 
{
public:
    AttMeasureRef();
    virtual ~AttMeasureRef();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetMeasureref(std::string measureref) { m_measureref = measureref; };
    std::string GetMeasureref() { return m_measureref; };
    ///@}

protected:
    /** Contains a reference to a measure. **/
    std::string m_measureref;

    
/* include <measurerefmixin> */

};

//----------------------------------------------------------------------------
// AttPageRef
//----------------------------------------------------------------------------

class AttPageRef 
{
public:
    AttPageRef();
    virtual ~AttPageRef();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetPbrefs(std::string pbrefs) { m_pbrefs = pbrefs; };
    std::string GetPbrefs() { return m_pbrefs; };
    ///@}

protected:
    /** Contains a list of pbs that are referenced. **/
    std::string m_pbrefs;

    
/* include <pbrefsmixin> */

};

//----------------------------------------------------------------------------
// AttSurface
//----------------------------------------------------------------------------

class AttSurface 
{
public:
    AttSurface();
    virtual ~AttSurface();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetSurface(std::string surface) { m_surface = surface; };
    std::string GetSurface() { return m_surface; };
    ///@}

protected:
    /** Contains a reference to a surface element **/
    std::string m_surface;

    
/* include <surfacemixin> */

};

//----------------------------------------------------------------------------
// AttSystemRef
//----------------------------------------------------------------------------

class AttSystemRef 
{
public:
    AttSystemRef();
    virtual ~AttSystemRef();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetSbrefs(std::string sbrefs) { m_sbrefs = sbrefs; };
    std::string GetSbrefs() { return m_sbrefs; };
    ///@}

protected:
    /** Contains a list of sbs that are referenced. **/
    std::string m_sbrefs;

    
/* include <sbrefsmixin> */

};

}

#endif  // __VRV_LAYOUTMIXIN_H__

