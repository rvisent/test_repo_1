
// ChildView.cpp : implementazione della classe CChildView
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "ChildView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CChildView

CChildView::CChildView()
{
}

CChildView::~CChildView()
{
}


BEGIN_MESSAGE_MAP(CChildView, CWnd)
	ON_WM_PAINT()
END_MESSAGE_MAP()



// gestori di messaggi di CChildView

BOOL CChildView::PreCreateWindow(CREATESTRUCT& cs) 
{
	if (!CWnd::PreCreateWindow(cs))
		return FALSE;

	cs.dwExStyle |= WS_EX_CLIENTEDGE;
	cs.style &= ~WS_BORDER;
	cs.lpszClass = AfxRegisterWndClass(CS_HREDRAW|CS_VREDRAW|CS_DBLCLKS, 
		::LoadCursor(NULL, IDC_ARROW), reinterpret_cast<HBRUSH>(COLOR_WINDOW+1), NULL);

	return TRUE;
}

void CChildView::OnPaint() 
{
	CPaintDC dc(this); // contesto di dispositivo per il disegno
	RECT rc;
	GetClientRect(&rc);
	int xc = (rc.left + rc.right) / 2;
	int yc = (rc.top + rc.bottom) / 2;
	int rMax = min(rc.right - rc.left, rc.bottom - rc.top) / 2;
	int rStella = rMax * 8 / 10; // 80% client area

	POINT pStella[5];
	for (int i = 0; i < 5; i++)
	{
		double ang = 2 * M_PI / 5 * i;
		pStella[i].x = int(rStella*sin(ang) + xc);
		pStella[i].y = int(-rStella*cos(ang) + yc);
	}

	// TODO: aggiungere qui il codice per la gestione dei messaggi.
	CPen pen;
	pen.CreatePen(PS_SOLID, 2, RGB(255, 0, 0));
	dc.SelectObject(pen);
	dc.MoveTo(pStella[0]);
	for (int i = 1; i < 5;i++) 
		dc.LineTo(pStella[2*i%5]);
	dc.LineTo(pStella[0]);

	CBrush br;
	br.CreateSolidBrush(RGB(0, 255, 0));
	dc.SelectObject(br);
	dc.FloodFill(xc, yc, RGB(255, 0, 0));

	for (int i = 0; i < 5; i++)
	{
		double ang = 2 * M_PI / 5 * i;

		dc.FloodFill(int(rStella*0.8*sin(ang) + xc), int(-rStella*0.8*cos(ang) + yc), RGB(255, 0, 0));
	}

	// Non chiamare CWnd::OnPaint() per i messaggi relativi al disegno.
}

