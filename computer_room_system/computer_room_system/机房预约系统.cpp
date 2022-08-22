#include<iostream>
using namespace std;
#include"Identity.h"
#include<fstream>
#include"globalFile.h"
#include"manager.h"


void menu()
{
	cout << "=====================================��ӭ��������ԤԼϵͳ==========================================" << endl;
	cout << endl << "��ѡ��������ݣ�" << endl;
	cout << "\t\t-------------------------------------\n";
	cout << "\t\t|                                    |\n";
	cout << "\t\t|             1.ѧ������             |\n";
	cout << "\t\t|                                    |\n";
	cout << "\t\t|             2.��    ʦ             |\n";
	cout << "\t\t|                                    |\n";
	cout << "\t\t|             3.�� �� Ա             |\n";
	cout << "\t\t|                                    |\n";
	cout << "\t\t|             0.��    ��             |\n";
	cout << "\t\t|                                    |\n";
	cout << "\t\t-------------------------------------\n";
	cout << "����������ѡ��:" << endl;
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
			cout << "����û�" << endl;
			man->addPerson();
		}
		else if (select == 2)
		{
			cout << "�鿴�û�" << endl;
			man->showPerson();
		}
		else if (select == 3)
		{
			cout << "�鿴����" << endl;
			man->showComputer();
		}
		else if (select == 4)
		{
			cout << "���ԤԼ" << endl;
			man->cleanFile();
		}
		else
		{
			delete manager;
			cout << "ע���ɹ�" << endl;
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
		cout << "�ļ�������" << endl;
		ifs.close();
		return;
	}
	int id = 0;
	string name;
	string pwd;
	if (type == 1)
	{
		cout << "������ѧ��:" << endl;
		cin >> id;
	}
	else if (type == 2)
	{
		cout << "������ְ����:" << endl;
		cin >> id;
	}

	cout << "�������û���:" << endl;
	cin >> name;

	cout << "����������:" << endl;
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
				cout << "ѧ����֤ͨ��" << endl;
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
				cout << "��ʦ��֤ͨ��" << endl;
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
				cout << "����Ա��֤ͨ��" << endl;
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
			cout << "�����˳���ллʹ��" << endl;
			break;
		default:
			cout << "���������������" << endl;
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