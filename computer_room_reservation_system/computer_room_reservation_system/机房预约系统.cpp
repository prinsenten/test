#include<iostream>
using namespace std;
#include<string>
#include"Identity.h"
#include<fstream>
#include"globalFile.h"
#include"manager.h"
#include"student.h"
#include"teacher.h"




void managerMenu(Identity*& manager)
{
	while (1)
	{
		//调用管理员子菜单
		manager->operMenu();

		//将父类指针转为子类指针 调用子类的其他接口
		Manager* man = (Manager*)manager;

		int select = 0;
	
		cin >> select;

		if (select == 1)
		{
			cout << "添加账号" << endl;
			man->addPerson();
		}
		else if (select == 2)
		{
			cout << "查看账号" << endl;
			man->showPerson();
		}
		else if (select == 3)
		{
			cout << "查看机房" <<endl;
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
void studentMenu(Identity*& student)
{
	while (1)
	{
		student->operMenu();

		Student* stu = (Student*)student;
		int select = 0;

		cin >> select;

		if (select == 1)
		{
			cout << "申请预约" << endl;
			stu->applyOrder();
		}
		else if (select == 2)
		{
			cout << "查看预约" << endl;
			stu->showMyOrder();
		}
		else if (select == 3)
		{
			cout << "查看所有人预约" << endl;
			stu->showAllOrder();
		}
		else if (select == 4)
		{
			cout << "取消预约" << endl;
			stu->cancelOrder();
		}
		else
		{
			delete student;
			cout << "注销成功" << endl;
			system("pause");
			system("cls");
			return;
		}
	}
}
void TeacherMenu(Identity* &teacher)
{
	while (1)
	{
		teacher->operMenu();

		Teacher* tea = (Teacher*)teacher;
		int select = 0;

		cin >> select;

		if (select == 1)
		{
			cout << "查看所有预约" << endl;
			tea->showAllOrder();
		}
		else if (select == 2)
		{
			cout << "审核预约" << endl;
			tea->vailOrder();
		}
		else
		{
			delete teacher;
			cout << "注销成功" << endl;
			system("pause");
			system("cls");
			return;
		}
	}
}
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

void LoginIn(string fileName, int type)
{
	Identity* person = NULL;

	ifstream ifs;
	ifs.open(fileName, ios::in);

	//文件不存在
	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;
		ifs.close();
		return;
	}

	int id = 0;
	string name;
	string pwd;
	//判断身份
	if (type == 1)
	{
		cout << "请输入你的学号" << endl;
		cin >> id;
	}
	else if(type==2)
	{
		cout << "请输入你的职工号" << endl;
		cin >> id;
	}

	cout << "请输入用户名：" << endl;
	cin >> name;

	cout << "请输入密码：" << endl;
	cin >> pwd;

	if (type == 1)
	{
		//学生登陆验证
		int fId;
		string fName;
		string fPwd;

		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
			if (fId == id && fName == name && fPwd == pwd)
			{
				cout << "学生验证通过！" << endl;
				system("pause");
				system("cls");

				person = new Student(id, name, pwd);
				studentMenu(person);

				return;

			}
		}
	}
	else if (type == 2)
	{
		//教师登录验证
		int fId;
		string fName;
		string fPwd;

		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
			if (fId == id && fName == name && fPwd == pwd)
			{
				cout << "老师验证通过！" << endl;
				system("pause");
				system("cls");

				person = new Teacher(id, name, pwd);
				TeacherMenu(person);

				return;
			}
		}
	}
	else if (type == 3)
	{
		//管理员验证登录
		string fName;
		string fPwd;

		while (ifs >> fName && ifs >> fPwd)
		{
			if ( fName == name && fPwd == pwd)
			{
				cout << "管理员验证通过！" << endl;
				system("pause");
				system("cls");

				person = new Manager( name, pwd);


				managerMenu(person);

				return;
			}
		}
	}

	cout << "验证登录失败！" << endl;

	system("pause");
	system("cls");
	return;
}
int main()
{
	int select = 0;
	do
	{
		menu();
		cin >> select;

		switch (select)
		{
		case 1://学生身份
			LoginIn(STUDENT_FILE, 1);
			break;
		case 2://老师身份
			LoginIn(TEACHER_FILE, 2);
			break;
		case 3://管理员身份
			LoginIn(ADMIN_FILE, 3);
			break;
		case 0:
			cout << "按任意键退出系统" << endl;
			break;
		default:
			cout << "输入有误，重新输入" << endl;
			system("pause");
			system("cls");
			break;
		}
	} while (select);
	system("pause");


	return 0;
}

