#include<iostream>
using namespace std;

float sum(int n);  //º¯ÊıÉùÃ÷

int main()
{
	int n = 10;
	cout << sum(n);
	return 0;
}

float add(int n)
{
	int a = 0;
	if (n == 1) 
	{
		return 1;
	}
	else
	{
		a = n + add(n - 1);
	}
	return a;
}