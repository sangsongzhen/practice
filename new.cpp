#include<iostream>
using namespace std;

int* func()
{
	int* p = new int(10);	// 在堆区创建整型数据
	return p;
}

double* func01()
{
	double* f = new double(3.1415926);	// float类型用float类型接收开辟的数据
	return f;
}

void test01() 
{
	int* p = func();
	cout << *p << endl;	// 解引用

	/*
	delete p;	// 释放内存
	cout << *p << endl;	// 读取访问权限冲突
	*/
}

void test02()
{
	double* p = func01();
	cout << *p << endl;
}
void test03()
{
	int* arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = 100 + i;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	test03();

	system("pause");
	return 0;
}