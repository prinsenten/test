#include<iostream>
using namespace std;
#include<string>
#define Max 1000
struct Person
{
	string m_Name;
	string m_Sex;
	int m_Age;
	string m_Phone;
	string m_Addr;
};

struct Addressbooks
{
	struct Person personArray[Max];
	int m_Size;
};



void showMess(Addressbooks *abs,int pos)
{
	cout << " 姓名：" << abs->personArray[pos].m_Name << endl;
	cout << "性别：" << abs->personArray[pos].m_Sex << endl;
	cout << " 年龄：" << abs->personArray[pos].m_Age << endl;
	cout << " 手机号：" << abs->personArray[pos].m_Phone << endl;
	cout << " 地址：" << abs->personArray[pos].m_Addr << endl;
}
void showMenu()
{
	cout << "**********************" << endl;
	cout << "**** 1.添加联系人 ****" << endl;
	cout << "**** 2.显示联系人 ****" << endl;
	cout << "**** 3.删除联系人 ****" << endl;
	cout << "**** 4.查找联系人 ****" << endl;
	cout << "**** 5.修改联系人 ****" << endl;
	cout << "**** 6.清空联系人 ****" << endl;
	cout << "**** 0.退出通讯录 ****" << endl;
	cout << "**********************" << endl;
}
void addPerson(Addressbooks *abs)
{
	if (abs->m_Size == Max)
	{
		cout << "通讯录已满" << endl;
		return;
	}
	else
	{
		string name;
		cout << "请输入姓名:" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		int sex;
		cout << "请输入性别: 1.男 2.女" << endl;
		cin >> sex;
		if (sex == 1)
		{
			abs->personArray[abs->m_Size].m_Sex = "男";
		}
		else
		{
			abs->personArray[abs->m_Size].m_Sex = "女";
		}
		int age;
		cout << "请输入年龄:" << endl;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;
		string phone;
		cout << "请输入号码:" << endl;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;
		string addr;
		cout << "请输入地址:" << endl;
		cin >> addr;
		abs->personArray[abs->m_Size].m_Addr = addr;

		abs->m_Size++;
		cout << "添加成功" << endl;
		system("pause");
		system("cls");
	}
}
void showPeson(Addressbooks *abs)
{
	if (abs->m_Size == 0)
	{
		cout << "记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			showMess(abs, i);	
			cout << "--------------------------" << endl;
		}
	}
	system("pause");
	system("cls");
}
int isExist(Addressbooks* abs, string name)
{
	
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].m_Name == name)
		{
			return i;
		}
	}
	return -1;
}
void Delete(Addressbooks* abs)
{
	cout << "请输入删除的姓名：" << endl;
	string name;
	cin >> name;
	int pos = isExist(abs,name);
	if (pos != -1)
	{
		cout << "查找到此人" << endl;
		showMess(abs, pos);
	
		cout << "是否删除: 1.确定 2.返回" << endl;
		int ret = 0;
		cin >> ret;
		if (ret == 1)
		{
			for (int i = pos; i < abs->m_Size-1; i++)
			{
				abs->personArray[i] = abs->personArray[i + 1];
			}
			abs->m_Size--;
			cout << "删除成功" << endl;
		}
		else
		{
			return;
		}
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}
void findPerson(Addressbooks* abs)
{
	cout << "请输入需要查找的联系人" << endl;
	string name;
	cin >> name;
	int pos = isExist(abs, name);
	if (pos != -1)
	{
		cout << "查找到此人" << endl;
		showMess(abs, pos);
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}
void modifyPerson(Addressbooks* abs)
{
	cout << "请输入需要修改的联系人姓名：" << endl;
	string name;
	cin >> name;
	int pos = isExist(abs, name);
	if (pos != -1)
	{
		cout << "查找到此人" << endl;
		showMess(abs, pos);

		cout << "请输入需要修改的信息：1.姓名 2.年龄 3.性别 4.手机号 5.地址 0.退出 " << endl;
		while (1)
		{
			int select;
			cin >> select;
			switch (select)
			{
			case 1:
			{
				cout << "请输入需要修改的姓名:" << endl;
				string name;
				cin >> name;
				abs->personArray[pos].m_Name = name;
				cout << "姓名修改成功" << endl;
			}
				break;
			case 2:
			{
				cout << "请输入需要修改的年龄:" << endl;
				int age;
				cin >> age;
				abs->personArray[pos].m_Age = age;
				cout << "年龄修改成功" << endl;
			}
				break;
			case 3:
			{
				cout << "请输入需要修改的性别:" << endl;
				string sex;
				cin >> sex;
				abs->personArray[pos].m_Sex = sex;
				cout << "性别修改成功" << endl;
			}
				break;
			case 4:
			{
				cout << "请输入需要修改的手机号:" << endl;
				string phone;
				cin >> phone;
				abs->personArray[pos].m_Phone = phone;
				cout << "手机号修改成功" << endl;
			}
				break;
			case 5:
			{
				cout << "请输入需要修改的地址:" << endl;
				string addr;
				cin >> addr;
				abs->personArray[pos].m_Addr = addr;
				cout << "地址修改成功" << endl;
			}
				break;
			case 0:
				cout << "退出" << endl;
				return;
				break;
			default:
				cout << "输入有误，重新输入" << endl;
				break;
			}
			cout << "请输入需要修改的信息" << endl;
		}
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}
void cleanPerson(Addressbooks* abs)
{
	abs->m_Size = 0;
	cout << "通讯录已清空" << endl;
	system("pause");
	system("cls");
}
int main()
{
	Addressbooks abs;

	abs.m_Size = 0;
	while (1)
	{
		showMenu();
		int select = 0;
		cin >> select;
		switch (select)
		{
		case 1:
			addPerson(&abs);
			break;
		case 2:
			showPeson(&abs);
			break;
		case 3:
			Delete(&abs);
			break;
		case 4:
			findPerson(&abs);
			break;
		case 5:
			modifyPerson(&abs);
			break;
		case 6:
			cleanPerson(&abs);
			break;
		case 0:
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "输入错误，重新输入" << endl;
			break;
		}
	}
	system("pause");
	system("cls");
	return 0;
}