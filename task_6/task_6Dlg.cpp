
// task_6Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "task_6.h"
#include "task_6Dlg.h"
#include "afxdialogex.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#ifdef _DEBUG
#define new DEBUG_NEW
#endif



// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// Ctask_6Dlg dialog



Ctask_6Dlg::Ctask_6Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(Ctask_6Dlg::IDD, pParent)
	//, //var_static_txt(_T(""))
	//, //var_static_txt2(_T(""))
	, value_input_1(_T(""))
	, value_input_2(_T(""))
	, value_input_3(_T(""))
	, value_input_4(_T(""))
	, value_box5_text1(_T(""))
	, value_box6_text3(_T(""))
	, value_box7_text4(_T(""))
	, value_box8_text5(_T(""))
	, value_box9_text4(_T(""))
	, value_box10_text4(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void Ctask_6Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, box_1, var_box_1);
	DDX_Control(pDX, box1_text, var_box1_text);
	//DDX_Control(pDX, input_1, var_input_1);
	DDX_Control(pDX, box_2, var_box_2);
	DDX_Control(pDX, box2_text1, var_box2_text1);
	//DDX_Control(pDX, input_2, var_input_2);
	DDX_Control(pDX, box_3, var_box_3);
	DDX_Control(pDX, Box3_text1, Var_box3_text1);
	DDX_Control(pDX, box3_text2, var_box3_text2);
	//DDX_Control(pDX, IDC_SLIDER1, var_slider1);
	//DDX_Text(pDX, IDC_STATIC_TXT, var_static_txt);
	DDX_Control(pDX, box_4, var_box_4);
	DDX_Control(pDX, box4_text1, var_box4_text1);
	//DDX_Control(pDX, IDC_SLIDER2, var_slider2);
	//DDX_Text(pDX, IDC_STATIC_TXT2, var_static_txt2);
	DDX_Control(pDX, box_5, var_box_5);
	//DDX_Control(pDX, box5_text1, var_box5_text1);
	DDX_Control(pDX, box5_text2, var_box5_text2);
	DDX_Control(pDX, box5_text3, var_box5_text3);
	DDX_Control(pDX, box5_text4, var_box5_text4);
	DDX_Control(pDX, box_6, var_box_6);
	DDX_Control(pDX, box6_text1, var_box6_text1);
	DDX_Control(pDX, box6_text2, var_box6_text2);
	//DDX_Control(pDX, box6_text3, var_box6_text3);
	DDX_Control(pDX, box_7, var_box_7);
	DDX_Control(pDX, box7_text1, var_box7_text1);
	DDX_Control(pDX, box7_text2, var_box7_text2);
	DDX_Control(pDX, box7_text3, var_box7_text3);
	//DDX_Control(pDX, box7_text4, var_box7_text4);
	DDX_Control(pDX, box_8, var_box8);
	DDX_Control(pDX, box8_text1, var_box8_text1);
	DDX_Control(pDX, box8_text2, var_box8_text2);
	DDX_Control(pDX, box8_text4, var_box8_text4);
	//DDX_Control(pDX, box8_text5, var_box8_text5);
	DDX_Control(pDX, box_9, var_box_9);
	DDX_Control(pDX, box9_text1, var_box9_text1);
	DDX_Control(pDX, box9_text2, var_box9_text2);
	DDX_Control(pDX, box9_text3, var_box9_text3);
	//DDX_Control(pDX, box9_text4, var_box9_text4);
	DDX_Control(pDX, box10, var_box10);
	DDX_Control(pDX, box10_text1, var_box10_text1);
	DDX_Control(pDX, box10_text2, var_box10_text2);
	DDX_Control(pDX, box10_text3, var_box10_text3);
	//DDX_Control(pDX, box10_text4, var_box10_text4);
	//DDX_Control(pDX, input_3, var_input_3);
	//DDX_Control(pDX, input_4, var_input_4);

	DDX_Text(pDX, input_1, value_input_1);
	DDX_Text(pDX, input_2, value_input_2);
	DDX_Text(pDX, input_3, value_input_3);
	DDX_Text(pDX, input_4, value_input_4);
	DDX_Text(pDX, box5_text1, value_box5_text1);
	DDX_Text(pDX, box6_text3, value_box6_text3);
	DDX_Text(pDX, box7_text4, value_box7_text4);
	DDX_Text(pDX, box8_text5, value_box8_text5);
	DDX_Text(pDX, box9_text4, value_box9_text4);
	DDX_Text(pDX, box10_text4, value_box10_text4);
}

