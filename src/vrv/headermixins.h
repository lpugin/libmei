/////////////////////////////////////////////////////////////////////////////
// Name:        attributes.h
// Author:      Laurent Pugin
// Created:     2014
// Copyright (c) Authors and others. All rights reserved.
//
// Code generated using a modified version of libmei 
// by Andrew Hankinson, Alastair Porter, and Others
/////////////////////////////////////////////////////////////////////////////


#ifndef __VRV_HEADERMIXIN_H__
#define __VRV_HEADERMIXIN_H__

#include <string>

namespace vrv {
    
//----------------------------------------------------------------------------
// AttRegularmethod
//----------------------------------------------------------------------------

class AttRegularmethod 
{
public:
    AttRegularmethod();
    virtual ~AttRegularmethod();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetMethod(std::string method) { m_method = method; };
    std::string GetMethod() { return m_method; };
    ///@}

protected:
    /** Indicates the method employed to mark corrections and normalizations. **/
    std::string m_method;

    
/* include <methodmixin> */

};

}

#endif  // __VRV_HEADERMIXIN_H__

