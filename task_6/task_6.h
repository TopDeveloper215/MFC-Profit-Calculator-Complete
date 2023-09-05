
// task_6.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Ctask_6App:
// See task_6.cpp for the implementation of this class
//

class Ctask_6App : public CWinApp
{
public:
	Ctask_6App();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern Ctask_6App theApp;