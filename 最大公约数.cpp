//�������������������Լ��
#include<iostream>

using namespace std;

int main()
{
	int num1 = 0, num2 = 0;

	int a = 0;  //��������

	int b = 0;

	cout << "����������������";
	cin >> num1 >> num2;

	if (num1 == num2)  //�ж��Ƿ����
	{
		cout << "���Լ��Ϊ����" << endl;
	}

	if (num1 == 0 || num2 == 0)  //�ж��Ƿ�����
	{
		cout << "û�����Լ����" << endl;
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
		cout << "���Լ���ǣ�" << num2 << endl;
	}

	return 0;
}