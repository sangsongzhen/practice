#include<iostream>
using namespace std;

extern float pow(float a, int n)
{
	float sum = 1;
	for (int i = 0; i < n; i++)
	{
		sum *= a;
	}
	return sum;
}

extern float pow1(float a, int n)
{
	float sum = 1;
	if (n == 1)
	{
		return a;
	}
	else
	{
		sum *= pow1(a, n - 1);
	}
	return sum;
}