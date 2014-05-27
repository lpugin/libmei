/*
    Copyright (c) 2011-2013 Andrew Hankinson, Alastair Porter, and Others
    
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

#ifndef EDITTRANS_H_
#define EDITTRANS_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "sharedmixins.h"
#include "edittransmixins.h"
#include "critappmixins.h"
#include "facsimilemixins.h"
#include <string>


namespace mei {
/** \brief (abbreviation) – A generic element for 1) a shortened form of a word,
 *  including an acronym or 2) a shorthand notation.
 */
class MEI_EXPORT Abbr : public MeiElement {
    public:
        Abbr();
        Abbr(const Abbr& other);
        virtual ~Abbr();
        /** \brief records the expansion of a text abbreviation.
         */
        MeiAttribute* getExpan();
        void setExpan(std::string _expan);
        bool hasExpan();
        void removeExpan();

/* include <abbr> */

        CommonMixIn    m_Common;
        EditMixIn    m_Edit;
        ResponsibilityMixIn    m_Responsibility;
        SourceMixIn    m_Source;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        HandidentMixIn    m_Handident;
        SequenceMixIn    m_Sequence;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Abbr);
};

/** \brief (addition) – Marks an addition to the text.
 */
class MEI_EXPORT Add : public MeiElement {
    public:
        Add();
        Add(const Add& other);
        virtual ~Add();

/* include <add> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        EditMixIn    m_Edit;
        ResponsibilityMixIn    m_Responsibility;
        SourceMixIn    m_Source;
        HandidentMixIn    m_Handident;
        SequenceMixIn    m_Sequence;

    private:
        REGISTER_DECLARATION(Add);
};

/** \brief – Groups a number of alternative encodings for the same point in a text.
 */
class MEI_EXPORT Choice : public MeiElement {
    public:
        Choice();
        Choice(const Choice& other);
        virtual ~Choice();

/* include <choice> */

        CommonMixIn    m_Common;

    private:
        REGISTER_DECLARATION(Choice);
};

/** \brief (correction) – Contains the correct form of an apparent erroneous passage.
 */
class MEI_EXPORT Corr : public MeiElement {
    public:
        Corr();
        Corr(const Corr& other);
        virtual ~Corr();

/* include <corr> */

        CommonMixIn    m_Common;
        EditMixIn    m_Edit;
        ResponsibilityMixIn    m_Responsibility;
        SourceMixIn    m_Source;
        HandidentMixIn    m_Handident;
        SequenceMixIn    m_Sequence;

    private:
        REGISTER_DECLARATION(Corr);
};

/** \brief – Contains an area of damage to the physical medium.
 */
class MEI_EXPORT Damage : public MeiElement {
    public:
        Damage();
        Damage(const Damage& other);
        virtual ~Damage();
        /** \brief records the degree of damage.
         */
        MeiAttribute* getDegree();
        void setDegree(std::string _degree);
        bool hasDegree();
        void removeDegree();

/* include <damage> */

        AgentidentMixIn    m_Agentident;
        CommonMixIn    m_Common;
        ExtentMixIn    m_Extent;
        FacsimileMixIn    m_Facsimile;
        HandidentMixIn    m_Handident;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Damage);
};

/** \brief (deletion) – Contains information deleted, marked as deleted, or otherwise
 *  indicated as superfluous or spurious in the copy text by an author, scribe,
 *  annotator, or corrector.
 */
class MEI_EXPORT Del : public MeiElement {
    public:
        Del();
        Del(const Del& other);
        virtual ~Del();
        /** \brief records the appearance and usually the function of the bar line.
         */
        MeiAttribute* getRend();
        void setRend(std::string _rend);
        bool hasRend();
        void removeRend();

/* include <del> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        HandidentMixIn    m_Handident;
        SequenceMixIn    m_Sequence;

    private:
        REGISTER_DECLARATION(Del);
};

/** \brief (expansion) – Contains the expansion of an abbreviation.
 */
class MEI_EXPORT Expan : public MeiElement {
    public:
        Expan();
        Expan(const Expan& other);
        virtual ~Expan();
        /** \brief captures the unabbreviated form of the text.
         */
        MeiAttribute* getAbbr();
        void setAbbr(std::string _abbr);
        bool hasAbbr();
        void removeAbbr();

/* include <expan> */

        CommonMixIn    m_Common;
        EditMixIn    m_Edit;
        ResponsibilityMixIn    m_Responsibility;
        SourceMixIn    m_Source;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        HandidentMixIn    m_Handident;
        SequenceMixIn    m_Sequence;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Expan);
};

/** \brief – Indicates a point where material has been omitted in a transcription,
 *  whether as part of sampling practice or for editorial reasons described in the
 *  MEI header.
 */
class MEI_EXPORT Gap : public MeiElement {
    public:
        Gap();
        Gap(const Gap& other);
        virtual ~Gap();

/* include <gap> */

        CommonMixIn    m_Common;
        EditMixIn    m_Edit;
        ResponsibilityMixIn    m_Responsibility;
        SourceMixIn    m_Source;
        ExtentMixIn    m_Extent;
        HandidentMixIn    m_Handident;
        ReasonidentMixIn    m_Reasonident;
        MeasurementMixIn    m_Measurement;

    private:
        REGISTER_DECLARATION(Gap);
};

/** \brief – Marks the beginning of a passage written in a new hand, or of a change in
 *  the scribe, writing style, ink or character of the document hand.
 */
