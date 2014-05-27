/////////////////////////////////////////////////////////////////////////////
// Name:        attributes.h
// Author:      Laurent Pugin
// Created:     2014
// Copyright (c) Authors and others. All rights reserved.
//
// Code generated using a modified version of libmei 
// by Andrew Hankinson, Alastair Porter, and Others
/////////////////////////////////////////////////////////////////////////////


#ifndef __VRV_CMNORNAMENTSMIXIN_H__
#define __VRV_CMNORNAMENTSMIXIN_H__

#include <string>

namespace vrv {
    
//----------------------------------------------------------------------------
// AttMordentLog
//----------------------------------------------------------------------------

class AttMordentLog 
{
public:
    AttMordentLog();
    virtual ~AttMordentLog();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetForm(std::string form) { m_form = form; };
    std::string GetForm() { return m_form; };
    //
    void SetLong(std::string long) { m_long = long; };
    std::string GetLong() { return m_long; };
    ///@}

protected:
    /** Records the function of the dot. **/
    std::string m_form;
    /**
     * When the long attribute is set to 'yes', a double or long mordent, consisting of
     * 5 notes, is indicated.
     **/
    std::string m_long;

    
/* include <longmixin> */

};

//----------------------------------------------------------------------------
// AttOrnam
//----------------------------------------------------------------------------

class AttOrnam 
{
public:
    AttOrnam();
    virtual ~AttOrnam();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetOrnam(std::string ornam) { m_ornam = ornam; };
    std::string GetOrnam() { return m_ornam; };
    ///@}

protected:
    /**
     * Indicates that this element has an attached ornament.
     * If visual information about the ornament is needed, then one of the elements
     * that represents an ornament (mordent, trill, or turn) should be employed.
     **/
    std::string m_ornam;

    
/* include <ornammixin> */

};

//----------------------------------------------------------------------------
// AttOrnamentaccid
//----------------------------------------------------------------------------

class AttOrnamentaccid 
{
public:
    AttOrnamentaccid();
    virtual ~AttOrnamentaccid();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetAccidupper(std::string accidupper) { m_accidupper = accidupper; };
    std::string GetAccidupper() { return m_accidupper; };
    //
    void SetAccidlower(std::string accidlower) { m_accidlower = accidlower; };
    std::string GetAccidlower() { return m_accidlower; };
    ///@}

protected:
    /** Records the written accidental associated with an upper neighboring note. **/
    std::string m_accidupper;
    /** Records the written accidental associated with a lower neighboring note. **/
    std::string m_accidlower;

    
/* include <accidlowermixin> */

};

//----------------------------------------------------------------------------
// AttTurnLog
//----------------------------------------------------------------------------

class AttTurnLog 
{
public:
    AttTurnLog();
    virtual ~AttTurnLog();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetDelayed(std::string delayed) { m_delayed = delayed; };
    std::string GetDelayed() { return m_delayed; };
    //
    void SetForm(std::string form) { m_form = form; };
    std::string GetForm() { return m_form; };
    ///@}

protected:
    /**
     * When the delayed attribute is set to 'true', the turn begins on the second half
     * of the beat.
     * See Read, p. 246.
     **/
    std::string m_delayed;
    /** Records the function of the dot. **/
    std::string m_form;

    
/* include <formmixin> */

};

}

#endif  // __VRV_CMNORNAMENTSMIXIN_H__

