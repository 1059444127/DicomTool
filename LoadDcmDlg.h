#pragma once
#include "RawDib.h"


// CLoadDcmDlg �Ի���

class CLoadDcmDlg : public CBCGPDialog
{
	DECLARE_DYNAMIC(CLoadDcmDlg)

public:
	CLoadDcmDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CLoadDcmDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_LoadDicom };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CRawDib m_rRawDib;
};
