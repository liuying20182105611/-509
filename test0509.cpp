// test0509.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
int main()
{
	int a[10], b[10];
	int i;
	for (i = 0; i < 10; i++)
	{
		a[i] = i * 2 - 1;
		b[10 - i - 1] = a[i];
	}
	for (i = 0; i < 10; i++)
	{
		cout << "a[" << i << "]" << a[i] << "";
        cout << "b[" << i << "]" << b[i] << endl;
	}
    return 0;
}