BEGIN_MESSAGE_MAP(Ctask_6Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_WM_HSCROLL()
	//ON_NOTIFY(NM_CUSTOMDRAW, IDC_SLIDER1, &Ctask_6Dlg::OnNMCustomdrawSlider1)
	ON_EN_CHANGE(input_1, &Ctask_6Dlg::OnEnChange1)
	ON_EN_CHANGE(input_2, &Ctask_6Dlg::OnEnChange2)
	ON_STN_CLICKED(box6_text3, &Ctask_6Dlg::OnStnClickedtext3)
	//ON_NOTIFY(NM_CUSTOMDRAW, IDC_SLIDER2, &Ctask_6Dlg::OnNMCustomdrawSlider2)
	ON_STN_CLICKED(box5_text2, &Ctask_6Dlg::OnStnClickedtext2)
	ON_STN_CLICKED(Box3_text1, &Ctask_6Dlg::OnStnClickedtext1)
	ON_BN_CLICKED(box_2, &Ctask_6Dlg::OnBnClicked2)
	ON_EN_CHANGE(input_4, &Ctask_6Dlg::OnEnChange4)
	ON_EN_CHANGE(input_3, &Ctask_6Dlg::OnEnChange3)
	ON_WM_CTLCOLOR()
	
	//ON_BN_CLICKED(IDC_BUTTON1, &Ctask_6Dlg::OnBnClickedButton1)
	ON_COMMAND(ID_FILE_NEW, &Ctask_6Dlg::OnFileNew)
	ON_COMMAND(ID_FILE_OPEN, &Ctask_6Dlg::OnFileOpen)
	ON_COMMAND(ID_FILE_SAVEAS, &Ctask_6Dlg::OnFileSaveas)
	//ON_COMMAND(ID_FILE_SAVE, &Ctask_6Dlg::OnFileSave)
END_MESSAGE_MAP()


// Ctask_6Dlg message handlers

BOOL Ctask_6Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	/*var_slider1.SetRange(0, 100, TRUE);
	var_slider2.SetRange(0, 100, TRUE);
	var_slider1.SetPos(0);
	var_slider2.SetPos(0);
	var_static_txt.Format(_T("%d"),0);
	var_static_txt2.Format(_T("%d"), 0);*/
	//set font
	//CClientDC dc(this);
	//VERIFY(font.CreatePointFont(120, "Comic Sans MS", &dc));
	font.CreateFont(30, 12, 0, 0, 0, 0, 0, 0, ANSI_CHARSET, OUT_CHARACTER_PRECIS,
		CLIP_DEFAULT_PRECIS, PROOF_QUALITY, FIXED_PITCH, CString("Arial"));
	//font1.CreateFont(20, 8, 0, 0, 0, 0, 0, 0, ANSI_CHARSET, OUT_CHARACTER_PRECIS,
		//CLIP_DEFAULT_PRECIS, PROOF_QUALITY, FIXED_PITCH, CString("Arial"));
	font2.CreateFont(60, 24, 0, 0, 0, 0, 0, 0, ANSI_CHARSET, OUT_CHARACTER_PRECIS,
		CLIP_DEFAULT_PRECIS, PROOF_QUALITY, FIXED_PITCH, CString("Arial"));
	font3.CreateFont(70, 29, 0, 0, 0, 0, 0, 0, ANSI_CHARSET, OUT_CHARACTER_PRECIS,
		CLIP_DEFAULT_PRECIS, PROOF_QUALITY, FIXED_PITCH, CString("Arial"));
	GetDlgItem(box1_text)->SetFont(&font);
	GetDlgItem(box2_text1)->SetFont(&font);
	GetDlgItem(Box3_text1)->SetFont(&font);
	GetDlgItem(box3_text2)->SetFont(&font);
	//GetDlgItem(IDC_STATIC_TXT)->SetFont(&font);
	GetDlgItem(box4_text1)->SetFont(&font);
	//GetDlgItem(IDC_STATIC_TXT2)->SetFont(&font);
	GetDlgItem(box5_text1)->SetFont(&font3);
	GetDlgItem(box5_text2)->SetFont(&font);
	GetDlgItem(box5_text3)->SetFont(&font);
	GetDlgItem(box5_text4)->SetFont(&font3);
	GetDlgItem(box6_text1)->SetFont(&font);
	GetDlgItem(box6_text2)->SetFont(&font);
	GetDlgItem(box6_text3)->SetFont(&font3);
	GetDlgItem(box7_text1)->SetFont(&font);
	GetDlgItem(box7_text2)->SetFont(&font);
	GetDlgItem(box7_text3)->SetFont(&font3);
	GetDlgItem(box7_text4)->SetFont(&font3);
	GetDlgItem(box8_text1)->SetFont(&font);
	GetDlgItem(box8_text2)->SetFont(&font);
	GetDlgItem(box8_text4)->SetFont(&font3);
	GetDlgItem(box8_text5)->SetFont(&font3);
	GetDlgItem(box9_text1)->SetFont(&font);
	GetDlgItem(box9_text2)->SetFont(&font);
	GetDlgItem(box9_text3)->SetFont(&font3);
	GetDlgItem(box9_text4)->SetFont(&font3);
	GetDlgItem(box10_text1)->SetFont(&font);
	GetDlgItem(box10_text2)->SetFont(&font);
	GetDlgItem(box10_text3)->SetFont(&font3);
	GetDlgItem(box10_text4)->SetFont(&font3);
	GetDlgItem(input_1)->SetFont(&font2);
	GetDlgItem(input_2)->SetFont(&font2);
	GetDlgItem(input_3)->SetFont(&font2);
	GetDlgItem(input_4)->SetFont(&font2);

	//loadSetting(L"Artificial Grass.cfg");
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void Ctask_6Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void Ctask_6Dlg::OnPaint()
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
HCURSOR Ctask_6Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



/*void Ctask_6Dlg::OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar)
{
	// TODO: Add your message handler code here and/or call default

	if (pScrollBar == (CScrollBar *)&var_slider1, var_slider2) {
		int value = var_slider1.GetPos();
		int value2 = var_slider2.GetPos();
		var_static_txt.Format(_T("%d"), value);
		var_static_txt2.Format(_T("%d"), value2);
		UpdateData(FALSE);
	}
	else {
		CDialog::OnHScroll(nSBCode, nPos, pScrollBar);
	}
}*/


/*void Ctask_6Dlg::OnNMCustomdrawSlider1(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMCUSTOMDRAW pNMCD = reinterpret_cast<LPNMCUSTOMDRAW>(pNMHDR);
	// TODO: Add your control notification handler code here
	*pResult = 0;
	int scr_1 = GetDlgItemInt(IDC_STATIC_TXT);
	int scr_2 = GetDlgItemInt(IDC_STATIC_TXT2);
	int inp_1 = GetDlgItemInt(input_1);
	//int inp_2 = GetDlgItemInt(input_2);
	SetDlgItemInt(box5_text1, inp_1 * scr_1 * 0.01);
	//SetDlgItemInt(box8_text5, inp_1 * scr_1 * scr_2 * 0.01);
	//SetDlgItemInt(box10_text4, inp_1 * inp_2 * scr_1 * scr_2 * 0.01);
	//SetDlgItemInt(box6_text3, scr_2);
}*/


void Ctask_6Dlg::OnEnChange1()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	int inp_1 = GetDlgItemInt(input_1);
	int inp_2 = GetDlgItemInt(input_2);
	int inp_3 = GetDlgItemInt(input_3);
	int inp_4 = GetDlgItemInt(input_4);
	float sum0 = round(inp_1 * inp_3 * 0.01);
	float sum1 = round(inp_2 * inp_4 * 0.01);
	float sum2 = inp_1 * sum1 / inp_2;
	float sum3 = inp_3 * sum2 * 0.01;
	float sum4 = round(inp_1 * inp_2 * inp_4 * 0.01);
	float sum5 = inp_3 * sum4 * 0.01;

	CString strNum0;
	CString strNum1;
	CString strNum2;
	CString strNum3;
	CString strNum4;
	CString strNum5;

	strNum0.Format(_T("%.f"), sum0);
	strNum1.Format(_T("%.f"), sum1);
	strNum2.Format(_T("%.f"), sum2);
	strNum3.Format(_T("%.f"), sum3);
	strNum4.Format(_T("%.f"), sum4);
	strNum5.Format(_T("%.f"), sum5);

	strNum0 = quickAddThousandSeparators(strNum0);
	strNum1 = quickAddThousandSeparators(strNum1);
	strNum2 = quickAddThousandSeparators(strNum2);
	strNum3 = quickAddThousandSeparators(strNum3);
	strNum4 = quickAddThousandSeparators(strNum4);
	strNum5 = quickAddThousandSeparators(strNum5);

	SetDlgItemText(box5_text1, strNum0);
	SetDlgItemText(box6_text3, strNum1);
	SetDlgItemText(box7_text4, strNum2);
	SetDlgItemText(box8_text5, strNum3);
	SetDlgItemText(box9_text4, strNum4);
	SetDlgItemText(box10_text4, strNum5);
	/*SetDlgItemInt(box5_text1, inp_1 * inp_3 * 0.01);
	SetDlgItemInt(box6_text3, inp_2 * inp_4 * 0.01);
	SetDlgItemInt(box7_text4, inp_1 * inp_4 * 0.01);
	SetDlgItemInt(box8_text5, inp_1 * inp_3 * inp_4 * 0.0001);
	SetDlgItemInt(box9_text4, inp_1 * inp_2 * inp_4 * 0.01);
	SetDlgItemInt(box10_text4, inp_1 * inp_2 * inp_3 * inp_4 * 0.0001);*/

	// TODO:  Add your control notification handler code here
}

