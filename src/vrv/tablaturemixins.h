/////////////////////////////////////////////////////////////////////////////
// Name:        attributes.h
// Author:      Laurent Pugin
// Created:     2014
// Copyright (c) Authors and others. All rights reserved.
//
// Code generated using a modified version of libmei 
// by Andrew Hankinson, Alastair Porter, and Others
/////////////////////////////////////////////////////////////////////////////


#ifndef __VRV_TABLATUREMIXIN_H__
#define __VRV_TABLATUREMIXIN_H__

#include <string>

namespace vrv {
    
//----------------------------------------------------------------------------
// AttNoteGesTablature
//----------------------------------------------------------------------------

class AttNoteGesTablature 
{
public:
    AttNoteGesTablature();
    virtual ~AttNoteGesTablature();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetTabFret(std::string tabFret) { m_tabFret = tabFret; };
    std::string GetTabFret() { return m_tabFret; };
    //
    void SetTabString(std::string tabString) { m_tabString = tabString; };
    std::string GetTabString() { return m_tabString; };
    ///@}

protected:
    /** Records the fret at which a string should be stopped. **/
    std::string m_tabFret;
    /** Records which string is to be played. **/
    std::string m_tabString;

    
/* include <tab.stringmixin> */

};

//----------------------------------------------------------------------------
// AttStaffDefGesTablature
//----------------------------------------------------------------------------

class AttStaffDefGesTablature 
{
public:
    AttStaffDefGesTablature();
    virtual ~AttStaffDefGesTablature();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetTabStrings(std::string tabStrings) { m_tabStrings = tabStrings; };
    std::string GetTabStrings() { return m_tabStrings; };
    ///@}

protected:
    /** Provides a *written* pitch and octave for each open string. **/
    std::string m_tabStrings;

    
/* include <tab.stringsmixin> */

};

}

#endif  // __VRV_TABLATUREMIXIN_H__

