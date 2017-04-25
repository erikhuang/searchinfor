
// testres.cpp : ����Ӧ�ó��������Ϊ��
//

#include "stdafx.h"
#include "testres.h"
#include "testresDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CtestresApp

BEGIN_MESSAGE_MAP(CtestresApp, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// CtestresApp ����

CtestresApp::CtestresApp()
{
	// TODO: �ڴ˴���ӹ�����룬
	// ��������Ҫ�ĳ�ʼ�������� InitInstance ��
}


// Ψһ��һ�� CtestresApp ����

CtestresApp theApp;


// CtestresApp ��ʼ��

BOOL CtestresApp::InitInstance()
{
	CWinApp::InitInstance();

	m_hResourceDll = AfxLoadLibrary(_T("e:\\myResource.dll"));  
	if (m_hResourceDll)  
	{  
		//acutPrintf(_T("AfxLoadLibrary succ"));
		AfxSetResourceHandle(m_hResourceDll);  
	}
	else
	{
		//acutPrintf(_T("AfxLoadLibrary fail"));
	}

	// ���� shell ���������Է��Ի������
	// �κ� shell ����ͼ�ؼ��� shell �б���ͼ�ؼ���
	CShellManager *pShellManager = new CShellManager;

	// ��׼��ʼ��
	// ���δʹ����Щ���ܲ�ϣ����С
	// ���տ�ִ���ļ��Ĵ�С����Ӧ�Ƴ�����
	// ����Ҫ���ض���ʼ������
	// �������ڴ洢���õ�ע�����
	// TODO: Ӧ�ʵ��޸ĸ��ַ�����
	// �����޸�Ϊ��˾����֯��
	SetRegistryKey(_T("Ӧ�ó��������ɵı���Ӧ�ó���"));

	CtestresDlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO: �ڴ˷��ô����ʱ��
		//  ��ȷ�������رնԻ���Ĵ���
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO: �ڴ˷��ô����ʱ��
		//  ��ȡ�������رնԻ���Ĵ���
	}

	// ɾ�����洴���� shell ��������
	if (pShellManager != NULL)
	{
		delete pShellManager;
	}

	// ���ڶԻ����ѹرգ����Խ����� FALSE �Ա��˳�Ӧ�ó���
	//  ����������Ӧ�ó������Ϣ�á�
	return FALSE;
}