CString Ctask_6Dlg::quickAddThousandSeparators(CString value_input_1)
{

	int nLen = value_input_1.GetLength();
	int nFirst = 0;
	CString strFormatedNumber;
	for (int nIdx = 0; nIdx < nLen; nIdx++){
		if (nIdx > nFirst){
			int nRem = nLen - nIdx;         // Get number of digits remaining
			if (nRem % 3 == 0){
				strFormatedNumber += ",";     // Add a comma sepparator
			}
		}
		strFormatedNumber += value_input_1.GetAt(nIdx);
	}
	return strFormatedNumber;
}
void Ctask_6Dlg::OnEnChange2()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	int inp_1 = GetDlgItemInt(input_1);
	int inp_2 = GetDlgItemInt(input_2);
	int inp_3 = GetDlgItemInt(input_3);
	int inp_4 = GetDlgItemInt(input_4);
	float sum0 = round(inp_1 * inp_3 * 0.01);
	float sum1 = round(inp_2 * inp_4 * 0.01);
	float sum2 = inp_1 * sum1 / inp_2;
	float sum3 = inp_3 * sum2 * 0.01;
	float sum4 = round(inp_1 * inp_2 * inp_4 * 0.01);
	float sum5 = inp_3 * sum4 * 0.01;

	CString strNum0;
	CString strNum1;
	CString strNum2;
	CString strNum3;
	CString strNum4;
	CString strNum5;

	strNum0.Format(_T("%.f"), sum0);
	strNum1.Format(_T("%.f"), sum1);
	strNum2.Format(_T("%.f"), sum2);
	strNum3.Format(_T("%.f"), sum3);
	strNum4.Format(_T("%.f"), sum4);
	strNum5.Format(_T("%.f"), sum5);

	strNum0 = quickAddThousandSeparators(strNum0);
	strNum1 = quickAddThousandSeparators(strNum1);
	strNum2 = quickAddThousandSeparators(strNum2);
	strNum3 = quickAddThousandSeparators(strNum3);
	strNum4 = quickAddThousandSeparators(strNum4);
	strNum5 = quickAddThousandSeparators(strNum5);

	SetDlgItemText(box5_text1, strNum0);
	SetDlgItemText(box6_text3, strNum1);
	SetDlgItemText(box7_text4, strNum2);
	SetDlgItemText(box8_text5, strNum3);
	SetDlgItemText(box9_text4, strNum4);
	SetDlgItemText(box10_text4, strNum5);
	// TODO:  Add your control notification handler code here
}


