#include<iostream>
using namespace std;

class cube
{
// 属性设为私有
private:
	int m_L;
	int m_W;
	int m_H;

// 行为设为公有提供接口
public:
	void getNum(int l, int w, int h)
	{
		m_L = l;
		m_W = w;
		m_H = h;
	}

	int m_Area()
	{
		int a1 = 2 * m_L * m_W;
		int a2 = 2 * m_L * m_H;
		int a3 = 2 * m_H * m_W;

		return a1 + a2 + a3;
	}

	int m_Volume()
	{
		return m_L * m_W * m_H;
	}

	void showArea()
	{
		cout << "The cube's area is :" << m_Area() << endl;
	}

	void showVolume()
	{
		cout << "The cube's volume is :" << m_Volume() << endl;
	}

	// 利用成员函数判断立方体是否相等
	bool isSameByClass(cube& c1, cube& c2 )
	{
		if (c1.m_Area() == c2.m_Area() && c1.m_Volume() == c2.m_Volume())
		{
			return true;
		}
		return false;
	}
};

// 利用全局函数判断连个立方体是否相等
bool isSame(cube &c1, cube c2)
{
	if (c1.m_Area() == c2.m_Area() && c1.m_Volume() == c2.m_Volume())
	{
		return true;
	}
	return false;
}

int main()
{
	cube c1, c2;
	// 赋值cube 1
	int l1, w1, h1;
	cout << "input the length, width, height of the cube 1 one by one: ";
	cin >> l1 >> w1 >> h1;
	c1.getNum(l1, w1, h1);
	c1.showArea();
	c1.showVolume();

	// 赋值cube 2
	int l2, w2, h2;
	cout << "input the length, width, height of the cube 2 one by one: ";
	cin >> l2 >> w2 >> h2;
	c2.getNum(l2, w2, h2);
	c2.showArea();
	c2.showVolume();

	bool result = isSame(c1, c2);
	if (result == true)
	{
		cout << "same !" << endl;
	}
	else
	{
		cout << "not same !" << endl;
	}

	bool result2 = c1.isSameByClass(c1, c2);
	if (result2 == true)
	{
		cout << "same !" << endl;
	}
	else
	{
		cout << "not same !" << endl;
	}

	system("pause");
	return 0;
}