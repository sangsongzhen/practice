#include<iostream>
using namespace std;

int mainx()
{
	int a = 0;
	int* p = &a;

	cout << p << '\n';	//输出地址
	cout << *p << '\n'; //输出该地址存储的数值

	return 0;
}