void Ctask_6Dlg::OnStnClickedtext3()
{
	// TODO: Add your control notification handler code here
	int inp_1 = GetDlgItemInt(input_1);
	int inp_2 = GetDlgItemInt(input_2);
	int inp_3 = GetDlgItemInt(input_3);
	int inp_4 = GetDlgItemInt(input_4);
	float sum0 = round(inp_1 * inp_3 * 0.01);
	float sum1 = round(inp_2 * inp_4 * 0.01);
	float sum2 = inp_1 * sum1 / inp_2;
	float sum3 = inp_3 * sum2 * 0.01;
	float sum4 = round(inp_1 * inp_2 * inp_4 * 0.01);
	float sum5 = inp_3 * sum4 * 0.01;

	CString strNum0;
	CString strNum1;
	CString strNum2;
	CString strNum3;
	CString strNum4;
	CString strNum5;

	strNum0.Format(_T("%.f"), sum0);
	strNum1.Format(_T("%.f"), sum1);
	strNum2.Format(_T("%.f"), sum2);
	strNum3.Format(_T("%.f"), sum3);
	strNum4.Format(_T("%.f"), sum4);
	strNum5.Format(_T("%.f"), sum5);

	strNum0 = quickAddThousandSeparators(strNum0);
	strNum1 = quickAddThousandSeparators(strNum1);
	strNum2 = quickAddThousandSeparators(strNum2);
	strNum3 = quickAddThousandSeparators(strNum3);
	strNum4 = quickAddThousandSeparators(strNum4);
	strNum5 = quickAddThousandSeparators(strNum5);

	SetDlgItemText(box5_text1, strNum0);
	SetDlgItemText(box6_text3, strNum1);
	SetDlgItemText(box7_text4, strNum2);
	SetDlgItemText(box8_text5, strNum3);
	SetDlgItemText(box9_text4, strNum4);
	SetDlgItemText(box10_text4, strNum5);
}

