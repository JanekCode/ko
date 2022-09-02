#pragma once

// DlgReplace.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDlgReplace dialog

class CDlgReplace : public CDialog {
    // Construction
  public:
    CDlgReplace(CWnd * pParent = NULL); // standard constructor

    // Dialog Data
    //{{AFX_DATA(CDlgReplace)
    enum {
        IDD = IDD_REPLACE
    };
    CString m_strFind;
    CString m_strReplace;
    //}}AFX_DATA

    // Overrides
    // ClassWizard generated virtual function overrides
    //{{AFX_VIRTUAL(CDlgReplace)
  protected:
    virtual void DoDataExchange(CDataExchange * pDX); // DDX/DDV support
                                                      //}}AFX_VIRTUAL

    // Implementation
  protected:
    // Generated message map functions
    //{{AFX_MSG(CDlgReplace)
    // NOTE: the ClassWizard will add member functions here
    //}}AFX_MSG
    DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.
