//ָ�롢���顢����
//��װһ������������ð������ʵ�ֶ��������������������
#include<iostream>
using namespace std;

void bubbleSort(int *arr,int len);
void printArray(int *arr,int len);

int main()
{
	int arr[10] = { 3,5,6,2,7,4,9,8,0,1 };

	//������ĳ���
	int len = sizeof(arr) / sizeof(arr[0]);
	
	bubbleSort(arr, len);
	printArray(arr,len);
	return 0;
}

void printArray(int *arr,int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void bubbleSort(int *arr,int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = 0;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}