#if !defined(AFX_EXIT_H__CF17DCD0_894A_4194_AA49_C06060A470EE__INCLUDED_)
#define AFX_EXIT_H__CF17DCD0_894A_4194_AA49_C06060A470EE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// EXIT.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// EXIT dialog

class EXIT : public CDialog
{
// Construction
public:
	EXIT(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(EXIT)
	enum { IDD = IDD_EXIT };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(EXIT)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(EXIT)
	virtual void OnOK();
	virtual void OnCancel();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EXIT_H__CF17DCD0_894A_4194_AA49_C06060A470EE__INCLUDED_)
