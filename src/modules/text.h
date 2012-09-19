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

#ifndef TEXT_H_
#define TEXT_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "sharedmixins.h"
#include "facsimilemixins.h"
#include <string>


namespace mei {
/** \brief (back matter) – Contains any appendixes, advertisements, indexes, etc.
 * 
 *  following the main body of a musical text.
 */
class MEI_EXPORT Back : public MeiElement {
    public:
        Back();
        Back(const Back& other);
        virtual ~Back();

/* include <back> */

        CommonMixIn    m_Common;
        DeclaringMixIn    m_Declaring;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Back);
};

/** \brief (division) – Major structural division of text, such as a preface, chapter or
 *  section.
 */
class MEI_EXPORT Div : public MeiElement {
    public:
        Div();
        Div(const Div& other);
        virtual ~Div();

/* include <div> */

        CommonMixIn    m_Common;
        DeclaringMixIn    m_Declaring;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Div);
};

/** \brief (front matter) – Bundles prefatory text found before the start of the musical
 *  text.
 */
class MEI_EXPORT Front : public MeiElement {
    public:
        Front();
        Front(const Front& other);
        virtual ~Front();

/* include <front> */

        CommonMixIn    m_Common;
        DeclaringMixIn    m_Declaring;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Front);
};

/** \brief (heading) – Contains any heading, for example, the title of a section of text,
 *  or the heading of a list.
 */
class MEI_EXPORT Head : public MeiElement {
    public:
        Head();
        Head(const Head& other);
        virtual ~Head();

/* include <head> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(Head);
};

/** \brief – Single item in a <list>.
 */
class MEI_EXPORT Item : public MeiElement {
    public:
        Item();
        Item(const Item& other);
        virtual ~Item();

/* include <item> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;

    private:
        REGISTER_DECLARATION(Item);
};

/** \brief (line of text) – Contains a single line of text within a line group.
 */
class MEI_EXPORT L : public MeiElement {
    public:
        L();
        L(const L& other);
        virtual ~L();

/* include <l> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(L);
};

/** \brief (line group) – May be used for any section of text that is organized as a
 *  group of lines; however, it is most often used for a group of verse lines
 *  functioning as a formal unit, e.g.
 * 
 *  a stanza, refrain, verse paragraph, etc.
 */
class MEI_EXPORT Lg : public MeiElement {
    public:
        Lg();
        Lg(const Lg& other);
        virtual ~Lg();

/* include <lg> */

        CommonMixIn    m_Common;
        DeclaringMixIn    m_Declaring;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(Lg);
};

/** \brief – A formatting element that contains a series of items separated from one
 *  another and arranged in a linear, often vertical, sequence.
 */
class MEI_EXPORT List : public MeiElement {
    public:
        List();
        List(const List& other);
        virtual ~List();
        /** \brief records the function of the dot.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();

/* include <list> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(List);
};

/** \brief (block quote) – A formatting element that designates an extended quotation;
 *  that is, a passage attributed to a source external to the text and normally set
 *  off from the text by spacing or other typographic distinction.
 */
class MEI_EXPORT Quote : public MeiElement {
    public:
        Quote();
        Quote(const Quote& other);
        virtual ~Quote();

/* include <quote> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(Quote);
};
}
#endif  // TEXT_H_
