#pragma once
#include<iostream>
using namespace std;
#include"worker.h"

class WorkerManger
{
public:

	WorkerManger();

	void show_Menu();
	
	void ExitSystem();
	
	int m_EmpNum;//��¼����

	Worker** m_EmpArray;//�������
	
	void Add_Emp();
	
	void save();

	bool m_FileIsEmpty;

	int get_EmpNum();

	void init_Emp();

	void Show_Emp();//��ʾԱ��

	void Del_Emp();//ɾ��ְ��
	
	int IsExist(int id);

	void Mod_Emp();//�޸�ְ��

	void  Find_Emp();//��������

	void Sort_Emp();//����Ա��

	void Clean_File();//����ļ�

	~WorkerManger();


	
};