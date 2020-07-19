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
	Sleep(500); //delay the function for a bit
	wchar_t szUsername[255]; //create a buffer to store the username
	wchar_t szPassword[255]; //create a buffer to store the password
	GetPrivateProfileString(L"DbInfo", L"Account", L"", szUsername, 255, L".\\Db.ini");
	GetPrivateProfileString(L"DbInfo", L"Pw", L"", szPassword, 255, L".\\Db.ini");
	CString szLink; //initialize the query string variable
	CString szUid = szUsername; //convert the username into a string
	CString szPwd = szPassword; //convert the password into a string
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
