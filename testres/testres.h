
// testres.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "E:\personal\documents\Visual Studio 2010\Projects\dialog\myResource\resource.h"		// ������


// CtestresApp:
// �йش����ʵ�֣������ testres.cpp
//

class CtestresApp : public CWinApp
{
public:
	CtestresApp();
	HINSTANCE m_hResourceDll;

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CtestresApp theApp;