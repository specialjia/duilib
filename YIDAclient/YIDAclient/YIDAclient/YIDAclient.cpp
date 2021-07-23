// YIDAclient.cpp : 定义应用程序的入口点。
//
#include "MainDlg.h"
#include "framework.h"
#include "YIDAclient.h"


int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);
    CPaintManagerUI::SetInstance(hInstance);
    CPaintManagerUI::SetResourcePath("../../DuiLib_Skin");
    CMainDlg duiMain;
    duiMain.Create(NULL, _T("DUIWnd"), UI_WNDSTYLE_FRAME, WS_EX_WINDOWEDGE);
    duiMain.CenterWindow();
    duiMain.ShowModal();
    return 0;
   
}

