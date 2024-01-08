#include<iostream>
using namespace std;

void swap01(int a, int b);
void swap02(int* a, int* b);
void swap03(int& a, int& b);

int main()
{
	int a = 10;
	int b = 20;

	swap01(a, b);
	swap02(&a, &b);
	swap03(a, b);

	cout << "a = " << a << "  " << "(main)" << endl;
	cout << "b = " << b << "  " << "(main)" << endl;

	system("pause");
	return 0;
}

/* 值传递 */
void swap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "a = " << a << "  " << "(swap01)" << endl;
	cout << "b = " << b << "  " << "(swap01)" << endl;
}

/* 地址(指针)传递 */
void swap02(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "a = " << *a << "  " << "(swap02)" << endl;
	cout << "b = " << *b << "  " << "(swap02)" << endl;
}

/* 引用传递 */
void swap03(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "a = " << a << "  " << "(swap03)" << endl;
	cout << "b = " << b << "  " << "(swap03)" << endl;
}