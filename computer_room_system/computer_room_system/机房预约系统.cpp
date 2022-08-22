#include<iostream>
using namespace std;
#include"Identity.h"
#include<fstream>
#include"globalFile.h"
#include"manager.h"


void menu()
{
	cout << "=====================================欢迎来到机房预约系统==========================================" << endl;
	cout << endl << "请选择您的身份：" << endl;
	cout << "\t\t-------------------------------------\n";
	cout << "\t\t|                                    |\n";
	cout << "\t\t|             1.学生代表             |\n";
	cout << "\t\t|                                    |\n";
	cout << "\t\t|             2.老    师             |\n";
	cout << "\t\t|                                    |\n";
	cout << "\t\t|             3.管 理 员             |\n";
	cout << "\t\t|                                    |\n";
	cout << "\t\t|             0.退    出             |\n";
	cout << "\t\t|                                    |\n";
	cout << "\t\t-------------------------------------\n";
	cout << "请输入您的选择:" << endl;
}
void ManagerMenu(Identity* &manager)
{
	while (1)
	{
		manager->operMenu();

		Manager* man = (Manager*)manager;

		int select = 0;
		cin >> select;

		if (select == 1)
		{
			cout << "添加用户" << endl;
			man->addPerson();
		}
		else if (select == 2)
		{
			cout << "查看用户" << endl;
			man->showPerson();
		}
		else if (select == 3)
		{
			cout << "查看机房" << endl;
			man->showComputer();
		}
		else if (select == 4)
		{
			cout << "清空预约" << endl;
			man->cleanFile();
		}
		else
		{
			delete manager;
			cout << "注销成功" << endl;
			system("pause");
			system("cls");
			return;
		}
	}
}
void LoginIn(string fileName, int type)
{
	Identity* person = NULL;

	ifstream ifs;
	ifs.open(fileName, ios::in);

	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;
		ifs.close();
		return;
	}
	int id = 0;
	string name;
	string pwd;
	if (type == 1)
	{
		cout << "请输入学号:" << endl;
		cin >> id;
	}
	else if (type == 2)
	{
		cout << "请输入职工号:" << endl;
		cin >> id;
	}

	cout << "请输入用户名:" << endl;
	cin >> name;

	cout << "请输入密码:" << endl;
	cin >> pwd;

	if (type == 1)
	{
		int fid;
		string fname;
		string fpwd;
		while (ifs >> fid && ifs >> fname && ifs >> fpwd)
		{
			if (id == fid && name == fname && pwd == fpwd)
			{
				cout << "学生认证通过" << endl;
				system("pause");
				system("cls");

				return;
			}
		}
	}
	else if (type == 2)
	{
		int fid;
		string fname;
		string fpwd;
		while (ifs >> fid && ifs >> fname && ifs >> fpwd)
		{
			if (id == fid && name == fname && pwd == fpwd)
			{
				cout << "老师认证通过" << endl;
				system("pause");
				system("cls");

				return;
			}
		}
	}
	else if (type == 3)
	{
		string fname;
		string fpwd;
		while (ifs >> fname && ifs >> fpwd)
		{
			if (name == fname && pwd == fpwd)
			{
				cout << "管理员认证通过" << endl;
				system("pause");
				system("cls");

				person = new Manager(name, pwd);

				ManagerMenu(person);
				return;
			}
		}
	}
}
void test()
{
	int select = 0;
	do 
	{
		menu();
		cin >> select;
		switch (select)
		{
		case 1:
			LoginIn(STUDENT_FILE, 1);
			break;
		case 2:
			LoginIn(TEACHER_FILE, 2);
			break;
		case 3:
			LoginIn(ADMIN_FILE, 3);
			break;
		case 0:
			cout << "即将退出，谢谢使用" << endl;
			break;
		default:
			cout << "输入错误，重新输入" << endl;
			break;
		}
	} while (select);
	system("pause");
	system("cls");
}
int main()
{
	test();

	return 0;
}