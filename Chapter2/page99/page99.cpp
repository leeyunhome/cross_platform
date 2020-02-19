// page99.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include <tchar.h>

//#ifdef UNICODE
//typedef wchar_t TCHAR;
//#else
//typedef char TCHAR;
//#endif
//
//#ifdef UNICODE
//#define TEXT(x) L##x
//#else
//#define TEXT(x)	x
//#endif

#define SHOW_SIZEOF(x)\
	printf("sizeof("#x") is %zu\n", sizeof(x));

using namespace std;

int main()
{
	ua_tcscpy;
	TCHAR szBuffer[] = TEXT("Hello world!!");
	LPTSTR;
	LPCTSTR;
	printf("Pointer size is %zu\n", sizeof(void*));
	SHOW_SIZEOF(char);
	SHOW_SIZEOF(short);
	SHOW_SIZEOF(int);
	SHOW_SIZEOF(long);
	SHOW_SIZEOF(long long);
	SHOW_SIZEOF(float);
	SHOW_SIZEOF(double);
	return 0;
}

