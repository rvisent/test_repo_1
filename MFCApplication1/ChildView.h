
// ChildView.h : interfaccia della classe CChildView
//


#pragma once


// finestra di CChildView

class CChildView : public CWnd
{
// Costruzione
public:
	CChildView();

// Attributi
public:

// Operazioni
public:

// Sostituzioni
	protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// Implementazione
public:
	virtual ~CChildView();

	// Funzioni generate per la mappa dei messaggi
protected:
	afx_msg void OnPaint();
	DECLARE_MESSAGE_MAP()
};

