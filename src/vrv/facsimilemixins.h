/////////////////////////////////////////////////////////////////////////////
// Name:        attributes.h
// Author:      Laurent Pugin
// Created:     2014
// Copyright (c) Authors and others. All rights reserved.
//
// Code generated using a modified version of libmei 
// by Andrew Hankinson, Alastair Porter, and Others
/////////////////////////////////////////////////////////////////////////////


#ifndef __VRV_FACSIMILEMIXIN_H__
#define __VRV_FACSIMILEMIXIN_H__

#include <string>

namespace vrv {
    
//----------------------------------------------------------------------------
// AttFacsimile
//----------------------------------------------------------------------------

class AttFacsimile 
{
public:
    AttFacsimile();
    virtual ~AttFacsimile();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetFacs(std::string facs) { m_facs = facs; };
    std::string GetFacs() { return m_facs; };
    ///@}

protected:
    /**
     * Permits the current element to reference a facsimile image or image zone which
     * corresponds to it.
     **/
    std::string m_facs;

    
	/**
	 * Test
	 **/
    void getCoords();



};

}

#endif  // __VRV_FACSIMILEMIXIN_H__