/*void Ctask_6Dlg::OnNMCustomdrawSlider2(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMCUSTOMDRAW pNMCD = reinterpret_cast<LPNMCUSTOMDRAW>(pNMHDR);
	// TODO: Add your control notification handler code here
	*pResult = 0;
	int scr_1 = GetDlgItemInt(IDC_STATIC_TXT);
	int scr_2 = GetDlgItemInt(IDC_STATIC_TXT2);
	int inp_1 = GetDlgItemInt(input_1);
	int inp_2 = GetDlgItemInt(input_2);
	//SetDlgItemInt(box5_text1, inp_1 * scr_1 * 0.01);
	SetDlgItemInt(box6_text3, inp_2 * scr_2 * 0.01);
	SetDlgItemInt(box7_text4, inp_1 * scr_2 * 0.01);
	SetDlgItemInt(box8_text5, inp_1 * scr_1 * scr_2 * 0.0001);
	SetDlgItemInt(box9_text4, inp_1 * inp_2 * scr_2 * 0.01);
	SetDlgItemInt(box10_text4, inp_1 * inp_2 * scr_1 * scr_2 * 0.0001);
}*/


void Ctask_6Dlg::OnStnClickedtext2()
{
	// TODO: Add your control notification handler code here
}


void Ctask_6Dlg::OnStnClickedtext1()
{
	// TODO: Add your control notification handler code here
}


void Ctask_6Dlg::OnBnClicked2()
{
	// TODO: Add your control notification handler code here
}


