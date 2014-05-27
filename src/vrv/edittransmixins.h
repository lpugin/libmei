/////////////////////////////////////////////////////////////////////////////
// Name:        attributes.h
// Author:      Laurent Pugin
// Created:     2014
// Copyright (c) Authors and others. All rights reserved.
//
// Code generated using a modified version of libmei 
// by Andrew Hankinson, Alastair Porter, and Others
/////////////////////////////////////////////////////////////////////////////


#ifndef __VRV_EDITTRANSMIXIN_H__
#define __VRV_EDITTRANSMIXIN_H__

#include <string>

namespace vrv {
    
//----------------------------------------------------------------------------
// AttAgentident
//----------------------------------------------------------------------------

class AttAgentident 
{
public:
    AttAgentident();
    virtual ~AttAgentident();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetAgent(std::string agent) { m_agent = agent; };
    std::string GetAgent() { return m_agent; };
    ///@}

protected:
    /**
     * Signifies the causative agent of damage, illegibility, or other loss of original
     * text.
     **/
    std::string m_agent;

    
/* include <agentmixin> */

};

//----------------------------------------------------------------------------
// AttEdit
//----------------------------------------------------------------------------

class AttEdit 
{
public:
    AttEdit();
    virtual ~AttEdit();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetCert(std::string cert) { m_cert = cert; };
    std::string GetCert() { return m_cert; };
    //
    void SetEvidence(std::string evidence) { m_evidence = evidence; };
    std::string GetEvidence() { return m_evidence; };
    ///@}

protected:
    /** Signifies the degree of certainty or precision associated with a feature. **/
    std::string m_cert;
    /**
     * Indicates the nature of the evidence supporting the reliability or accuracy of
     * the intervention or interpretation.
     * Suggested values include: 'internal', 'external', 'conjecture'.
     **/
    std::string m_evidence;

    
/* include <evidencemixin> */

};

//----------------------------------------------------------------------------
// AttExtent
//----------------------------------------------------------------------------

class AttExtent 
{
public:
    AttExtent();
    virtual ~AttExtent();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetExtent(std::string extent) { m_extent = extent; };
    std::string GetExtent() { return m_extent; };
    ///@}

protected:
    /** Indicates the extent of damage or omission. **/
    std::string m_extent;

    
/* include <extentmixin> */

};

//----------------------------------------------------------------------------
// AttReasonident
//----------------------------------------------------------------------------

class AttReasonident 
{
public:
    AttReasonident();
    virtual ~AttReasonident();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetReason(std::string reason) { m_reason = reason; };
    std::string GetReason() { return m_reason; };
    ///@}

protected:
    /**
     * Holds a short phrase describing the reason for missing textual material (gap),
     * why material is supplied (supplied), or why transcription is difficult
     * (unclear).
     **/
    std::string m_reason;

    
/* include <reasonmixin> */

};

}

#endif  // __VRV_EDITTRANSMIXIN_H__

