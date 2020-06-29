#include "pch.h"
#include "database.h"

CDataBase::CDataBase(void)
{
	m_vecDATABASE.clear();
	m_dwIndex=0;
}

BOOL CDataBase::LinkDataBase()
{
	CoInitialize(NULL);
	try
	{
		HRESULT hr1 = m_pConnect.CreateInstance(L"ADODB.Connection");
		if (FAILED(hr1))
		{
			return FALSE;
		}
	}
	catch (_com_error)
	{
		OutputDebugString(L"");
	}
	Sleep(500); //wait a bit for pet.dll to connect
	wchar_t szUsername[255]; //initialize the username variable and declare a buffer size
	wchar_t szPassword[255]; //initialize the password variable and declare a buffer size
	GetPrivateProfileString(L"DbInfo", L"Account", L"", szUsername, 255, L".\\Db.ini"); //get username key
	GetPrivateProfileString(L"DbInfo", L"Pw", L"", szPassword, 255, L".\\Db.ini"); //get password key
	CString szLink; //initialize the query string variable
	CString szUid = szUsername; //convert the username to a string
	CString szPwd = szPassword; //convert the password to a string
	szLink.Format(L"Provider=SQLOLEDB;Server=127.0.0.1;Database=PS_UserData;"); //define the login string
	m_pConnect->Open(_bstr_t(szLink), _bstr_t(szUid), _bstr_t(szPwd), adModeUnknown); //execute the query
	return TRUE;
}

BOOL CDataBase::ExeSqlByCon(CString szSql)
{
	try{
		m_pConnect->Execute(_bstr_t(szSql),NULL,1);
	}
	catch(_com_error)
	{
		return FALSE;
	}
	return TRUE;
}