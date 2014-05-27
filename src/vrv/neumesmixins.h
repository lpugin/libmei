/////////////////////////////////////////////////////////////////////////////
// Name:        attributes.h
// Author:      Laurent Pugin
// Created:     2014
// Copyright (c) Authors and others. All rights reserved.
//
// Code generated using a modified version of libmei 
// by Andrew Hankinson, Alastair Porter, and Others
/////////////////////////////////////////////////////////////////////////////


#ifndef __VRV_NEUMESMIXIN_H__
#define __VRV_NEUMESMIXIN_H__

#include <string>

namespace vrv {
    
//----------------------------------------------------------------------------
// AttIneumeLog
//----------------------------------------------------------------------------

class AttIneumeLog 
{
public:
    AttIneumeLog();
    virtual ~AttIneumeLog();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetForm(std::string form) { m_form = form; };
    std::string GetForm() { return m_form; };
    //
    void SetName(std::string name) { m_name = name; };
    std::string GetName() { return m_name; };
    ///@}

protected:
    /** Records the function of the dot. **/
    std::string m_form;
    /** Records the name of the neume. **/
    std::string m_name;

    
/* include <namemixin> */

};

//----------------------------------------------------------------------------
// AttUneumeLog
//----------------------------------------------------------------------------

class AttUneumeLog 
{
public:
    AttUneumeLog();
    virtual ~AttUneumeLog();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetForm(std::string form) { m_form = form; };
    std::string GetForm() { return m_form; };
    //
    void SetName(std::string name) { m_name = name; };
    std::string GetName() { return m_name; };
    ///@}

protected:
    /** Records the function of the dot. **/
    std::string m_form;
    /** Records the name of the neume. **/
    std::string m_name;

    
/* include <namemixin> */

};

}

#endif  // __VRV_NEUMESMIXIN_H__

