#include<iostream>
using namespace std;

class person
{
public:
	// �޲ι��캯����Ĭ�ϣ�
	person()
	{
		cout << "Ĭ�Ϲ��캯�������" << endl;
	}

	// �вι��캯��
	person(int a)
	{
		m_Age = a;
		cout << "�вι��캯�������" << endl;
		cout << m_Age << endl;
	}

	// �������캯��
	person(const person& p)
	{
		m_Age = p.m_Age;
	}

	// ��������
	~person()
	{
		cout << "�����������." << endl;
	}
private:
	int m_Age = 18;
};

void test01()
{
	// 1. ���ŷ�
	person p;
	person p1(20);
	person p2(p);

	// 2. ��ʾ��
	person p1;
	person p2 = person(10);
	person p3 = person(p1);
	person(10);  // ��������

	// 3. ��ʽת����
	person p4 = 10;		// �൱�� person	 p4 = person(10);
}

int main()
{
	test01();

	system("pause");
	return 0;
}