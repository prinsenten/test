#include"manager.h"

Manager::Manager(int id, string name, int did)
{
	this->m_Name = name;
	this->m_Id = id;
	this->m_DeptId = did;
}
void Manager::showInfo()
{
	cout << "Ա����ţ�" << this->m_Id
		<< "\tְ��������" << this->m_Name
		<< "\tְ����λ��" << this->m_DeptId << endl;
}

string Manager::getDeptName()
{
	return string("����");
}