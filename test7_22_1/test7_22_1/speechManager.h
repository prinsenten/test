#pragma once
#include<iostream>
#include"speaker.h"
using namespace std;

#include<vector>
#include<map>
#include<deque>
#include<string>
#include<algorithm>
#include<numeric>
#include<functional>


class SpeechManager
{
public:

	SpeechManager();

	void Menu();

	vector<int>v1;
	vector<int>v2;
	vector<int>Vv;

	multimap<int, Speaker>m_Speaker;

	int m_Index;

	void InitSpeech();

	void createSpeaker();

	void startSpeech();

	void speechDraw();

	void speechContest();


	~SpeechManager();
};