#pragma once
#include<iostream>
using namespace std;
#include"globalFile.h"
#include<fstream>

//��ݳ�����
class Identity
{
public:

	//�����˵�  ���麯��
	virtual void operMenu() = 0;

	string m_Name;//�û���
	string m_Pwd;//����
};