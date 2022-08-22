#pragma once
#include<iostream>
using namespace std;
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
	SpeechManager();

	void showMenu();

	vector<int>v1;
	vector<int>v2;
	vector<int>Vv;

	map<int, Speaker>m_Speaker;

	int m_Index;

	void InitSpeech();

	void createSpeaker();
	
	void startSpeech();

	void speechDraw();
	
	void speechContest();

	void showScore();

	void saveRecord();

	void loadRecord();

	bool fileIsEmpty;

	map<int, vector<string>>m_Record;

	void showRecord();

	void clearRecord();

	~SpeechManager();
};