#include"workerManager.h"
#include"boss.h"
#include"employee.h"
#include"manager.h"
#include<fstream>
#define FILENAME "empFile.txt"


WorkerManger::WorkerManger()
{
	//文件不存在
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;
		this->m_EmpNum = 0;
		this->m_FileIsEmpty = true;
		this->m_EmpArray = NULL;
		ifs.close();
		return;
	}

	//文件存在，没有记录
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "文件为空" << endl;
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
	cout << "*** 欢迎使用职工管理系统  ***" << endl;
	cout << "*****  0.退出管理系统  ******" << endl;
	cout << "*****  1.添加职工信息  ******" << endl;
	cout << "*****  2.显示职工信息  ******" << endl;
	cout << "*****  3.删除职工信息  ******" << endl;
	cout << "*****  4.修改职工信息  ******" << endl;
	cout << "*****  5.查找职工信息  ******" << endl;
	cout << "*****  6.按照编号排序  ******" << endl;
	cout << "*****  7.清空所有文档  ******" << endl;
	cout << "*****************************" << endl;
}
void WorkerManger::ExitSystem()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
}
void WorkerManger::Add_Emp()
{
	cout << "请输入增加职工数量: " << endl;
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

			cout << "请输入第：" << i + 1 << "个新职工的编号：" << endl;
			cin >> id;

			cout << "请输入第：" << i + 1 << "个新职工姓名：" << endl;
			cin >> name;

			cout << "请选择该职工的岗位：" << endl;
			cout << "1.普通员工" << endl;
			cout << "2.经理" << endl;
			cout << "3.老板" << endl;
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

		cout << "成功添加" << addNum << "新职工" << endl;

		this->save();
	}
	else
	{
		cout << "输入错误重新输入" << endl;
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
void WorkerManger::Show_Emp()//显示员工
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件为空"<<endl;
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
void WorkerManger::Del_Emp()//删除职工
{
	if (this->m_FileIsEmpty)
	{
		cout << "数据为空" << endl;
	}
	else
	{
		cout << "请输入删除职工的编号; " << endl;
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
			cout << "删除成功" << endl;
		}
		else
		{
			cout << "未找到职工" << endl;
		}
	}
	system("pause");
	system("cls");
}
void WorkerManger::Mod_Emp()//修改职工
{
	if (this->m_FileIsEmpty)
	{
		cout << "记录为空" << endl;
	}
	else
	{
		cout << "请输入修改员工的编号：" << endl;
		int id = 0;
		cin >> id;
		
		int ret = IsExist(id);
		if (ret != -1)
		{
			delete this->m_EmpArray[ret];
			int newId = 0;
			string newName = "";
			int dSelect = 0;

			cout << "查到:" << id << "号职工，请输入新职工号:" << endl;
			cin >> newId;

			cout << "请输入新名字:" << endl;
			cin >> newName;

			cout << "请输入岗位:" << endl;
			cout << "1.普通员工" << endl;
			cout << "2.经理" << endl;
			cout << "3.老板" << endl;
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
			cout << "修改成功" << endl;

			//保存到文件中
			this->save();
		}
		else
		{
			cout << "未找到" << endl;
		}
	}
	system("pause");
	system("cls");
}
void  WorkerManger::Find_Emp()//查找姓名
{
	if (this->m_FileIsEmpty)
	{
		cout << "记录为空" << endl;
	}
	else
	{
		cout << "请输入查找方式：" << endl;
		cout << "1.按照姓名查找" << endl;
		cout << "2.按照编号查找" << endl;
		int ret = 0;
		cin >> ret;
		
		string name = "";
		int id = 0;

		if (ret == 1)
		{
			cout << "输入姓名：" << endl;
			cin >> name;
			bool flag = false;
			for (int i = 0; i < m_EmpNum; i++)
			{
				if (this->m_EmpArray[i]->m_Name == name)
				{
					cout << "查找成功，职工编号："
						<< this->m_EmpArray[i]->m_Id
						<< "职工信息如下："
						<< endl;
					flag = true;

					this->m_EmpArray[i]->showInfo();
				}
			}
			if (flag == false)
			{
				cout << "查无此人" << endl;
			}
		}
		
		else if(ret==2)
		{
			cout << "请输入id:" << endl;
			cin >> id;
			int index = IsExist(id);
			if (index != -1)
			{
				cout << "成功查找到" << endl;
				this->m_EmpArray[index]->showInfo();
			}
			else
			{
				cout << "查无此人" << endl;
			}
		}
		else {
		cout << "输入错误" << endl;
			}
	}
	
}
void WorkerManger::Sort_Emp()//排序员工
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空！" << endl;
	}
	else
	{
		cout << "请选择排序方式：" << endl;
		cout << "1.按职工编号升序" << endl;
		cout << "2.按职工编号降序" << endl;

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
		cout << "排序成功！排序后结果为：" << endl;
		this->save();
		this->Show_Emp();
	}

}
void WorkerManger::Clean_File()//清空文件
{
	cout << "确认清空？" << endl;
	cout << "1.确认" << endl;
	cout << "2.取消" << endl;

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
		cout << "清空成功" << endl;
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