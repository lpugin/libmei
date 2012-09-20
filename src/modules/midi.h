/*
    Copyright (c) 2011-2012 Andrew Hankinson, Alastair Porter
    
    Permission is hereby granted, free of charge, to any person obtaining
    a copy of this software and associated documentation files (the
    "Software"), to deal in the Software without restriction, including
    without limitation the rights to use, copy, modify, merge, publish,
    distribute, sublicense, and/or sell copies of the Software, and to
    permit persons to whom the Software is furnished to do so, subject to
    the following conditions:
    
    The above copyright notice and this permission notice shall be
    included in all copies or substantial portions of the Software.
    
    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
    NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
    LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
    OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
    WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#ifndef MIDI_H_
#define MIDI_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "analysismixins.h"
#include "linkalignmixins.h"
#include "sharedmixins.h"
#include "midimixins.h"
#include <string>


namespace mei {
/** \brief (control change) ― MIDI parameter/control change.
 */
class MEI_EXPORT Cc : public MeiElement {
    public:
        Cc();
        Cc(const Cc& other);
        virtual ~Cc();

/* include <cc> */

        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        CommonMixIn    m_Common;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        TimestampMusicalMixIn    m_TimestampMusical;
        MidinumberMixIn    m_Midinumber;
        MidivalueMixIn    m_Midivalue;

    private:
        REGISTER_DECLARATION(Cc);
};

/** \brief (channel) ― MIDI channel assignment.
 */
class MEI_EXPORT Chan : public MeiElement {
    public:
        Chan();
        Chan(const Chan& other);
        virtual ~Chan();
        /** \brief along with numbase, describes duration as a ratio.
         * 
         *  num is the first value in the ratio, while numbase is the second.
         */
        MeiAttribute* getNum();
        void setNum(std::string _num);
        bool hasNum();
        void removeNum();

/* include <chan> */

        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        CommonMixIn    m_Common;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        TimestampMusicalMixIn    m_TimestampMusical;

    private:
        REGISTER_DECLARATION(Chan);
};

/** \brief (channel pressure) ― MIDI channel pressure/after touch.
 */
class MEI_EXPORT ChanPr : public MeiElement {
    public:
        ChanPr();
        ChanPr(const ChanPr& other);
        virtual ~ChanPr();

/* include <chanPr> */

        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        CommonMixIn    m_Common;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        TimestampMusicalMixIn    m_TimestampMusical;
        MidinumberMixIn    m_Midinumber;

    private:
        REGISTER_DECLARATION(ChanPr);
};

/** \brief ― MIDI cue point.
 */
class MEI_EXPORT Cue : public MeiElement {
    public:
        Cue();
        Cue(const Cue& other);
        virtual ~Cue();

/* include <cue> */

        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        CommonMixIn    m_Common;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        TimestampMusicalMixIn    m_TimestampMusical;

    private:
        REGISTER_DECLARATION(Cue);
};

/** \brief ― Arbitrary MIDI data in hexadecimal form.
 */
class MEI_EXPORT Hex : public MeiElement {
    public:
        Hex();
        Hex(const Hex& other);
        virtual ~Hex();

/* include <hex> */

        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        CommonMixIn    m_Common;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        TimestampMusicalMixIn    m_TimestampMusical;

    private:
        REGISTER_DECLARATION(Hex);
};

/** \brief ― MIDI marker meta-event.
 */
class MEI_EXPORT Marker : public MeiElement {
    public:
        Marker();
        Marker(const Marker& other);
        virtual ~Marker();

/* include <marker> */

        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        CommonMixIn    m_Common;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        TimestampMusicalMixIn    m_TimestampMusical;

    private:
        REGISTER_DECLARATION(Marker);
};

/** \brief ― MIDI text meta-event.
 */
class MEI_EXPORT MetaText : public MeiElement {
    public:
        MetaText();
        MetaText(const MetaText& other);
        virtual ~MetaText();

/* include <metaText> */

        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        CommonMixIn    m_Common;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        TimestampMusicalMixIn    m_TimestampMusical;

