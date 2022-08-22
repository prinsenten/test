#pragma once
#include"Identity.h"
#include<vector>

class Manager :public Identity
{
public:
	Manager();

	Manager(string name, string pwd);

	virtual void operMenu();

	//添加账号
	void addPerson();

	//查看账号
	void showPerson();

	//查看机房信息
	void showComputer();

	//清空预约记录
	void cleanFile();

	//初始化容器
	void initVector();

	////学生容器
	//vector<Student>vStu;

	////教师容器
	//vector<Teacher>vTea;

	////检测是否有重复的人(true为有重复)
	//bool checkRepeat(int id, int type);

	////机房容器
	//vector<ComputerRoom> vCom;

};