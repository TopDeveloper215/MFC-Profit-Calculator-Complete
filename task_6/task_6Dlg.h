
// task_6Dlg.h : header file
//

#pragma once
#include "afxwin.h"
#include "afxcmn.h"


// Ctask_6Dlg dialog
class Ctask_6Dlg : public CDialogEx
{
// Construction
public:
	Ctask_6Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_TASK_6_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CStatic var_box_1;
	CStatic var_box1_text;
	CString value_input_1;
	CStatic var_box_2;
	CStatic var_box2_text1;
	CString value_input_2;
	CStatic var_box_3;
	CStatic Var_box3_text1;
	CStatic var_box3_text2;
	//CSliderCtrl var_slider1;
	//afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	//CString var_static_txt;
	CStatic var_box_4;
	CStatic var_box4_text1;
	//CSliderCtrl var_slider2;
	//CString var_static_txt2;
	CStatic var_box_5;
	CString value_box5_text1;
	//afx_msg void OnNMCustomdrawSlider1(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnEnChange1();
	CString text1;
	CString text2;

	CStatic var_box5_text2;
	CStatic var_box5_text3;
	CStatic var_box5_text4;
	CStatic var_box_6;
	CStatic var_box6_text1;
	CStatic var_box6_text2;
	CString value_box6_text3;
	afx_msg void OnEnChange2();
	afx_msg void OnStnClickedtext3();
	//afx_msg void OnNMCustomdrawSlider2(NMHDR *pNMHDR, LRESULT *pResult);
	CStatic var_box_7;
	CStatic var_box7_text1;
	CStatic var_box7_text2;
	CStatic var_box7_text3;
	CString value_box7_text4;
	CStatic var_box8;
	CStatic var_box8_text1;
	CStatic var_box8_text2;
	CStatic var_box8_text4;
	CString value_box8_text5;
	CStatic var_box_9;
	CStatic var_box9_text1;
	CStatic var_box9_text2;
	CStatic var_box9_text3;
	CString value_box9_text4;
	CStatic var_box10;
	CStatic var_box10_text1;
	CStatic var_box10_text2;
	CStatic var_box10_text3;
	CString value_box10_text4;
	afx_msg void OnStnClickedtext2();
	afx_msg void OnStnClickedtext1();
	HFONT hfont;
	CFont font;
	CFont font1;
	CFont font2;
	CFont font3;
	CString value_input_3;
	CString value_input_4;
	afx_msg void OnBnClicked2();
	afx_msg void OnEnChange4();
	afx_msg void OnEnChange3();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	CString m_file;
	void open_file(LPCTSTR file);
	//afx_msg void OnBnClickedMfcmenubutton1();
	afx_msg void OnFileNew();
	afx_msg void OnFileOpen();
	void OnFileSave(CString szfilename);
	CString quickAddThousandSeparators(CString value_input_1);
	afx_msg void OnFileSaveas();
	void loadSetting(CString szfilename);
};