    private:
        REGISTER_DECLARATION(MetaText);
};

/** \brief ― Container for elements that contain information useful when generating MIDI
 *  output.
 */
class MEI_EXPORT Midi : public MeiElement {
    public:
        Midi();
        Midi(const Midi& other);
        virtual ~Midi();

/* include <midi> */

        CommonMixIn    m_Common;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Midi);
};

/** \brief ― MIDI note-off event.
 */
class MEI_EXPORT NoteOff : public MeiElement {
    public:
        NoteOff();
        NoteOff(const NoteOff& other);
        virtual ~NoteOff();

/* include <noteOff> */

        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        CommonMixIn    m_Common;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        TimestampMusicalMixIn    m_TimestampMusical;
        MidinumberMixIn    m_Midinumber;

    private:
        REGISTER_DECLARATION(NoteOff);
};

/** \brief ― MIDI note-on event.
 */
class MEI_EXPORT NoteOn : public MeiElement {
    public:
        NoteOn();
        NoteOn(const NoteOn& other);
        virtual ~NoteOn();

/* include <noteOn> */

        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        CommonMixIn    m_Common;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        TimestampMusicalMixIn    m_TimestampMusical;
        MidinumberMixIn    m_Midinumber;

    private:
        REGISTER_DECLARATION(NoteOn);
};

/** \brief ― MIDI port.
 */
class MEI_EXPORT Port : public MeiElement {
    public:
        Port();
        Port(const Port& other);
        virtual ~Port();

/* include <port> */

        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        CommonMixIn    m_Common;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        TimestampMusicalMixIn    m_TimestampMusical;
        MidinumberMixIn    m_Midinumber;

    private:
        REGISTER_DECLARATION(Port);
};

/** \brief (program) ― MIDI program change.
 */
class MEI_EXPORT Prog : public MeiElement {
    public:
        Prog();
        Prog(const Prog& other);
        virtual ~Prog();

/* include <prog> */

        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        CommonMixIn    m_Common;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        TimestampMusicalMixIn    m_TimestampMusical;
        MidinumberMixIn    m_Midinumber;

    private:
        REGISTER_DECLARATION(Prog);
};

/** \brief (sequence number) ― MIDI sequence number.
 */
class MEI_EXPORT SeqNum : public MeiElement {
    public:
        SeqNum();
        SeqNum(const SeqNum& other);
        virtual ~SeqNum();
        /** \brief along with numbase, describes duration as a ratio.
         * 
         *  num is the first value in the ratio, while numbase is the second.
         */
        MeiAttribute* getNum();
        void setNum(std::string _num);
        bool hasNum();
        void removeNum();

/* include <seqNum> */

        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        CommonMixIn    m_Common;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        TimestampMusicalMixIn    m_TimestampMusical;

    private:
        REGISTER_DECLARATION(SeqNum);
};

/** \brief (track name) ― MIDI track/sequence name.
 */
class MEI_EXPORT TrkName : public MeiElement {
    public:
        TrkName();
        TrkName(const TrkName& other);
        virtual ~TrkName();

/* include <trkName> */

        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        CommonMixIn    m_Common;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        TimestampMusicalMixIn    m_TimestampMusical;

    private:
        REGISTER_DECLARATION(TrkName);
};

/** \brief (velocity) ― MIDI Note-on/off velocity.
 */
class MEI_EXPORT Vel : public MeiElement {
    public:
        Vel();
        Vel(const Vel& other);
        virtual ~Vel();
        /** \brief records the function of the dot.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();

/* include <vel> */

        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        CommonMixIn    m_Common;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        TimestampMusicalMixIn    m_TimestampMusical;
        MidinumberMixIn    m_Midinumber;

    private:
        REGISTER_DECLARATION(Vel);
};
}
#endif  // MIDI_H_
