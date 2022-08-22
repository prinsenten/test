#pragma once
#include<iostream>
using namespace std;
#include"worker.h"

class WorkerManger
{
public:

	WorkerManger();

	void show_Menu();
	
	void ExitSystem();
	
	int m_EmpNum;//记录人数

	Worker** m_EmpArray;//存放数组
	
	void Add_Emp();
	
	void save();

	bool m_FileIsEmpty;

	int get_EmpNum();

	void init_Emp();

	void Show_Emp();//显示员工

	void Del_Emp();//删除职工
	
	int IsExist(int id);

	void Mod_Emp();//修改职工

	void  Find_Emp();//查找姓名

	void Sort_Emp();//排序员工

	void Clean_File();//清空文件

	~WorkerManger();


	
};