#include<iostream>
using namespace std;

class student
{
public:

	student(string name)
	{
		this->name = name;
	}

	student& setname(student& s)
	{
		this->name += s.name;
		// thisָ�����s2�� ��*thisָ��ľ���p2���������
		return *this;
	}

	string name;

};

void test01()
{
	student s("ɣ����");
	cout << s.name << endl;
}

void test02()
{
	student s1("zhangsan");
	student s2("lisi");

	// ��ʽ���
	s2.setname(s1).setname(s2).setname(s2);
	cout << s2.name << endl;
}

int main()
{
	test02();

	system("pause");
	return 0;
}