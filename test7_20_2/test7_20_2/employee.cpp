#include"employee.h"


Employee::Employee(int id, string name, int did)
{
	this->m_Name = name;
	this->m_Id = id;
	this->m_DeptId = did;
}

void Employee::showInfo()
{
	cout << "Ա����ţ�" << this->m_Id
		<< "\tְ��������" << this->m_Name
		<< "\tְ����λ��" << this->m_DeptId << endl;
}
string Employee::getDeptName()
{
	return string("Ա��");
}