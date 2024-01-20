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
		// this指向对象s2， 二*this指向的就是p2这个对象本体
		return *this;
	}

	string name;

};

void test01()
{
	student s("桑崧真");
	cout << s.name << endl;
}

void test02()
{
	student s1("zhangsan");
	student s2("lisi");

	// 链式编程
	s2.setname(s1).setname(s2).setname(s2);
	cout << s2.name << endl;
}

int main()
{
	test02();

	system("pause");
	return 0;
}