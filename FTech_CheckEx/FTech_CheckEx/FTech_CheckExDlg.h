
// FTech_CheckExDlg.h : header file
//

#pragma once
#include "CheckEx.h"

// CFTech_CheckExDlg dialog
class CFTech_CheckExDlg : public CDialogEx
{
// Construction
public:
	CFTech_CheckExDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_FTECH_CHECKEX_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CCheckEx m_chkTest1;
	CCheckEx m_chkTest2;
};