class MEI_EXPORT HandShift : public MeiElement {
    public:
        HandShift();
        HandShift(const HandShift& other);
        virtual ~HandShift();
        /** \brief describes the character of the new hand.
         */
        MeiAttribute* getCharacter();
        void setCharacter(std::string _character);
        bool hasCharacter();
        void removeCharacter();
        /** \brief identifies the new hand.
         * 
         *  The value must contain the ID of a hand element given elsewhere in the document.
         */
        MeiAttribute* getNew();
        void setNew(std::string _new);
        bool hasNew();
        void removeNew();
        /** \brief identifies the old hand.
         * 
         *  The value must contain the ID of a hand element given elsewhere in the document.
         */
        MeiAttribute* getOld();
        void setOld(std::string _old);
        bool hasOld();
        void removeOld();

/* include <handShift> */

        CommonMixIn    m_Common;
        EditMixIn    m_Edit;
        ResponsibilityMixIn    m_Responsibility;
        SourceMixIn    m_Source;
        FacsimileMixIn    m_Facsimile;
        MediumMixIn    m_Medium;

    private:
        REGISTER_DECLARATION(HandShift);
};

/** \brief (original) – Contains material which is marked as following the original,
 *  rather than being normalized or corrected.
 */
class MEI_EXPORT Orig : public MeiElement {
    public:
        Orig();
        Orig(const Orig& other);
        virtual ~Orig();

/* include <orig> */

        CommonMixIn    m_Common;
        EditMixIn    m_Edit;
        ResponsibilityMixIn    m_Responsibility;
        SourceMixIn    m_Source;
        FacsimileMixIn    m_Facsimile;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Orig);
};

/** \brief (regularization) – Contains material which has been regularized or normalized
 *  in some sense.
 */
class MEI_EXPORT Reg : public MeiElement {
    public:
        Reg();
        Reg(const Reg& other);
        virtual ~Reg();

/* include <reg> */

        CommonMixIn    m_Common;
        AuthorizedMixIn    m_Authorized;
        EditMixIn    m_Edit;
        ResponsibilityMixIn    m_Responsibility;
        SourceMixIn    m_Source;

    private:
        REGISTER_DECLARATION(Reg);
};

/** \brief – Indicates restoration of material to an earlier state by cancellation of an
 *  editorial or authorial marking or instruction.
 */
class MEI_EXPORT Restore : public MeiElement {
    public:
        Restore();
        Restore(const Restore& other);
        virtual ~Restore();
        /** \brief provides a description of the means of restoration.
         */
        MeiAttribute* getDesc();
        void setDesc(std::string _desc);
        bool hasDesc();
        void removeDesc();

/* include <restore> */

        CommonMixIn    m_Common;
        EditMixIn    m_Edit;
        ResponsibilityMixIn    m_Responsibility;
        SourceMixIn    m_Source;
        FacsimileMixIn    m_Facsimile;
        HandidentMixIn    m_Handident;
        SequenceMixIn    m_Sequence;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Restore);
};

/** \brief – Contains apparently incorrect or inaccurate material.
 */
class MEI_EXPORT Sic : public MeiElement {
    public:
        Sic();
        Sic(const Sic& other);
        virtual ~Sic();

/* include <sic> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;

    private:
        REGISTER_DECLARATION(Sic);
};

/** \brief (substitution) – Groups transcriptional elements when the combination is to be
 *  regarded as a single intervention in the text.
 */
class MEI_EXPORT Subst : public MeiElement {
    public:
        Subst();
        Subst(const Subst& other);
        virtual ~Subst();

/* include <subst> */

        CommonMixIn    m_Common;
        EditMixIn    m_Edit;
        ResponsibilityMixIn    m_Responsibility;
        SourceMixIn    m_Source;
        HandidentMixIn    m_Handident;
        SequenceMixIn    m_Sequence;

    private:
        REGISTER_DECLARATION(Subst);
};

/** \brief – Contains material supplied by the transcriber or editor in place of text
 *  which cannot be read, either because of physical damage or loss in the original
 *  or because it is illegible for any reason.
 */
class MEI_EXPORT Supplied : public MeiElement {
    public:
        Supplied();
        Supplied(const Supplied& other);
        virtual ~Supplied();

/* include <supplied> */

        AgentidentMixIn    m_Agentident;
        CommonMixIn    m_Common;
        EditMixIn    m_Edit;
        ResponsibilityMixIn    m_Responsibility;
        SourceMixIn    m_Source;
        FacsimileMixIn    m_Facsimile;
        ReasonidentMixIn    m_Reasonident;

    private:
        REGISTER_DECLARATION(Supplied);
};

/** \brief – Contains material that cannot be transcribed with certainty because it is
 *  illegible or inaudible in the source.
 */
class MEI_EXPORT Unclear : public MeiElement {
    public:
        Unclear();
        Unclear(const Unclear& other);
        virtual ~Unclear();

/* include <unclear> */

        AgentidentMixIn    m_Agentident;
        CommonMixIn    m_Common;
        EditMixIn    m_Edit;
        ResponsibilityMixIn    m_Responsibility;
        SourceMixIn    m_Source;
        FacsimileMixIn    m_Facsimile;
        HandidentMixIn    m_Handident;
        ReasonidentMixIn    m_Reasonident;

    private:
        REGISTER_DECLARATION(Unclear);
};
}
#endif  // EDITTRANS_H_
