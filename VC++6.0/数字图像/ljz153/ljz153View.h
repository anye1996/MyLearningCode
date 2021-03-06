// ljz153View.h : interface of the CLjz153View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_LJZ153VIEW_H__BB1E4802_B825_4E28_98E7_086AE14BF07D__INCLUDED_)
#define AFX_LJZ153VIEW_H__BB1E4802_B825_4E28_98E7_086AE14BF07D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CLjz153View : public CScrollView
{
protected: // create from serialization only
	CLjz153View();
	DECLARE_DYNCREATE(CLjz153View)

// Attributes
public:
	CLjz153Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLjz153View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void OnInitialUpdate(); // called first time after construct
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CLjz153View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CLjz153View)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in ljz153View.cpp
inline CLjz153Doc* CLjz153View::GetDocument()
   { return (CLjz153Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LJZ153VIEW_H__BB1E4802_B825_4E28_98E7_086AE14BF07D__INCLUDED_)
