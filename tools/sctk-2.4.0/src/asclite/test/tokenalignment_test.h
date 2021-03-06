/*
 * ASCLITE
 * Author: Jerome Ajot, Jon Fiscus, Nicolas Radde, Chris Laprun
 *
 * This software was developed at the National Institute of Standards and Technology by 
 * employees of the Federal Government in the course of their official duties. Pursuant
 * to title 17 Section 105 of the United States Code this software is not subject to
 * copyright protection and is in the public domain. ASCLITE is an experimental system.
 * NIST assumes no responsibility whatsoever for its use by other parties, and makes no
 * guarantees, expressed or implied, about its quality, reliability, or any other
 * characteristic. We would appreciate acknowledgement if the software is used.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS."  With regard to this software, NIST MAKES NO EXPRESS
 * OR IMPLIED WARRANTY AS TO ANY MATTER WHATSOEVER, INCLUDING MERCHANTABILITY,
 * OR FITNESS FOR A PARTICULAR PURPOSE.
 */

#ifndef TOKENALIGNMENT_TEST_H
#define TOKENALIGNMENT_TEST_H

#include "stdinc.h"
#include "token.h"
#include "tokenalignment.h"
#include "speech.h"
#include "speechset.h"
#include "segment.h"

class TokenAlignmentTest {
public:
	TokenAlignmentTest();
	~TokenAlignmentTest();
	
	void TestAddAlignment();
	void TestNullRef();
	void TestNullHyp();
	void TestAll();
	
private:
	TokenAlignment* m_tokenAlignment;
	Token* m_ref;
	Token* m_hyp1;
	Token* m_hyp2;
	Token* m_hyp3;
	SpeechSet* speechSet;
	Speech* speech;
	Segment* segment;
};

#endif
