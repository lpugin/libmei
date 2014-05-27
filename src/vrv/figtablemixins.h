/////////////////////////////////////////////////////////////////////////////
// Name:        attributes.h
// Author:      Laurent Pugin
// Created:     2014
// Copyright (c) Authors and others. All rights reserved.
//
// Code generated using a modified version of libmei 
// by Andrew Hankinson, Alastair Porter, and Others
/////////////////////////////////////////////////////////////////////////////


#ifndef __VRV_FIGTABLEMIXIN_H__
#define __VRV_FIGTABLEMIXIN_H__



namespace vrv {
    
//----------------------------------------------------------------------------
// AttTabular
//----------------------------------------------------------------------------

class AttTabular 
{
public:
    AttTabular();
    virtual ~AttTabular();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetColspanInt(int colspanInt) { m_colspanInt = colspanInt; };
    int GetColspanInt() { return m_colspanInt; };
    //
    void SetRowspanInt(int rowspanInt) { m_rowspanInt = rowspanInt; };
    int GetRowspanInt() { return m_rowspanInt; };
    ///@}

protected:
    /** The number of columns spanned by this cell. **/
    int m_colspanInt;
    /** The number of rows spanned by this cell. **/
    int m_rowspanInt;

    
/* include <rowspanmixin> */

};

}

#endif  // __VRV_FIGTABLEMIXIN_H__

