#include"manager.h"


Manager::Manager()
{

}
Manager::Manager(string name, string pwd)
{
	this->m_Name = name;
	this->m_Pwd = pwd;
}
void Manager::operMenu()
{
	cout << "欢迎管理员" << this->m_Name << "登录" << endl;
	cout << "\t\t ------------------------------------\n";
	cout << "\t\t|                                    |\n";
	cout << "\t\t|             1.添加账号             |\n";
	cout << "\t\t|                                    |\n";
	cout << "\t\t|             2.查看账号             |\n";
	cout << "\t\t|                                    |\n";
	cout << "\t\t|             3.查看机房             |\n";
	cout << "\t\t|                                    |\n";
	cout << "\t\t|             4.清空预约             |\n";
	cout << "\t\t|                                    |\n";
	cout << "\t\t|             0.注销登录             |\n";
	cout << "\t\t|                                    |\n";
	cout << "\t\t ------------------------------------\n";
	cout << "请输入您的选择:" << endl;
}
//添加账号
void addPerson()
{
	cout << "请输入添加账号的类型:" << endl;
	cout << "1.添加学生" << endl;
	cout << "2.添加老师" << endl;

	int select = 0;
	cin >> select;

}
//查看账号
void showPerson()
{

}
//查看机房信息
void showComputer()
{

}
//清空预约记录
void cleanFile()
{

}
//初始化容器
void initVector()
{


}