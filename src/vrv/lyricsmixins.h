/////////////////////////////////////////////////////////////////////////////
// Name:        attributes.h
// Author:      Laurent Pugin
// Created:     2014
// Copyright (c) Authors and others. All rights reserved.
//
// Code generated using a modified version of libmei 
// by Andrew Hankinson, Alastair Porter, and Others
/////////////////////////////////////////////////////////////////////////////


#ifndef __VRV_LYRICSMIXIN_H__
#define __VRV_LYRICSMIXIN_H__

#include <string>

namespace vrv {
    
//----------------------------------------------------------------------------
// AttVerseLog
//----------------------------------------------------------------------------

class AttVerseLog 
{
public:
    AttVerseLog();
    virtual ~AttVerseLog();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetRefrain(std::string refrain) { m_refrain = refrain; };
    std::string GetRefrain() { return m_refrain; };
    //
    void SetRhythm(std::string rhythm) { m_rhythm = rhythm; };
    std::string GetRhythm() { return m_rhythm; };
    ///@}

protected:
    /**
     * Used to indicate a common, usually centered, refrain (Mup User's Guide, p.
     * 44).
     **/
    std::string m_refrain;
    /**
     * Used to specify a rhythm for the lyric syllables that differs from that of the
     * notes on the staff, e.g.
     * '4,4,4,4' when the rhythm of the notes is '4.,8,4.,8'.
     **/
    std::string m_rhythm;

    
/* include <rhythmmixin> */

};

}

#endif  // __VRV_LYRICSMIXIN_H__

