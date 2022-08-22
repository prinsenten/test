#pragma once
#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<map>
#include"speaker.h"
#include<algorithm>
#include<deque>
#include<functional>
#include<numeric>
#include<fstream>


class SpeechManager
{
public:

	//���캯��
	SpeechManager();

	void show_Menu();

	//����ѡ������ 12��
	vector<int>v1;
	//����ѡ�� 6��
	vector<int>v2;
	//ʤ��3��
	vector<int>Vv;
	//��ű�� �Լ���Ӧ�ľ���ѡ�� ����
	map<int, Speaker>m_Speaker;
	//��¼��������
	int m_Index;

	//��ʼ������
	void initSpeech();

	//����ѡ��
	void createSpeaker();

	//��ʼ����
	void startSpeech();

	//��ǩ
	void speechDraw();

	//����
	void speechContest();

	//��ʾ�������
	void showScore();

	//�����¼
	void saveRecord();

	//��ȡ��¼
	void loadRecord();

	//�ļ�Ϊ�ձ�־
	bool fileIsEmpty;

	//�����¼
	map<int, vector<string>>m_Record;

	//��ʾ�������
	void showRecord();

	//��ռ�¼
	void clearRecord();

	//��������
	~SpeechManager();

};