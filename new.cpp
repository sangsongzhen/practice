#include<iostream>
using namespace std;

int* func()
{
	int* p = new int(10);	// �ڶ���������������
	return p;
}

double* func01()
{
	double* f = new double(3.1415926);	// float������float���ͽ��տ��ٵ�����
	return f;
}

void test01() 
{
	int* p = func();
	cout << *p << endl;	// ������

	/*
	delete p;	// �ͷ��ڴ�
	cout << *p << endl;	// ��ȡ����Ȩ�޳�ͻ
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