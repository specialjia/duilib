
#include "UIlib.h"
using namespace DuiLib;
class CMainDlg : public WindowImplBase
{
public:
    virtual LPCTSTR    GetWindowClassName() const { return _T("DUIMainFrame"); }
    virtual CDuiString GetSkinFile() { return _T("MainDlg.xml"); }
    virtual CDuiString GetSkinFolder() { return _T(""); }
};




