#pragma once
#include"Identity.h"
#include"orderFile.h"
#include"student.h"
class Teacher :public Identity
{
public:
	Teacher();

	Teacher(int emid, string name, string pwd);

	virtual void operMenu();

	//展示所有预约
	void showAllOrder();

	//审核预约
	void vailOrder();

	int m_Empid;//职工编号
};