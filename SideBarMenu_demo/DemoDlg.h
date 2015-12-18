
#include "afxwin.h"
#include "SideBarMenu.h"
#include "windowsx.h"

class CDemoDlg : public CDialog
{

public:

	CDemoDlg();

protected:
    BOOL OnInitDialog();
	void OnRButtonDown( UINT nFlags, CPoint point );
	void MenuHandler(UINT id);
	virtual ULONG GetGestureStatus(CPoint ptTouch);
	DECLARE_MESSAGE_MAP()

private:

	CSideBarMenu mnuSideBar;
	HICON m_hIcon;

	CSideBarMenu mnuSideBarSubmenu;

};
