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

#ifndef LAYOUTMIXIN_H_
#define LAYOUTMIXIN_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include <string>

namespace mei {
class BarlineMixIn {
    public:
        explicit BarlineMixIn(MeiElement *b);
        virtual ~BarlineMixIn();
        /** \brief Indicates if the element describes the beginning or end of a measure.
         * 
         *  If a //mb/@barline="left" is pointing to a measure without a @left, there is no
         *  barline drawn by default. If a //mb/@barline="right" is pointing to a measure
         *  without a @right, there is a regular barline drawn by default.
         */
        MeiAttribute* getBarline();
        void setBarline(std::string _barline);
        bool hasBarline();
        void removeBarline();

/* include <barlinemixin> */

    private:
        MeiElement *b;
};

class IgnoreMixIn {
    public:
        explicit IgnoreMixIn(MeiElement *b);
        virtual ~IgnoreMixIn();
        /** \brief Indicates whether the referenced element should be included or omitted from the
         *  rendering.
         */
        MeiAttribute* getIgnored();
        void setIgnored(std::string _ignored);
        bool hasIgnored();
        void removeIgnored();

/* include <ignoredmixin> */

    private:
        MeiElement *b;
};

class LayoutMixIn {
    public:
        explicit LayoutMixIn(MeiElement *b);
        virtual ~LayoutMixIn();
        /** \brief Indicates whether the referenced element should be included or omitted from the
         *  rendering.
         */
        MeiAttribute* getIgnored();
        void setIgnored(std::string _ignored);
        bool hasIgnored();
        void removeIgnored();

/* include <ignoredmixin> */

    private:
        MeiElement *b;
};

class MeasureRefMixIn {
    public:
        explicit MeasureRefMixIn(MeiElement *b);
        virtual ~MeasureRefMixIn();
        /** \brief contains a reference to a measure.
         */
        MeiAttribute* getMeasureref();
        void setMeasureref(std::string _measureref);
        bool hasMeasureref();
        void removeMeasureref();

/* include <measurerefmixin> */

    private:
        MeiElement *b;
};

class PageRefMixIn {
    public:
        explicit PageRefMixIn(MeiElement *b);
        virtual ~PageRefMixIn();
        /** \brief contains a list of pbs that are referenced.
         */
        MeiAttribute* getPbrefs();
        void setPbrefs(std::string _pbrefs);
        bool hasPbrefs();
        void removePbrefs();

/* include <pbrefsmixin> */

    private:
        MeiElement *b;
};

class SurfaceMixIn {
    public:
        explicit SurfaceMixIn(MeiElement *b);
        virtual ~SurfaceMixIn();
        /** \brief contains a reference to a surface element
         */
        MeiAttribute* getSurface();
        void setSurface(std::string _surface);
        bool hasSurface();
        void removeSurface();

/* include <surfacemixin> */

    private:
        MeiElement *b;
};

class SystemRefMixIn {
    public:
        explicit SystemRefMixIn(MeiElement *b);
        virtual ~SystemRefMixIn();
        /** \brief contains a list of sbs that are referenced.
         */
        MeiAttribute* getSbrefs();
        void setSbrefs(std::string _sbrefs);
        bool hasSbrefs();
        void removeSbrefs();

/* include <sbrefsmixin> */

    private:
        MeiElement *b;
};
}
#endif  // LAYOUTMIXIN_H_
