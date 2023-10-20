//第一个算法：冒泡排序
#include<iostream>
using namespace std;

int main4()
{
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	int temp = 0;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0;j < 9 - 1;j++)
		{
			temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = arr[i];
		}
	}
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}