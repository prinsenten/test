#pragma once
#include<iostream>
using namespace std;
#include"Worker.h"
#include"boss.h"
#include"Manager.h"
#include"employee.h"
#include<fstream>
#define FILENAME "empFile.txt"




class WorkerManager
{
public:
	WorkerManager();//构造函数

	void Show_Menu();//展示菜单

	void ExitSystem();//退出程序

	int m_EmpNum;//记录职工人数

	Worker** m_EmpArray;//职工数组指针

	void Add_Emp();//添加职工

	void save();//保存文件

	bool m_FileIsEmpty;//判断文件是否为空

	int get_EmpNum();//统计文件中人数

	void init_Emp();//初始化员工

	void Show_Emp();//显示员工

	void Del_Emp();//删除职工

	//判断职工是否存在， 如果存在返回职工所在的数组位置，不存在返回-1
	int IsExist(int id);

	void Mod_Emp();//修改职工

	void  Find_Emp();//查找姓名

	void Sort_Emp();//排序员工

	void Clean_File();//清空文件

	~WorkerManager();//析构函数

};