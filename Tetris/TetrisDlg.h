
// TetrisDlg.h : 头文件
//

#pragma once


// CTetrisDlg 对话框
class CTetrisDlg : public CDialogEx
{
// 构造
public:
	CTetrisDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TETRIS_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonBegingame();
	afx_msg void OnBnClickedButtonHelp();
	afx_msg void OnBnClickedButtonExit();
	afx_msg void OnBnClickedButtonAchieve();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
