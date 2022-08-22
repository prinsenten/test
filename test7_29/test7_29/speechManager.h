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

	//构造函数
	SpeechManager();

	void show_Menu();

	//比赛选手容器 12人
	vector<int>v1;
	//晋级选手 6人
	vector<int>v2;
	//胜出3人
	vector<int>Vv;
	//存放编号 以及对应的具体选手 容器
	map<int, Speaker>m_Speaker;
	//记录比赛次数
	int m_Index;

	//初始化属性
	void initSpeech();

	//创建选手
	void createSpeaker();

	//开始比赛
	void startSpeech();

	//抽签
	void speechDraw();

	//比赛
	void speechContest();

	//显示比赛结果
	void showScore();

	//保存记录
	void saveRecord();

	//读取记录
	void loadRecord();

	//文件为空标志
	bool fileIsEmpty;

	//往届记录
	map<int, vector<string>>m_Record;

	//显示往届分数
	void showRecord();

	//清空记录
	void clearRecord();

	//析构函数
	~SpeechManager();

};