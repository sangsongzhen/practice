//输入两个整数，求最大公约数
#include<iostream>

using namespace std;

int main()
{
	int num1 = 0, num2 = 0;  //定义两个被求的数

	int a = 0;  //两数交换

	int b = 0;  //用于最大公因数求余运算

	cout << "请输入两个整数：";
	cin >> num1 >> num2;

	if (num1 == num2)  //判断是否相等
	{
		cout << "最大公约数为本身！" << endl;
	}

	if (num1 == 0 || num2 == 0)  //判断是否有零
	{
		cout << "没有最大公约数！" << endl;
	}
	else
	{
		if (num1 < num2)  //把num1作为被除数，num2作为除数
		{
			a = num1;
			num1 = num2;
			num2 = a;
		}


		while (1)
		{
			b = num1 % num2;  //用辗转相除法求最大公约数
			if (b == 0)
			{
				break;  //余数为零时跳出循环,此时的除数就是要求的最大公约数
			}
			num1 = num2;
			num2 = b;
		}
		cout << "最大公约数是：" << num2 << endl;
	}

	return 0;
}
