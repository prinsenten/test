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

	//չʾ����ԤԼ
	void showAllOrder();

	//���ԤԼ
	void vailOrder();

	int m_Empid;//ְ�����
};