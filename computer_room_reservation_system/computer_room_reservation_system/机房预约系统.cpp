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
		//���ù���Ա�Ӳ˵�
		manager->operMenu();

		//������ָ��תΪ����ָ�� ��������������ӿ�
		Manager* man = (Manager*)manager;

		int select = 0;
	
		cin >> select;

		if (select == 1)
		{
			cout << "����˺�" << endl;
			man->addPerson();
		}
		else if (select == 2)
		{
			cout << "�鿴�˺�" << endl;
			man->showPerson();
		}
		else if (select == 3)
		{
			cout << "�鿴����" <<endl;
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
			cout << "����ԤԼ" << endl;
			stu->applyOrder();
		}
		else if (select == 2)
		{
			cout << "�鿴ԤԼ" << endl;
			stu->showMyOrder();
		}
		else if (select == 3)
		{
			cout << "�鿴������ԤԼ" << endl;
			stu->showAllOrder();
		}
		else if (select == 4)
		{
			cout << "ȡ��ԤԼ" << endl;
			stu->cancelOrder();
		}
		else
		{
			delete student;
			cout << "ע���ɹ�" << endl;
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
			cout << "�鿴����ԤԼ" << endl;
			tea->showAllOrder();
		}
		else if (select == 2)
		{
			cout << "���ԤԼ" << endl;
			tea->vailOrder();
		}
		else
		{
			delete teacher;
			cout << "ע���ɹ�" << endl;
			system("pause");
			system("cls");
			return;
		}
	}
}
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

void LoginIn(string fileName, int type)
{
	Identity* person = NULL;

	ifstream ifs;
	ifs.open(fileName, ios::in);

	//�ļ�������
	if (!ifs.is_open())
	{
		cout << "�ļ�������" << endl;
		ifs.close();
		return;
	}

	int id = 0;
	string name;
	string pwd;
	//�ж����
	if (type == 1)
	{
		cout << "���������ѧ��" << endl;
		cin >> id;
	}
	else if(type==2)
	{
		cout << "���������ְ����" << endl;
		cin >> id;
	}

	cout << "�������û�����" << endl;
	cin >> name;

	cout << "���������룺" << endl;
	cin >> pwd;

	if (type == 1)
	{
		//ѧ����½��֤
		int fId;
		string fName;
		string fPwd;

		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
			if (fId == id && fName == name && fPwd == pwd)
			{
				cout << "ѧ����֤ͨ����" << endl;
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
		//��ʦ��¼��֤
		int fId;
		string fName;
		string fPwd;

		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
			if (fId == id && fName == name && fPwd == pwd)
			{
				cout << "��ʦ��֤ͨ����" << endl;
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
		//����Ա��֤��¼
		string fName;
		string fPwd;

		while (ifs >> fName && ifs >> fPwd)
		{
			if ( fName == name && fPwd == pwd)
			{
				cout << "����Ա��֤ͨ����" << endl;
				system("pause");
				system("cls");

				person = new Manager( name, pwd);


				managerMenu(person);

				return;
			}
		}
	}

	cout << "��֤��¼ʧ�ܣ�" << endl;

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
		case 1://ѧ�����
			LoginIn(STUDENT_FILE, 1);
			break;
		case 2://��ʦ���
			LoginIn(TEACHER_FILE, 2);
			break;
		case 3://����Ա���
			LoginIn(ADMIN_FILE, 3);
			break;
		case 0:
			cout << "��������˳�ϵͳ" << endl;
			break;
		default:
			cout << "����������������" << endl;
			system("pause");
			system("cls");
			break;
		}
	} while (select);
	system("pause");


	return 0;
}

