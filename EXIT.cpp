// EXIT.cpp : implementation file
//

#include "stdafx.h"
#include "点我呀.h"
#include "EXIT.h"
#include "点我呀Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// EXIT dialog


EXIT::EXIT(CWnd* pParent /*=NULL*/)
	: CDialog(EXIT::IDD, pParent)
{
	//{{AFX_DATA_INIT(EXIT)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void EXIT::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(EXIT)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(EXIT, CDialog)
	//{{AFX_MSG_MAP(EXIT)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// EXIT message handlers

void EXIT::OnOK() 
{
	// TODO: Add extra validation here
//	CWnd *pwnd = FindWindow(“ExploreWClass”,NULL); //希望找到资源管理器
//　HWND hwnd = pwnd->GetSafeHwnd(); //得到它的HWND

	CDialog::OnOK();

	CWnd *pnd;
    pnd=GetParent();
	pnd->DestroyWindow();

}

void EXIT::OnCancel() 
{
	// TODO: Add extra cleanup here
	
	CDialog::OnCancel();
}
