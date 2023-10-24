//定义求阶乘函数fac
#include<iostream>
using namespace std;

extern double fac(int n)
{
	int num = 0;
	if (n == 1)
	{
		return 1;
	}
	else
	{
		num = num + fac(n - 1);
	}
	return num;
}