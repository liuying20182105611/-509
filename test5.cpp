// test5.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class CTestCopy
{
	int x;
	int y;
public:
	CTestCopy();
	CTestCopy(int a, int b);
	CTestCopy(CTestCopy &om);
	void setXY(int a, int b);
	void display();
};
CTestCopy::CTestCopy()
{

}
CTestCopy::CTestCopy(int a, int b)
{
	x = a;
	y = b;
}
CTestCopy::CTestCopy(CTestCopy &om)
{
	x = om.x * 3;
	y = om.y * 3;
	cout << "********************" << endl;
}
void CTestCopy::setXY(int a, int b)
{
	x = a;
	y = b;
}
void CTestCopy::display()
{
	cout << "x=" << x << "y=" << y << endl;
}
void myTest()
{
    CTestCopy ocpy(200,50);
	ocpy.display();
}
int main()
{
	CTestCopy ocpy(200,50);
	ocpy.display();
	CTestCopy omyobj(ocpy);
	ocpy.display();
    return 0;
}

