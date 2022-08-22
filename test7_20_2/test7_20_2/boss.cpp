
#include"boss.h"

Boss::Boss(int id, string name, int did)
{
	this->m_Name = name;
	this->m_Id = id;
	this->m_DeptId = did;

}
void Boss::showInfo()
{
	cout << "员工编号：" << this->m_Id
		<< "\t职工姓名：" << this->m_Name
		<< "\t职工岗位：" << this->m_DeptId << endl;
}
string Boss::getDeptName()
{
	return string("老板");
}