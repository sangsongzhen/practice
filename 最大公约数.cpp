//输入两个整数，求最大公约数
#include<iostream>

using namespace std;

int main()
{
	int num1 = 0, num2 = 0;

	int a = 0;  //两数交换

	int b = 0;

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
		if (num1 < num2)
		{
			a = num1;
			num1 = num2;
			num2 = a;
		}


		while (1)
		{
			b = num1 % num2;
			if (b == 0)
			{
				break;
			}
			num1 = num2;
			num2 = b;
		}
		cout << "最大公约数是：" << num2 << endl;
	}

	return 0;
}