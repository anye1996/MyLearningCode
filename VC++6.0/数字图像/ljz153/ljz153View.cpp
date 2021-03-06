// ljz153View.cpp : implementation of the CLjz153View class
//

#include "stdafx.h"
#include "ljz153.h"

#include "ljz153Doc.h"
#include "ljz153View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CLjz153View

IMPLEMENT_DYNCREATE(CLjz153View, CScrollView)

BEGIN_MESSAGE_MAP(CLjz153View, CScrollView)
	//{{AFX_MSG_MAP(CLjz153View)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CScrollView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CLjz153View construction/destruction

CLjz153View::CLjz153View()
{
	// TODO: add construction code here

}

CLjz153View::~CLjz153View()
{
}

BOOL CLjz153View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CScrollView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CLjz153View drawing
extern LPBITMAPINFO   lpBitsInfo;
void CLjz153View::OnDraw(CDC* pDC)
{
	CLjz153Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	if (NULL == lpBitsInfo) 
		return;
	LPVOID lpBits = (LPVOID)&lpBitsInfo ->bmiColors[lpBitsInfo ->bmiHeader.biClrUsed];
	StretchDIBits (pDC->GetSafeHdc(), 
		0, 0, lpBitsInfo->bmiHeader.biWidth, lpBitsInfo->bmiHeader.biHeight,
		0, 0, lpBitsInfo->bmiHeader.biWidth, lpBitsInfo->bmiHeader.biHeight,
		lpBits, lpBitsInfo,
		DIB_RGB_COLORS, SRCCOPY);

}

void CLjz153View::OnInitialUpdate()
{
	CScrollView::OnInitialUpdate();

	CSize sizeTotal;
	// TODO: calculate the total size of this view
	sizeTotal.cx = sizeTotal.cy = 100;
	SetScrollSizes(MM_TEXT, sizeTotal);
}

/////////////////////////////////////////////////////////////////////////////
// CLjz153View printing

BOOL CLjz153View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CLjz153View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CLjz153View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CLjz153View diagnostics

#ifdef _DEBUG
void CLjz153View::AssertValid() const
{
	CScrollView::AssertValid();
}

void CLjz153View::Dump(CDumpContext& dc) const
{
	CScrollView::Dump(dc);
}

CLjz153Doc* CLjz153View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CLjz153Doc)));
	return (CLjz153Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CLjz153View message handlers
