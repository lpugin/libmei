/////////////////////////////////////////////////////////////////////////////
// Name:        attributes.h
// Author:      Laurent Pugin
// Created:     2014
// Copyright (c) Authors and others. All rights reserved.
//
// Code generated using a modified version of libmei 
// by Andrew Hankinson, Alastair Porter, and Others
/////////////////////////////////////////////////////////////////////////////


#ifndef __VRV_MENSURALMIXIN_H__
#define __VRV_MENSURALMIXIN_H__

#include <string>

namespace vrv {
    
//----------------------------------------------------------------------------
// AttLigatureLog
//----------------------------------------------------------------------------

class AttLigatureLog 
{
public:
    AttLigatureLog();
    virtual ~AttLigatureLog();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetForm(std::string form) { m_form = form; };
    std::string GetForm() { return m_form; };
    ///@}

protected:
    /** Records the function of the dot. **/
    std::string m_form;

    
/* include <formmixin> */

};

//----------------------------------------------------------------------------
// AttMensurVis
//----------------------------------------------------------------------------

class AttMensurVis 
{
public:
    AttMensurVis();
    virtual ~AttMensurVis();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetForm(std::string form) { m_form = form; };
    std::string GetForm() { return m_form; };
    //
    void SetOrient(std::string orient) { m_orient = orient; };
    std::string GetOrient() { return m_orient; };
    ///@}

protected:
    /** Records the function of the dot. **/
    std::string m_form;
    /** Describes the rotation or reflection of the base symbol. **/
    std::string m_orient;

    
/* include <orientmixin> */

};

//----------------------------------------------------------------------------
// AttMensurDefaultLog
//----------------------------------------------------------------------------

class AttMensurDefaultLog 
{
public:
    AttMensurDefaultLog();
    virtual ~AttMensurDefaultLog();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetMensurDot(std::string mensurDot) { m_mensurDot = mensurDot; };
    std::string GetMensurDot() { return m_mensurDot; };
    //
    void SetMensurLocInt(int mensurLocInt) { m_mensurLocInt = mensurLocInt; };
    int GetMensurLocInt() { return m_mensurLocInt; };
    //
    void SetMensurSign(std::string mensurSign) { m_mensurSign = mensurSign; };
    std::string GetMensurSign() { return m_mensurSign; };
    //
    void SetMensurSlashInt(int mensurSlashInt) { m_mensurSlashInt = mensurSlashInt; };
    int GetMensurSlashInt() { return m_mensurSlashInt; };
    ///@}

protected:
    /** Determines if a dot is to be added to the base symbol. **/
    std::string m_mensurDot;
    /** Holds the staff location of the mensuration sign. **/
    int m_mensurLocInt;
    /** The base symbol in the mensuration sign/time signature of mensural notation. **/
    std::string m_mensurSign;
    /**
     * Indicates the number lines added to the mensuration sign.
     * For example, one slash is added for what we now call 'alla breve'.
     **/
    int m_mensurSlashInt;

    
/* include <mensur.slashmixin> */

};

//----------------------------------------------------------------------------
// AttMensurDefaultVis
//----------------------------------------------------------------------------

class AttMensurDefaultVis 
{
public:
    AttMensurDefaultVis();
    virtual ~AttMensurDefaultVis();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetMensurColor(std::string mensurColor) { m_mensurColor = mensurColor; };
    std::string GetMensurColor() { return m_mensurColor; };
    //
    void SetMensurForm(std::string mensurForm) { m_mensurForm = mensurForm; };
    std::string GetMensurForm() { return m_mensurForm; };
    //
    void SetMensurOrient(std::string mensurOrient) { m_mensurOrient = mensurOrient; };
    std::string GetMensurOrient() { return m_mensurOrient; };
    //
    void SetMensurSize(std::string mensurSize) { m_mensurSize = mensurSize; };
    std::string GetMensurSize() { return m_mensurSize; };
    ///@}

protected:
    /**
     * Records the color of the mensuration sign.
     * Do not confuse this with the musical term 'color' as used in pre-CMN notation.
     **/
    std::string m_mensurColor;
    /** Indicates whether the base symbol is written vertically or horizontally. **/
    std::string m_mensurForm;
    /** Describes the rotation or reflection of the base symbol. **/
    std::string m_mensurOrient;
    /** Describes the relative size of the mensuration sign. **/
    std::string m_mensurSize;

    
/* include <mensur.sizemixin> */

};

//----------------------------------------------------------------------------
// AttNoteLogMensural
//----------------------------------------------------------------------------

class AttNoteLogMensural 
{
public:
    AttNoteLogMensural();
    virtual ~AttNoteLogMensural();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetLig(std::string lig) { m_lig = lig; };
    std::string GetLig() { return m_lig; };
    ///@}

protected:
    /** Indicates this element's participation in a ligature. **/
    std::string m_lig;

    
/* include <ligmixin> */

};

//----------------------------------------------------------------------------
// AttRestVisMensural
//----------------------------------------------------------------------------

class AttRestVisMensural 
{
public:
    AttRestVisMensural();
    virtual ~AttRestVisMensural();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetSpacesInt(int spacesInt) { m_spacesInt = spacesInt; };
    int GetSpacesInt() { return m_spacesInt; };
    ///@}

protected:
    /** States how many spaces are covered by the rest. **/
    int m_spacesInt;

    
/* include <spacesmixin> */

};

//----------------------------------------------------------------------------
// AttStaffDefLogMensural
//----------------------------------------------------------------------------

class AttStaffDefLogMensural 
{
public:
    AttStaffDefLogMensural();
    virtual ~AttStaffDefLogMensural();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetProportNumInt(int proportNumInt) { m_proportNumInt = proportNumInt; };
    int GetProportNumInt() { return m_proportNumInt; };
    //
    void SetProportNumbaseInt(int proportNumbaseInt) { m_proportNumbaseInt = proportNumbaseInt; };
    int GetProportNumbaseInt() { return m_proportNumbaseInt; };
    ///@}

protected:
    /**
     * Together, proport.num and proport.numbase specify a proportional change as a
     * ratio, e.g., 1:3.
     * Proport.num is for the first value in the ratio.
     **/
    int m_proportNumInt;
    /**
     * Together, proport.num and proport.numbase specify a proportional change as a
     * ratio, e.g., 1:3.
     * Proport.numbase is for the second value in the ratio.
     **/
    int m_proportNumbaseInt;

    
/* include <proport.numbasemixin> */

};

//----------------------------------------------------------------------------
// AttStafflocPitched
//----------------------------------------------------------------------------

class AttStafflocPitched 
{
public:
    AttStafflocPitched();
    virtual ~AttStafflocPitched();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetPloc(std::string ploc) { m_ploc = ploc; };
    std::string GetPloc() { return m_ploc; };
    //
    void SetOloc(std::string oloc) { m_oloc = oloc; };
    std::string GetOloc() { return m_oloc; };
    ///@}

protected:
    /** Captures staff location in terms of written pitch name. **/
    std::string m_ploc;
    /** Records staff location in terms of written octave. **/
    std::string m_oloc;

    
/* include <olocmixin> */

};

}

#endif  // __VRV_MENSURALMIXIN_H__

