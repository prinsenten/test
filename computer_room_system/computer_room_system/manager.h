#pragma once
#include"Identity.h"
#include<vector>

class Manager :public Identity
{
public:
	Manager();

	Manager(string name, string pwd);

	virtual void operMenu();

	//����˺�
	void addPerson();

	//�鿴�˺�
	void showPerson();

	//�鿴������Ϣ
	void showComputer();

	//���ԤԼ��¼
	void cleanFile();

	//��ʼ������
	void initVector();

	////ѧ������
	//vector<Student>vStu;

	////��ʦ����
	//vector<Teacher>vTea;

	////����Ƿ����ظ�����(trueΪ���ظ�)
	//bool checkRepeat(int id, int type);

	////��������
	//vector<ComputerRoom> vCom;

};