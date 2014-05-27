/////////////////////////////////////////////////////////////////////////////
// Name:        attributes.h
// Author:      Laurent Pugin
// Created:     2014
// Copyright (c) Authors and others. All rights reserved.
//
// Code generated using a modified version of libmei 
// by Andrew Hankinson, Alastair Porter, and Others
/////////////////////////////////////////////////////////////////////////////


#ifndef __VRV_LINKALIGNMIXIN_H__
#define __VRV_LINKALIGNMIXIN_H__

#include <string>

namespace vrv {
    
//----------------------------------------------------------------------------
// AttAlignment
//----------------------------------------------------------------------------

class AttAlignment 
{
public:
    AttAlignment();
    virtual ~AttAlignment();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetWhen(std::string when) { m_when = when; };
    std::string GetWhen() { return m_when; };
    ///@}

protected:
    /**
     * Indicates the point of occurrence of this feature along a time line.
     * Its value must be the ID of a <when> element.
     **/
    std::string m_when;

    
/* include <whenmixin> */

};

}

#endif  // __VRV_LINKALIGNMIXIN_H__

