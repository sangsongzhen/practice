#include<iostream>
using namespace std;

class person
{
public:
	// 无参构造函数（默认）
	person()
	{
		cout << "默认构造函数输出。" << endl;
	}

	// 有参构造函数
	person(int a)
	{
		m_Age = a;
		cout << "有参构造函数输出。" << endl;
		cout << m_Age << endl;
	}

	// 拷贝构造函数
	person(const person& p)
	{
		m_Age = p.m_Age;
	}

	// 析构函数
	~person()
	{
		cout << "析构函数输出." << endl;
	}
private:
	int m_Age = 18;
};

void test01()
{
	// 1. 括号法
	person p;
	person p1(20);
	person p2(p);

	// 2. 显示法
	person p1;
	person p2 = person(10);
	person p3 = person(p1);
	person(10);  // 匿名对象

	// 3. 隐式转换法
	person p4 = 10;		// 相当于 person	 p4 = person(10);
}

int main()
{
	test01();

	system("pause");
	return 0;
}