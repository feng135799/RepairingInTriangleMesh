
#pragma once

/////////////////////////////////////////////////////////////////////////////
// CViewTree ����

class CViewTree : public CTreeCtrl
{
    // ����
public:
    CViewTree();

    // ��д
protected:
    virtual BOOL OnNotify(WPARAM wParam, LPARAM lParam, LRESULT* pResult);

    // ʵ��
public:
    virtual ~CViewTree();

    //item:���������ĸ��ڵ㣬strtext:�����ҽڵ�����
    HTREEITEM findItem(HTREEITEM item, CString strtext);

protected:
    DECLARE_MESSAGE_MAP()
public:
    afx_msg void OnNMDblclk(NMHDR *pNMHDR, LRESULT *pResult);
};