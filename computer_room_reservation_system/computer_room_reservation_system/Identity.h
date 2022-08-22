#pragma once
#include<iostream>
using namespace std;
#include"globalFile.h"
#include<fstream>

//身份抽象类
class Identity
{
public:

	//操作菜单  纯虚函数
	virtual void operMenu() = 0;

	string m_Name;//用户名
	string m_Pwd;//密码
};