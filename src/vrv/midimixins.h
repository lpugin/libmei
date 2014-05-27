/////////////////////////////////////////////////////////////////////////////
// Name:        attributes.h
// Author:      Laurent Pugin
// Created:     2014
// Copyright (c) Authors and others. All rights reserved.
//
// Code generated using a modified version of libmei 
// by Andrew Hankinson, Alastair Porter, and Others
/////////////////////////////////////////////////////////////////////////////


#ifndef __VRV_MIDIMIXIN_H__
#define __VRV_MIDIMIXIN_H__

#include <string>

namespace vrv {
    
//----------------------------------------------------------------------------
// AttChannelized
//----------------------------------------------------------------------------

class AttChannelized 
{
public:
    AttChannelized();
    virtual ~AttChannelized();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetMidiChannel(std::string midiChannel) { m_midiChannel = midiChannel; };
    std::string GetMidiChannel() { return m_midiChannel; };
    //
    void SetMidiDuty(std::string midiDuty) { m_midiDuty = midiDuty; };
    std::string GetMidiDuty() { return m_midiDuty; };
    //
    void SetMidiPort(std::string midiPort) { m_midiPort = midiPort; };
    std::string GetMidiPort() { return m_midiPort; };
    //
    void SetMidiTrackInt(int midiTrackInt) { m_midiTrackInt = midiTrackInt; };
    int GetMidiTrackInt() { return m_midiTrackInt; };
    ///@}

protected:
    /** Records a MIDI channel value. **/
    std::string m_midiChannel;
    /** Specifies the 'on' part of the duty cycle as a percentage of a note's duration. **/
    std::string m_midiDuty;
    /** Sets the MIDI port value. **/
    std::string m_midiPort;
    /** Sets the MIDI track. **/
    int m_midiTrackInt;

    
/* include <midi.trackmixin> */

};

//----------------------------------------------------------------------------
// AttMidiinstrument
//----------------------------------------------------------------------------

class AttMidiinstrument 
{
public:
    AttMidiinstrument();
    virtual ~AttMidiinstrument();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetMidiInstrnum(std::string midiInstrnum) { m_midiInstrnum = midiInstrnum; };
    std::string GetMidiInstrnum() { return m_midiInstrnum; };
    //
    void SetMidiInstrname(std::string midiInstrname) { m_midiInstrname = midiInstrname; };
    std::string GetMidiInstrname() { return m_midiInstrname; };
    //
    void SetMidiPan(std::string midiPan) { m_midiPan = midiPan; };
    std::string GetMidiPan() { return m_midiPan; };
    //
    void SetMidiVolume(std::string midiVolume) { m_midiVolume = midiVolume; };
    std::string GetMidiVolume() { return m_midiVolume; };
    ///@}

protected:
    /** Sets the MIDI instrument number. **/
    std::string m_midiInstrnum;
    /** Provides a General MIDI label for the MIDI instrument. **/
    std::string m_midiInstrname;
    /**
     * Sets the instrument's position in a stereo field.
     * Values of 0 and 1 both pan left, 127 pans right, and 64 pans to the center.
     **/
    std::string m_midiPan;
    /** Sets the instrument's volume. **/
    std::string m_midiVolume;

    
/* include <midi.volumemixin> */

};

//----------------------------------------------------------------------------
// AttMidinumber
//----------------------------------------------------------------------------

class AttMidinumber 
{
public:
    AttMidinumber();
    virtual ~AttMidinumber();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetNumInt(int numInt) { m_numInt = numInt; };
    int GetNumInt() { return m_numInt; };
    ///@}

protected:
    /**
     * Along with numbase, describes duration as a ratio.
     * num is the first value in the ratio, while numbase is the second.
     **/
    int m_numInt;

    
/* include <nummixin> */

};

//----------------------------------------------------------------------------
// AttMiditempo
//----------------------------------------------------------------------------

class AttMiditempo 
{
public:
    AttMiditempo();
    virtual ~AttMiditempo();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetMidiTempo(std::string midiTempo) { m_midiTempo = midiTempo; };
    std::string GetMidiTempo() { return m_midiTempo; };
    ///@}

protected:
    /**
     * Contains a MIDI value, that is, the number of quarter notes per minute in the
     * range from 10 to 1000.
     **/
    std::string m_midiTempo;

    
/* include <midi.tempomixin> */

};

//----------------------------------------------------------------------------
// AttMidivalue
//----------------------------------------------------------------------------

class AttMidivalue 
{
public:
    AttMidivalue();
    virtual ~AttMidivalue();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetVal(std::string val) { m_val = val; };
    std::string GetVal() { return m_val; };
    ///@}

protected:
    /** MIDI number. **/
    std::string m_val;

    
/* include <valmixin> */

};

//----------------------------------------------------------------------------
// AttTimebase
//----------------------------------------------------------------------------

class AttTimebase 
{
public:
    AttTimebase();
    virtual ~AttTimebase();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetPpqInt(int ppqInt) { m_ppqInt = ppqInt; };
    int GetPpqInt() { return m_ppqInt; };
    ///@}

protected:
    /**
     * Indicates the number of pulses (sometimes referred to as ticks or divisions) per
     * quarter note.
     * Unlike MIDI, MEI permits different values for a score and individual staves.
     **/
    int m_ppqInt;

    
/* include <ppqmixin> */

};

}

#endif  // __VRV_MIDIMIXIN_H__

