#include"标头.h"
void addPerson(Addressbooks* abs)
{
	//判断通讯录是否满
	if (abs->size == MAX)
	{
		cout << "通讯录已满,无法添加" << endl;
	}
	else
	{
		string name;
		cout << "请输入姓名: " << endl;
		cin >> name;
		abs->personArr[abs->size].Name = name;

		cout << "请输入性别: " << endl;
		cout << "1--男   2--女" << endl;
		int sex = 0;
		while (1)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArr[abs->size].Sex = sex;
				break;
			}
			cout << "输入错误，重新输入" << endl;
		}

		cout << "请输入年龄: " << endl;
		int age = 0;
		while (1)
		{
			cin >> age;
			if (age < 100)
			{
				abs->personArr[abs->size].Age = age;
				break;
			}
			else
			{
				cout << "数值错误，重新输入" << endl;
			}
		}
		
		cout << "请输入号码:" << endl;
		string phone;
		cin >> phone;
		abs->personArr[abs->size].Phone = phone;

		cout << "请输入地址:" << endl;
		string addr ;
		cin >> addr;
		abs->personArr[abs->size].Addr = addr;

		abs->size++;
		cout << "添加成功" << endl;

		system("pause");
		system("cls");
	}
}
void showPerson(Addressbooks *abs)
{
	if (abs->size == 0)
	{
		cout << "当前记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < abs->size; i++)
		{
			cout << "姓名: " << abs->personArr[i].Name
				<< " 年龄: " << abs->personArr[i].Age
				<< " 性别: " << (abs->personArr[i].Sex == 1 ? "男":"女")
				<< " 电话: " << abs->personArr[i].Phone
				<< " 住址: " << abs->personArr[i].Addr << endl;
		}
	}
	system("pause");
	system("cls");
}
int isExit(Addressbooks* abs, string name)
{
	for (int i = 0; i < abs->size; i++)
	{
		if (abs->personArr[i].Name == name)
		{
			return i;
		}
	}
	return -1;
}
void deletPerson(Addressbooks* abs)
{
	string name;
	cout << "请输入要删除的人:" << endl;
	cin >> name;
	int found = isExit(abs, name);
	if ( found== -1)
	{
		cout << "查无此人 " << endl;
	}
	else
	{
		cout << "查到此人,是否删除    1-确认删除 0-取消 " << endl;
		int ret = 1;
		while (ret)
		{
			cin >> ret;
			if (ret == 1)
			{
				for (int i = found; i < abs->size - 1; i++)
				{
					abs->personArr[i] = abs->personArr[i + 1];

				}
				abs->size--;
				cout << "删除成功 " << endl;
				break;
			}
			else if (ret == 0)
				break;
			else
			{
				cout << "输入非法，重新输入 " << endl;
			}
		}
		
	}
	system("pause");
	system("cls");
}
void findPerson(Addressbooks* abs)
{
	cout << "请输入要查找的联系人: " << endl;
	string name;
		cin >> name;
		int i = isExit(abs, name);
		if (i == -1)
		{
			cout << "查无此人，重新输入 " << endl;
		}
		else
		{
			cout << "姓名: " << abs->personArr[i].Name
				<< " 年龄: " << abs->personArr[i].Age
				<< " 性别: " << (abs->personArr[i].Sex == 1 ? "男" : "女")
				<< " 电话: " << abs->personArr[i].Phone
				<< " 住址: " << abs->personArr[i].Addr << endl;

		}
		system("pause");
		system("cls");
}
void modifyPerson(Addressbooks* abs)
{
	cout << "请输入要修改的联系人:" << endl;
	string name;
	cin >> name;
	int i = isExit(abs, name);
	if (i == -1)
	{
		cout << "查无此人，重新输入 " << endl;
	}
	else
	{
		string name;
		cout << "请输入姓名: " << endl;
		cin >> name;
		abs->personArr[i].Name = name;

		cout << "请输入性别: " << endl;
		cout << "1--男   2--女" << endl;
		int sex = 0;
		while (1)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArr[i].Sex = sex;
				break;
			}
			cout << "输入错误，重新输入" << endl;
		}

		cout << "请输入年龄: " << endl;
		int age = 0;
		while (1)
		{
			cin >> age;
			if (age < 100)
			{
				abs->personArr[i].Age = age;
				break;
			}
			else
			{
				cout << "数值错误，重新输入" << endl;
			}
		}

		cout << "请输入号码:" << endl;
		string phone;
		cin >> phone;
		abs->personArr[i].Phone = phone;

		cout << "请输入地址:" << endl;
		string addr;
		cin >> addr;
		abs->personArr[i].Addr = addr;
	}
	system("pause");
	system("cls");
}
void cleanPerson(Addressbooks* abs)
{
	abs->size = 0;
	cout << "通讯录已清空" << endl;
	system("pause");
	system("cls");
}
