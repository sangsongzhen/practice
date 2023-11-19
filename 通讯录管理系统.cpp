#include<iostream>
using namespace std;

constexpr auto MAX = 1000;

void showMenu();	// 函数声明

//	联系人结构体
struct person
{
	/* 添加的信息 ：姓名 、性别 、年龄 、联系电话 、家庭住址  */
	string m_Name;
	int m_Sex;
	int m_Age;
	string m_Num;
	string m_Addr;
};

//	通讯录结构体
struct contact
{
	struct person personArray[MAX];
	int m_size = 0;	// 通讯录中当前记录联系人个数
};

/*		 函数声明		*/
void addPerson(contact* cont);
void showContact(contact* cont);
int isExist(contact* cont, string name);
void delPerson(contact* cont);
void searchPerson(contact* cont);
void adjustPerson(contact* cont);
void clsContact(contact* cont);

int main()
{
	contact cont;
	cont.m_size = 0;

	int select = 0;
	
	while (true)
	{
		showMenu();	//	函数调用

		cin >> select;	// 用户输入

		// 系统主体框架
		switch (select)
		{
		case 1:		// 添加联系人
			addPerson(&cont);	// 利用地址传递 ，可以修饰实参
			break;

		case 2:		// 显示联系人
			showContact(&cont);
			break;

		case 3:		// 删除联系人
		{
			cout << "which person do you want to delete :";
			string delName;
			cin >> delName;

			if (isExist(&cont, delName) == -1)
			{
				cout << "this one dose not exist ." << endl;
			}
			else
			{
				delPerson(&cont);
			}
		}
			break;

		case 4:		// 查找联系人
			searchPerson(&cont);
			break;

		case 5:		// 修改联系人
			adjustPerson(&cont);
			break;

		case 6:		// 清空联系人
			clsContact(&cont);
			break;

		case 0:		// 退出通讯录
			cout << "welcome back！" << endl;
			system("pause");
			return 0;	// 退出系统
			break;

		default:
			cout << "wrong num , try again：";
			break;
		}
	}
	system("pause");
	return 0;
}

// 菜单显示函数
void showMenu()
{
	cout << "***********************" << endl;
	cout << "**** 1、添加联系人 ****" << endl;
	cout << "**** 2、显示联系人 ****" << endl;
	cout << "**** 3、删除联系人 ****" << endl;
	cout << "**** 4、查找联系人 ****" << endl;
	cout << "**** 5、修改联系人 ****" << endl;
	cout << "**** 6、清空联系人 ****" << endl;
	cout << "**** 0、退出通讯录 ****" << endl;
	cout << "***********************" << endl;
}

// 添加联系人函数
void addPerson(contact *cont)
{
	if (cont->m_size >= 300)
	{
		cout << "通讯录已满。" << endl;
	}
	else
	{
		/*  添加具体联系人 */ 
		string name;
		cout << "input name :";
		cin >> name;
		cont->personArray[cont->m_size].m_Name = name;

		int sex = 0;
		cout << "input sex (0 -- 女 ，1 -- 男): ";
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 0)
			{
				cont->personArray[cont->m_size].m_Sex = sex;
				break;
			}
			cout << "you inputed a wrong num " << endl;
		}

		int age = 0;
		cout << "input age : ";
		cin >> age;
		cont->personArray[cont->m_size].m_Age = age;

		string num;
		cout << "input phoneNum : ";
		cin >> num;
		cont->personArray[cont->m_size].m_Num = num;

		string addr;
		cout << "input addr : ";
		cin >> addr;
		cont->personArray[cont->m_size].m_Addr = addr;

		cont->m_size++;
		cout << "success" << endl;

		system("cls");
	}
}

// 显示联系人函数
void showContact(contact* cont)
{
	if (cont->m_size == 0)
	{
		cout << "nobody" << endl;
	}
	else
	{
		for (int i = 0; i < cont->m_size; i++)
		{
			cout << "name :" << cont->personArray[i].m_Name << "\t" << "\t";
			cout << "sex :" << (cont->personArray[i].m_Sex == 1 ? "male" : "female") << "\t" << "\t";
			/*switch (cont->personArray[i].m_Sex)
			{
			case 0:
				cout << "sex :" << "female" << "\t" << "\t";
			case 1:
				cout << "sex :" << "male" << "\t" << "\t";
			}*/
			cout << "age :" << cont->personArray[i].m_Age << "\t" << "\t";
			cout << "phoneNum :" << cont->personArray[i].m_Num << "\t" << "\t";
			cout << "addr :" << cont->personArray[i].m_Addr << "\n";
		}
	}
	system("pause");
	system("cls");
}

