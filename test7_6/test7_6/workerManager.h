#pragma once
#include<iostream>
using namespace std;
#include"Worker.h"
#include"boss.h"
#include"Manager.h"
#include"employee.h"
#include<fstream>
#define FILENAME "empFile.txt"




class WorkerManager
{
public:
	WorkerManager();//���캯��

	void Show_Menu();//չʾ�˵�

	void ExitSystem();//�˳�����

	int m_EmpNum;//��¼ְ������

	Worker** m_EmpArray;//ְ������ָ��

	void Add_Emp();//���ְ��

	void save();//�����ļ�

	bool m_FileIsEmpty;//�ж��ļ��Ƿ�Ϊ��

	int get_EmpNum();//ͳ���ļ�������

	void init_Emp();//��ʼ��Ա��

	void Show_Emp();//��ʾԱ��

	void Del_Emp();//ɾ��ְ��

	//�ж�ְ���Ƿ���ڣ� ������ڷ���ְ�����ڵ�����λ�ã������ڷ���-1
	int IsExist(int id);

	void Mod_Emp();//�޸�ְ��

	void  Find_Emp();//��������

	void Sort_Emp();//����Ա��

	void Clean_File();//����ļ�

	~WorkerManager();//��������

};