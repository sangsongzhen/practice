#include<iostream>
using namespace std;

int mainx()
{
	int a = 0;
	int* p = &a;

	cout << p << '\n';	//�����ַ
	cout << *p << '\n'; //����õ�ַ�洢����ֵ

	return 0;
}