// 判断联系人是否存在
int isExist(contact* cont,string name)
{
	for (int i = 0; i < cont->m_size; i++)
	{
		if (cont->personArray[i].m_Name == name)
		{
			return i;
		}
	}
	return -1;	// 没找到
}

// 删除联系人函数
void delPerson(contact* cont)
{
	cout << "input the person you want to delete ：";

	string name;
	cin >> name;

	int ret = isExist(cont, name);

	if (ret != -1)
	{
		for (int i = ret; i < cont->m_size; i++)
		{
			cont->personArray[i] = cont->personArray[i + 1];
		}
		cont->m_size--;	// 总人数-1
		cout << "**** done ****" << endl;
	}
	else if(ret == -1)
	{
		cout << "**** the person dose not exist contact ****" << endl;
	}
	system("pause");
	system("cls");
}

// 查找联系人函数
void searchPerson(contact* cont)
{
	cout << "input person you want to search : ";
	string name;
	cin >> name;

	int ret = isExist(cont, name);

	if (ret != -1)
	{
		cout << "name :" << cont->personArray[ret].m_Name << "\t" << "\t";
		cout << "sex :" << (cont->personArray[ret].m_Sex == 1 ? "male" : "female") << "\t" << "\t";
		cout << "age :" << cont->personArray[ret].m_Age << "\t" << "\t";
		cout << "phoneNum :" << cont->personArray[ret].m_Num << "\t" << "\t";
		cout << "addr :" << cont->personArray[ret].m_Addr << "\n";
	}
	else
	{
		cout << "**** the person dose not exist ****" << endl;
	}

	system("pause");
	system("cls");
}

// 修改联系人函数
void adjustPerson(contact* cont)
{
	cout << "input the person you want to adjust :";
	string name;
	cin >> name;

	int ret = isExist(cont, name);

	if (ret != -1)
	{
		cout << "name :" << cont->personArray[ret].m_Name << "\t" << "\t";
		cout << "sex :" << (cont->personArray[ret].m_Sex == 1 ? "male" : "female") << "\t" << "\t";
		cout << "age :" << cont->personArray[ret].m_Age << "\t" << "\t";
		cout << "phoneNum :" << cont->personArray[ret].m_Num << "\t" << "\t";
		cout << "addr :" << cont->personArray[ret].m_Addr << "\n";
		cout << endl;
		cout << "which part do you want to adjust ? (1、name 2、sex 3、age 4、phoneNum 5、addr)" << endl;

		int ret1;
		cin >> ret1;

		switch (ret1)
		{
		case 1:
		{
			cout << "**** new name :";
			string adName;
			cin >> adName;
			cont->personArray[ret].m_Name = adName;
		}
			break;
		case 2:
		{
			while (1)
			{
				cout << "**** new sex :";
				int sex;
				cin >> sex;
				if (sex == 0 || sex == 1)
				{
					cont->personArray[ret].m_Sex = sex;
					break;
				}
				else
				{
					cout << "**** wrong num and try again ****" << endl;
				}
			}
		}
			break;
		case 3:
		{
			cout << "**** new age :";
			int age;
			cin >> age;
			cont->personArray[ret].m_Age = age;
		}
			break;
		case 4:
		{
			cout << "**** new phoneNum :";
			string phoneNum;
			cin >> phoneNum;
			cont->personArray[ret].m_Num = phoneNum;
		}
			break;
		case 5:
		{
			cout << "**** new addr :";
			string addr;
			cin >> addr;
			cont->personArray[ret].m_Addr = addr;
		}
			break;
		default:
			cout << "**** wrong number ****" << endl;
			break;
		}
		cout << "**** finished ****" << endl;
	}
	else
	{
		cout << "**** not founded ****" << endl;
	}
	system("pause");
	system("cls");
}

// 清空通讯录函数
void clsContact(contact* cont)
{
	cont->m_size = 0;	// 逻辑清空
	cout << "**** done ****" << endl;

	system("pause");
	system("cls");
}