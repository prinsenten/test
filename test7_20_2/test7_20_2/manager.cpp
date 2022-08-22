#include"manager.h"

Manager::Manager(int id, string name, int did)
{
	this->m_Name = name;
	this->m_Id = id;
	this->m_DeptId = did;
}
void Manager::showInfo()
{
	cout << "员工编号：" << this->m_Id
		<< "\t职工姓名：" << this->m_Name
		<< "\t职工岗位：" << this->m_DeptId << endl;
}

string Manager::getDeptName()
{
	return string("经理");
}