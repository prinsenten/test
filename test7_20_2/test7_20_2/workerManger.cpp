#include"workerManager.h"
#include"boss.h"
#include"employee.h"
#include"manager.h"
#include<fstream>
#define FILENAME "empFile.txt"


WorkerManger::WorkerManger()
{
	//�ļ�������
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	if (!ifs.is_open())
	{
		cout << "�ļ�������" << endl;
		this->m_EmpNum = 0;
		this->m_FileIsEmpty = true;
		this->m_EmpArray = NULL;
		ifs.close();
		return;
	}

	//�ļ����ڣ�û�м�¼
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "�ļ�Ϊ��" << endl;
		this->m_EmpNum = 0;	
		this->m_FileIsEmpty = true;
		this->m_EmpArray = NULL;
		ifs.close();
		return;
	}

	int num = this->get_EmpNum();
	this->m_EmpNum = num;
	this->m_EmpArray = new Worker * [num];
	this->init_Emp();

}
void WorkerManger::show_Menu()
{
	cout << "*****************************" << endl;
	cout << "*** ��ӭʹ��ְ������ϵͳ  ***" << endl;
	cout << "*****  0.�˳�����ϵͳ  ******" << endl;
	cout << "*****  1.���ְ����Ϣ  ******" << endl;
	cout << "*****  2.��ʾְ����Ϣ  ******" << endl;
	cout << "*****  3.ɾ��ְ����Ϣ  ******" << endl;
	cout << "*****  4.�޸�ְ����Ϣ  ******" << endl;
	cout << "*****  5.����ְ����Ϣ  ******" << endl;
	cout << "*****  6.���ձ������  ******" << endl;
	cout << "*****  7.��������ĵ�  ******" << endl;
	cout << "*****************************" << endl;
}
void WorkerManger::ExitSystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}
void WorkerManger::Add_Emp()
{
	cout << "����������ְ������: " << endl;
	int addNum = 0;
	cin >> addNum;

	if (addNum > 0)
	{
		int newSize = this->m_EmpNum + addNum;

		Worker** newSpace = new Worker * [newSize];

		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}
		for (int i = 0; i < addNum; i++)
		{
			int id;
			string name;
			int did;

			cout << "������ڣ�" << i + 1 << "����ְ���ı�ţ�" << endl;
			cin >> id;

			cout << "������ڣ�" << i + 1 << "����ְ��������" << endl;
			cin >> name;

			cout << "��ѡ���ְ���ĸ�λ��" << endl;
			cout << "1.��ͨԱ��" << endl;
			cout << "2.����" << endl;
			cout << "3.�ϰ�" << endl;
			cin >> did;

			Worker* worker = NULL;
			switch (did)
			{
			case 1:
				worker = new Employee(id, name, 1);
				break;
			case 2:
				worker = new Manager(id, name, 2);
				break;
			case 3:
				worker = new Boss(id, name, 3);
				break;
			default:
				break;
			}

			newSpace[this->m_EmpNum + i] = worker;
		}
		delete[] this->m_EmpArray;

		this->m_EmpArray = newSpace;

		this->m_EmpNum = newSize;

		this->m_FileIsEmpty = false;

		cout << "�ɹ����" << addNum << "��ְ��" << endl;

		this->save();
	}
	else
	{
		cout << "���������������" << endl;
	}
	system("pause");
	system("cls");
}
void WorkerManger::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_Id << " "
			<< this->m_EmpArray[i]->m_Name << " "
			<< this->m_EmpArray[i]->m_DeptId << " "
			<< endl;
	}
	ofs.close();

}
int WorkerManger::get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int did;

	int num = 0;

	while (ifs >> name && ifs >> id && ifs >> did)
	{
		num++;
	}
	ifs.close();

	return num;
}
void WorkerManger::init_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int did;
	int index = 0;

	while (ifs >> id && ifs >> name && ifs >> did)
	{
		Worker* worker = NULL;
		if (did == 1)
		{
			worker = new Employee(id, name, did);
		}
		else if (did == 2)
		{
			worker = new Manager(id, name, did);
		}
		else
		{
			worker = new Boss(id,name,did);
		}
		this->m_EmpArray[index] = worker;
		index++;
	}
	ifs.close();

}
void WorkerManger::Show_Emp()//��ʾԱ��
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ�Ϊ��"<<endl;
	}
	else
	{
		for (int i = 0; i < m_EmpNum; i++)
		{
			this->m_EmpArray[i]->showInfo();
		}
	}
	system("pause");
	system("cls");
}
int WorkerManger::IsExist(int id)
{
	int index = -1;
	for (int i = 0; i < m_EmpNum; i++)
	{
		if (this->m_EmpArray[i]->m_Id == id)
		{
			index = id;
			break;
		}
	}
	return index;
}
void WorkerManger::Del_Emp()//ɾ��ְ��
{
	if (this->m_FileIsEmpty)
	{
		cout << "����Ϊ��" << endl;
	}
	else
	{
		cout << "������ɾ��ְ���ı��; " << endl;
		int id=0;
		cin >> id;

		int index = IsExist(id);
		if (index != -1)
		{
			for (int i = index; i < this->m_EmpNum - 1; i++)
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];

			}
			this->m_EmpNum--;
			this->save();
			cout << "ɾ���ɹ�" << endl;
		}
		else
		{
			cout << "δ�ҵ�ְ��" << endl;
		}
	}
	system("pause");
	system("cls");
}
void WorkerManger::Mod_Emp()//�޸�ְ��
{
	if (this->m_FileIsEmpty)
	{
		cout << "��¼Ϊ��" << endl;
	}
	else
	{
		cout << "�������޸�Ա���ı�ţ�" << endl;
		int id = 0;
		cin >> id;
		
		int ret = IsExist(id);
		if (ret != -1)
		{
			delete this->m_EmpArray[ret];
			int newId = 0;
			string newName = "";
			int dSelect = 0;

			cout << "�鵽:" << id << "��ְ������������ְ����:" << endl;
			cin >> newId;

			cout << "������������:" << endl;
			cin >> newName;

			cout << "�������λ:" << endl;
			cout << "1.��ͨԱ��" << endl;
			cout << "2.����" << endl;
			cout << "3.�ϰ�" << endl;
			cin >> dSelect;


			Worker* worker = NULL;
			switch (dSelect)
				switch (dSelect)
				{
				case 1:
					worker = new Employee(id, newName, dSelect);
					break;
				case 2:
					worker = new Manager(id, newName, dSelect);
					break;
				case 3:
					worker = new Boss(id, newName, dSelect);
					break;
				default:
					break;
				}	
			this->m_EmpArray[ret] = worker;
			cout << "�޸ĳɹ�" << endl;

			//���浽�ļ���
			this->save();
		}
		else
		{
			cout << "δ�ҵ�" << endl;
		}
	}
	system("pause");
	system("cls");
}
void  WorkerManger::Find_Emp()//��������
{
	if (this->m_FileIsEmpty)
	{
		cout << "��¼Ϊ��" << endl;
	}
	else
	{
		cout << "��������ҷ�ʽ��" << endl;
		cout << "1.������������" << endl;
		cout << "2.���ձ�Ų���" << endl;
		int ret = 0;
		cin >> ret;
		
		string name = "";
		int id = 0;

		if (ret == 1)
		{
			cout << "����������" << endl;
			cin >> name;
			bool flag = false;
			for (int i = 0; i < m_EmpNum; i++)
			{
				if (this->m_EmpArray[i]->m_Name == name)
				{
					cout << "���ҳɹ���ְ����ţ�"
						<< this->m_EmpArray[i]->m_Id
						<< "ְ����Ϣ���£�"
						<< endl;
					flag = true;

					this->m_EmpArray[i]->showInfo();
				}
			}
			if (flag == false)
			{
				cout << "���޴���" << endl;
			}
		}
		
		else if(ret==2)
		{
			cout << "������id:" << endl;
			cin >> id;
			int index = IsExist(id);
			if (index != -1)
			{
				cout << "�ɹ����ҵ�" << endl;
				this->m_EmpArray[index]->showInfo();
			}
			else
			{
				cout << "���޴���" << endl;
			}
		}
		else {
		cout << "�������" << endl;
			}
	}
	
}
void WorkerManger::Sort_Emp()//����Ա��
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
	}
	else
	{
		cout << "��ѡ������ʽ��" << endl;
		cout << "1.��ְ���������" << endl;
		cout << "2.��ְ����Ž���" << endl;

		int select = 0;
		cin >> select;
		for (int i = 0; i < m_EmpNum; i++)
		{
			int minOrmax = i;
			for (int j = i+1; j < m_EmpNum; j++)
			{
				if (select == 1)
				{
					if (this->m_EmpArray[minOrmax]->m_Id > this->m_EmpArray[j]->m_Id)
					{
						minOrmax = j;
					}
				}
				else 
				{
					if (this->m_EmpArray[minOrmax]->m_Id < this->m_EmpArray[j]->m_Id)
					{
						minOrmax = j;
					}
				}
			}
			if (i != minOrmax)
			{
				Worker* temp = this->m_EmpArray[i];
				this->m_EmpArray[i] = this->m_EmpArray[minOrmax];
				this->m_EmpArray[minOrmax] = temp;
			}
		}
		cout << "����ɹ����������Ϊ��" << endl;
		this->save();
		this->Show_Emp();
	}

}
void WorkerManger::Clean_File()//����ļ�
{
	cout << "ȷ����գ�" << endl;
	cout << "1.ȷ��" << endl;
	cout << "2.ȡ��" << endl;

	int select = 0;
	cin >> select;

	if (select == 1)
	{
		ofstream ofs(FILENAME, ios::trunc);
		ofs.close();

		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < m_EmpNum; i++)
			{
				delete this->m_EmpArray[i];
				this->m_EmpArray[i] = NULL;
			}
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_EmpNum = 0;
			this->m_FileIsEmpty = true;
		}
		cout << "��ճɹ�" << endl;
	}
	system("pause");
	system("cls");

}
WorkerManger::~WorkerManger()
{
	if (this->m_EmpArray != NULL)
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			if (this->m_EmpArray[i] != NULL)
			{
				delete this->m_EmpArray[i];
			}
		}
		delete[]this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}