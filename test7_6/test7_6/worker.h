#pragma once
#include<iostream>
using namespace std;

#include<string>

class Worker
{
public:
	//显示个人信息
	virtual void showInfo() = 0;

	//获取岗位名称
	virtual string getDeptName() = 0;

	int m_Id;//员工编号
	string m_Name;//员工姓名
	int m_DeptId;//部门信息
};