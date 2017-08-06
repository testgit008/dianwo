; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=EXIT
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "点我呀.h"

ClassCount=4
Class1=CMyApp
Class2=CMyDlg
Class3=CAboutDlg

ResourceCount=4
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_MY_DIALOG
Class4=EXIT
Resource4=IDD_EXIT

[CLS:CMyApp]
Type=0
HeaderFile=点我呀.h
ImplementationFile=点我呀.cpp
Filter=N

[CLS:CMyDlg]
Type=0
HeaderFile=点我呀Dlg.h
ImplementationFile=点我呀Dlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=CMyDlg

[CLS:CAboutDlg]
Type=0
HeaderFile=点我呀Dlg.h
ImplementationFile=点我呀Dlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_MY_DIALOG]
Type=1
Class=CMyDlg
ControlCount=2
Control1=ID_EXIT,button,1342242816
Control2=IDC_STATIC,static,1342308352

[DLG:IDD_EXIT]
Type=1
Class=EXIT
ControlCount=3
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308865

[CLS:EXIT]
Type=0
HeaderFile=EXIT.h
ImplementationFile=EXIT.cpp
BaseClass=CDialog
Filter=D
LastObject=EXIT
VirtualFilter=dWC