void Ctask_6Dlg::OnEnChange4()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	int inp_1 = GetDlgItemInt(input_1);
	int inp_2 = GetDlgItemInt(input_2);
	int inp_3 = GetDlgItemInt(input_3);
	int inp_4 = GetDlgItemInt(input_4);
	float sum0 = round(inp_1 * inp_3 * 0.01);
	float sum1 = round(inp_2 * inp_4 * 0.01);
	float sum2 = inp_1 * sum1 / inp_2;
	float sum3 = inp_3 * sum2 * 0.01;
	float sum4 = round(inp_1 * inp_2 * inp_4 * 0.01);
	float sum5 = inp_3 * sum4 * 0.01;

	CString strNum0;
	CString strNum1;
	CString strNum2;
	CString strNum3;
	CString strNum4;
	CString strNum5;

	strNum0.Format(_T("%.f"), sum0);
	strNum1.Format(_T("%.f"), sum1);
	strNum2.Format(_T("%.f"), sum2);
	strNum3.Format(_T("%.f"), sum3);
	strNum4.Format(_T("%.f"), sum4);
	strNum5.Format(_T("%.f"), sum5);

	strNum0 = quickAddThousandSeparators(strNum0);
	strNum1 = quickAddThousandSeparators(strNum1);
	strNum2 = quickAddThousandSeparators(strNum2);
	strNum3 = quickAddThousandSeparators(strNum3);
	strNum4 = quickAddThousandSeparators(strNum4);
	strNum5 = quickAddThousandSeparators(strNum5);

	SetDlgItemText(box5_text1, strNum0);
	SetDlgItemText(box6_text3, strNum1);
	SetDlgItemText(box7_text4, strNum2);
	SetDlgItemText(box8_text5, strNum3);
	SetDlgItemText(box9_text4, strNum4);
	SetDlgItemText(box10_text4, strNum5);
	/*SetDlgItemInt(box5_text1, inp_1 * inp_3 * 0.01);
	SetDlgItemInt(box6_text3, inp_2 * inp_4 * 0.01);
	SetDlgItemInt(box7_text4, inp_1 * inp_4 * 0.01);
	SetDlgItemInt(box8_text5, inp_1 * inp_3 * inp_4 * 0.0001);
	SetDlgItemInt(box9_text4, inp_1 * inp_2 * inp_4 * 0.01);
	SetDlgItemInt(box10_text4, inp_1 * inp_2 * inp_3 * inp_4 * 0.0001);*/
	// TODO:  Add your control notification handler code here
}


void Ctask_6Dlg::OnEnChange3()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	int inp_1 = GetDlgItemInt(input_1);
	int inp_2 = GetDlgItemInt(input_2);
	int inp_3 = GetDlgItemInt(input_3);
	int inp_4 = GetDlgItemInt(input_4);
	float sum0 = round(inp_1 * inp_3 * 0.01);
	float sum1 = round(inp_2 * inp_4 * 0.01);
	float sum2 = inp_1 * sum1 / inp_2;
	float sum3 = inp_3 * sum2 * 0.01;
	float sum4 = round(inp_1 * inp_2 * inp_4 * 0.01);
	float sum5 = inp_3 * sum4 * 0.01;

	CString strNum0;
	CString strNum1;
	CString strNum2;
	CString strNum3;
	CString strNum4;
	CString strNum5;

	strNum0.Format(_T("%.f"), sum0);
	strNum1.Format(_T("%.f"), sum1);
	strNum2.Format(_T("%.f"), sum2);
	strNum3.Format(_T("%.f"), sum3);
	strNum4.Format(_T("%.f"), sum4);
	strNum5.Format(_T("%.f"), sum5);

	strNum0 = quickAddThousandSeparators(strNum0);
	strNum1 = quickAddThousandSeparators(strNum1);
	strNum2 = quickAddThousandSeparators(strNum2);
	strNum3 = quickAddThousandSeparators(strNum3);
	strNum4 = quickAddThousandSeparators(strNum4);
	strNum5 = quickAddThousandSeparators(strNum5);

	SetDlgItemText(box5_text1, strNum0);
	SetDlgItemText(box6_text3, strNum1);
	SetDlgItemText(box7_text4, strNum2);
	SetDlgItemText(box8_text5, strNum3);
	SetDlgItemText(box9_text4, strNum4);
	SetDlgItemText(box10_text4, strNum5);
	/*SetDlgItemInt(box5_text1, inp_1 * inp_3 * 0.01);
	SetDlgItemInt(box6_text3, inp_2 * inp_4 * 0.01);
	SetDlgItemInt(box7_text4, inp_1 * inp_4 * 0.01);
	SetDlgItemInt(box8_text5, inp_1 * inp_3 * inp_4 * 0.0001);
	SetDlgItemInt(box9_text4, inp_1 * inp_2 * inp_4 * 0.01);
	SetDlgItemInt(box10_text4, inp_1 * inp_2 * inp_3 * inp_4 * 0.0001);*/
	// TODO:  Add your control notification handler code here
}


