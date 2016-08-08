
// FTech_CheckExDlg.cpp : implementation file
//

#include "stdafx.h"
#include "FTech_CheckEx.h"
#include "FTech_CheckExDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CFTech_CheckExDlg dialog




CFTech_CheckExDlg::CFTech_CheckExDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CFTech_CheckExDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CFTech_CheckExDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_CHECK1, m_chkTest1);
	DDX_Control(pDX, IDC_CHECK2, m_chkTest2);
}

BEGIN_MESSAGE_MAP(CFTech_CheckExDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
END_MESSAGE_MAP()


// CFTech_CheckExDlg message handlers

BOOL CFTech_CheckExDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	m_chkTest1.SetAlignTextRM();
	m_chkTest1.SetSizeCheck(3);
	m_chkTest1.SetSizeCheckBox(3,3,30,30);
	m_chkTest1.LoadImageFromFile(L"babelfish.png");
	m_chkTest1.SetSizeImage(40,3,30,30);
	m_chkTest1.SetOffsetText(-10,0);
	m_chkTest1.SetText(L"GDI+ Check");
	//m_chkTest1.SetEnable(false);

	m_chkTest2.LoadImageFromFile(L"check-select.png",L"check-normal.png");
	m_chkTest2.SetEnable(false);

	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CFTech_CheckExDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CFTech_CheckExDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

