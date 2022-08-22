
#include"speechManager.h"


SpeechManager::SpeechManager()
{
	this->InitSpeech();
	this->createSpeaker();
}

void SpeechManager::Menu()
{
	cout << "************************" << endl;
	cout << "*** 欢迎参加演讲比赛 ***" << endl;
	cout << "**** 1.开始演讲比赛 ****" << endl;
	cout << "**** 2.查看往届记录 ****" << endl;
	cout << "**** 3.清空比赛记录 ****" << endl;
	cout << "**** 0.退出比赛程序 ****" << endl;
	cout << "************************" << endl;
}
void SpeechManager::InitSpeech()
{
	this->v1.clear();
	this->v2.clear();
	this->Vv.clear();
	this->m_Speaker.clear();

	this->m_Index = 1;

}
void SpeechManager::createSpeaker()
{
	string nameSeed = "ABCDEFGHJIKL";
	for (int i = 0; i < nameSeed.size(); i++)
	{
		string name = "选手";
		name += nameSeed[i];

		Speaker sp;
		sp.m_Name = name;
		for (int i = 0; i < 2; i++)
		{
			sp.m_Score[i] = 0;
		}
		this->v1.push_back(i + 1001);
		this->m_Speaker.insert(make_pair(i + 1001, sp));

	}

}
void SpeechManager::speechDraw()
{
	cout << "第<<" << this->m_Index << ">>轮比赛选手正在抽签" << endl;
	cout << "----------------------------" << endl;
	cout << "抽签后演讲顺序如下：" << endl;
	if (this->m_Index == 1)
	{
		random_shuffle(v1.begin(), v1.end());
		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}
	else
	{
		random_shuffle(v2.begin(), v2.end());
		for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}
	cout << "----------------------------" << endl;

	system("pause");
}
void SpeechManager::speechContest()
{
	cout << "-----------第" << this->m_Index << "轮比赛正式开始:---------" << endl;
	multimap<double, int, greater<double>>groupScore;

	int num = 0;
	vector<int>v_Src;
	if (this->m_Index == 1)
	{
		v_Src = v1;
	}
	else
	{
		v_Src = v2;
	}
	for (vector<int>::iterator it = v_Src.begin(); it != v_Src.end(); it++)
	{
		num++;
		deque<double>d;
		for (int i = 0; i < 10; i++)
		{
			double ret = (rand() % 401 + 600) / 10.f;
			d.push_back(ret);
		}
		sort(d.begin(), d.end(), greater<double>());

		d.pop_back();
		d.pop_front();

		double sum = accumulate(d.begin(),d.end(),0.0f);
		double avg = sum / (double)d.size();

		this->m_Speaker[*it].m_Score[this->m_Index - 1] = avg;

	}
}
void SpeechManager::startSpeech()
{
	//1.抽签
	speechDraw();
	//2.比赛
	speechContest();
	//3.显示晋级结果
	//showScore();

	//第二轮比赛
//	this->m_Index++;
	//1.抽签
	//speechDraw();
	////2.比赛
	//speechContest();
	//3.显示晋级结果
	//showScore();

	//saveRecord();

	//this->InitSpeech();

	//this->createSpeaker();

	////this->loadRecord();
	//cout << "本届比赛完毕" << endl;
	//system("pause");
	//system("cls");
}
SpeechManager::~SpeechManager()
{

}