HBRUSH Ctask_6Dlg::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialogEx::OnCtlColor(pDC, pWnd, nCtlColor);
	/*if (pWnd->GetDlgCtrlID() == box2_text1) //group box's id
	{
		pDC->SetBkColor(RGB(255,255,255));
		pDC->SetTextColor(RGB(255, 255, 255));
		pDC->SetBkMode(TRANSPARENT);

	}*/
	/*if (pWnd->GetDlgCtrlID() == box1_text) //group box's id
	{
		pDC->SetBkColor(RGB(255,0,255));
		pDC->SetTextColor(RGB(255,255,255));
		pDC->SetDCBrushColor (RGB(0, 255, 0));
		//pDC->SetBkMode(TRANSPARENT);

	}*/
	
	/*switch (nCtlColor)
	{
	case CTLCOLOR_STATIC:
		pDC->SetTextColor(RGB(0, 0, 255));


	case CTLCOLOR_LISTBOX:
		pDC->SetTextColor(RGB(47, 47, 36));

		return (HBRUSH)GetStockObject(NULL_BRUSH);
	}*/
	// TODO:  Change any attributes of the DC here

	// TODO:  Return a different brush if the default is not desired
	return hbr;
}




void Ctask_6Dlg::OnFileNew()
{
	// TODO: Add your command handler code here
	value_input_1.Empty();
	value_input_2.Empty();
	value_input_3.Empty();
	value_input_4.Empty();
	value_box5_text1.Empty();
	value_box6_text3.Empty();
	value_box7_text4.Empty();
	value_box8_text5.Empty();
	value_box9_text4.Empty();
	value_box10_text4.Empty();
	UpdateData(FALSE);
}


void Ctask_6Dlg::OnFileOpen()
{
	// TODO: Add your command handler code here
	CFileDialog open_file_dlg(TRUE, _T("cfg"), NULL, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, _T("Recent File List Dialog Demo (*.cfg)|*.cfg|All Files (*.*)|*.*||"), this);

	switch (open_file_dlg.DoModal())
	{
	case IDOK:
		OnFileNew();

		m_file = open_file_dlg.GetPathName();
		loadSetting(m_file);
		break;
	}
}

void Ctask_6Dlg::OnFileSave(CString szfilename)
{
	// TODO: Add your command handler code here
	UpdateData(TRUE);
	ofstream myfile(szfilename);
	if (myfile.is_open())
	{
		myfile << "Average ticket of product or service?=" << CT2A(value_input_1) << endl;
		myfile << "Number of leads sent each month?=" << CT2A(value_input_2) << endl;
		myfile << "Profit Margin=" << CT2A(value_input_3) << endl;
		myfile << "Close rate?=" << CT2A(value_input_4) << endl;
		myfile << "Average Profit After Expenses=" << CT2A(value_box5_text1) << endl;
		myfile << "Total New Customers=" << CT2A(value_box6_text3) << endl;
		myfile << "Actual Value of Lead=" << CT2A(value_box7_text4) << endl;
		myfile << "Net Margin Value of Lead=" << CT2A(value_box8_text5) << endl;
		myfile << "Total Monthly Revenue=" << CT2A(value_box9_text4) << endl;
		myfile << "Total Monthly Profit=" << CT2A(value_box10_text4);
		myfile.close();
	}
}
void Ctask_6Dlg::OnFileSaveas()
{
	// TODO: Add your command handler code here
	CFileDialog save_file_dlg(FALSE, _T("cfg"), NULL, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, _T("Recent File List Dialog Demo (*.cfg)|*.cfg|All Files (*.*)|*.*||"), this);

	switch (save_file_dlg.DoModal())
	{
	case IDOK:
		m_file = save_file_dlg.GetPathName();
		OnFileSave(m_file);
		break;

	default:
		break;
	}
}
void Ctask_6Dlg::loadSetting(CString szfilename)
{
	ifstream myfile(szfilename);
	CString strtmp[MAX_PATH] = { L"" };
	string myline = "";
	if (myfile.is_open())
	{ // always check whether the file is open
		int i = 0;
		while (myfile)
		{
			getline(myfile, myline);
			strtmp[i] = myline.substr(myline.find("=") + 1, myline.length() - myline.find("=")).c_str();
			i++;
		}
		value_input_1 = strtmp[0];
		value_input_2 = strtmp[1];
		value_input_3 = strtmp[2];
		value_input_4 = strtmp[3];
		value_box5_text1 = strtmp[4];
		value_box6_text3 = strtmp[5];
		value_box7_text4 = strtmp[6];
		value_box8_text5 = strtmp[7];
		value_box9_text4 = strtmp[8];
		value_box10_text4 = strtmp[9];
		UpdateData(FALSE);
	}
}


