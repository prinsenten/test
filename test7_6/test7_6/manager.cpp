#pragma once
#include"Manager.h"

//���캯��
Manager::Manager(int id, string name, int did)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = did;
}
//��ʾ������Ϣ
void Manager::showInfo()
{
	cout << "ְ����ţ�" << this->m_Id
		<< "\tְ��������" << this->m_Name
		<< "\t��λ��" << this->getDeptName()
		<< "\t��λְ��:��Ϸ" << endl;
}
//��ȡ��λ����
string Manager::getDeptName()
{
	return string("����");
}