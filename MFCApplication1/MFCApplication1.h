
// MFCApplication1.h : file di intestazione principale per l'applicazione MFCApplication1
//
#pragma once

#ifndef __AFXWIN_H__
	#error "includere 'stdafx.h' prima di includere questo file per PCH"
#endif

#include "resource.h"       // simboli principali


// CMFCApplication1App:
// Vedere MFCApplication1.cpp per l'implementazione di questa classe
//

class CMFCApplication1App : public CWinApp
{
public:
	CMFCApplication1App();


// Override
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementazione

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication1App theApp;
