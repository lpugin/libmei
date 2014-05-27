/////////////////////////////////////////////////////////////////////////////
// Name:        attributes.h
// Author:      Laurent Pugin
// Created:     2014
// Copyright (c) Authors and others. All rights reserved.
//
// Code generated using a modified version of libmei 
// by Andrew Hankinson, Alastair Porter, and Others
/////////////////////////////////////////////////////////////////////////////


#ifndef __VRV_CRITAPPMIXIN_H__
#define __VRV_CRITAPPMIXIN_H__

#include <string>

namespace vrv {
    
//----------------------------------------------------------------------------
// AttCrit
//----------------------------------------------------------------------------

class AttCrit 
{
public:
    AttCrit();
    virtual ~AttCrit();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetCause(std::string cause) { m_cause = cause; };
    std::string GetCause() { return m_cause; };
    ///@}

protected:
    /**
     * Classifies the cause for the variant reading, according to any appropriate
     * typology of possible origins.
     **/
    std::string m_cause;

    
/* include <causemixin> */

};

//----------------------------------------------------------------------------
// AttSource
//----------------------------------------------------------------------------

class AttSource 
{
public:
    AttSource();
    virtual ~AttSource();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetSource(std::string source) { m_source = source; };
    std::string GetSource() { return m_source; };
    ///@}

protected:
    /**
     * Contains a list of one or more pointers indicating the sources which attest to a
     * given reading.
     * Each value should correspond to the ID of a <source> element located in the
     * document header.
     **/
    std::string m_source;

    
/* include <sourcemixin> */

};

}

#endif  // __VRV_CRITAPPMIXIN_H__

