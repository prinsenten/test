#include"speechManager.h"

//���캯��
SpeechManager::SpeechManager()
{
	//��ʼ������������
	this->initSpeech();
	//����ѡ��
	this->createSpeaker();
	//��ȡ�����¼
	this->loadRecord();

	this->m_Record.clear();
}
void SpeechManager::initSpeech()
{
	//�����ÿ�
	this->v1.clear();
	this->v2.clear();
	this->Vv.clear();
	this->m_Speaker.clear();

	//��ʼ�������ִ�
	this->m_Index = 1;
}
void SpeechManager::show_Menu()
{
	cout << "********************************" << endl;
	cout << "*****   ��ӭ�μ��ݽ�����   *****" << endl;
	cout << "*****   1.��ʼ�ݽ�����     *****" << endl;
	cout << "*****   2.�鿴�����¼     *****" << endl;
	cout << "*****   3.��ձ�����¼     *****" << endl;
	cout << "*****   0.�˳���������     *****" << endl;
	cout << "********************************" << endl;
}
void SpeechManager::createSpeaker()
{
	string nameSeed = "ABCDEFGHIJKL";
	for (int i = 0; i < nameSeed.size(); i++)
	{
		string name = "ѡ��";
		name += nameSeed[i];

		Speaker sp;
		sp.m_Name = name;
		for (int j = 0; j < 2; j++)
		{
			sp.m_Score[j] = 0;
		}
		//����ѡ�ֱ�ŷ���vector��
		this->v1.push_back(i+10001);
		//��ѡ�ֱ���Լ���Ӧ��ѡ�ַŵ�map��
		this->m_Speaker.insert(make_pair(i + 10001, sp));
	}
}
void SpeechManager::speechDraw()
{
	cout << "��<<" << this->m_Index << ">>�ֱ���ѡ�����ڳ�ǩ" << endl;
	cout << "----------------------------------------------" << endl;
	cout << "��ǩ���ݽ�˳�����£�" << endl;
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
	cout << "--------------------------------------------------" << endl;
	system("pause");
	cout << endl;
}
void SpeechManager::speechContest()
{
	cout << "-------------��<<" << this->m_Index << ">>�ֱ�����ʽ��ʼ��-------------" << endl;

	multimap<double, int, greater<double>>groupScore;//��ʱ����������key������valueѡ�ֱ��
	int num = 0;//��¼��Ա����6��Ϊһ��

	vector<int>v_Scr;//��������Ա����
	if (this->m_Index == 1)
	{
		v_Scr = v1;
	}
	else
	{
		v_Scr = v2;
	}
	//��������ѡ��
	for (vector<int>::iterator it = v_Scr.begin(); it != v_Scr.end(); it++)
	{
		num++;

		deque<double>d;
		for (int i = 0; i < 10; i++)
		{
			double score = (rand() % 401 + 600) / 10.f;
			//cout << score << " ";
			d.push_back(score);
		}

		sort(d.begin(), d.end(), greater<double>());//����
		d.pop_back();
		d.pop_front();

		double sum = accumulate(d.begin(), d.end(), 0.0f);//��ȡ�ܺ�
		double avg = sum / d.size();//��ȡƽ����

		//ÿ���˵�ƽ����

		this->m_Speaker[*it].m_Score[this->m_Index - 1] = avg;

		//6��һ�飬����ʱ��������
		groupScore.insert(make_pair(avg, *it));
		if (num % 6 == 0)
		{
			cout << "��" << num / 6 << "С��������Σ�" << endl;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end(); it++)
			{
				cout << "��ţ�" << it->second << " ������" << this->m_Speaker[it->second].m_Name
					<< " �ɼ���" << this->m_Speaker[it->second].m_Score[this->m_Index - 1] << endl;
			}
			int count = 0;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end() && count < 3; it++, count++)
			{
				if (this->m_Index == 1)
				{
					v2.push_back((*it).second);
				}
				else
				{
					Vv.push_back((*it).second);
				}
			}
			groupScore.clear();
			cout << endl;
		}
	}
	cout << "------------------------��" << this->m_Index << "�ֱ������-------------------" << endl;
	system("pause");
}
void SpeechManager::showScore()
{
	cout << "--------------��" << this->m_Index << "�ֽ���ѡ����Ϣ���£�----------------" << endl;
	vector<int>v;
	if (this->m_Index == 1)
	{
		v = v2;
	}
	else
	{
		v = Vv;
	}
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "��ţ�" << *it << " ������" << m_Speaker[*it].m_Name
			<< " �ɼ���" << this->m_Speaker[*it].m_Score[this->m_Index - 1] << endl;
	}
	cout << endl;

	system("pause");
	system("cls");
	this->show_Menu();
}
void SpeechManager::saveRecord()
{
	ofstream ofs;
	ofs.open("speech.csv", ios::out | ios::app);//������ķ�ʽ���ļ�
	
	//��ÿ���˵�����д�뵽�ļ���
	for (vector<int>::iterator it = Vv.begin(); it != Vv.end(); it++)
	{
		ofs << *it << ","
			<< m_Speaker[*it].m_Score[1] << ",";
	}
	ofs << endl;

	//�ر��ļ�
	ofs.close();

	cout << "��¼����ɹ�" << endl;
	
	this->fileIsEmpty = false;
}
void SpeechManager::startSpeech()
{
	//��һ�ֱ���
	//1.��ǩ
	this->speechDraw();
	//2.����
	this->speechContest();
	//3.��ʾ�������
	this->showScore();
	//�ڶ��ֱ���
	this->m_Index++;
	//1.��ǩ
	this->speechDraw();
	//2.����
	this->speechContest();
	//3.��ʾ�������
	this->showScore();
	//�������
	saveRecord();
	//���ñ���
	//��ʼ������
	this->initSpeech();
	//����ѡ��
	this->createSpeaker();
	//��ȡ�����¼
	this->loadRecord();
	cout << "���������ϣ�" << endl;
	system("pause");
	system("cls");
}
void SpeechManager::loadRecord()
{
	ifstream ifs("speech.csv", ios::in);//���������� ��ȡ����

	if (!ifs.is_open())
	{
		this->fileIsEmpty = true;
		cout << "�ļ�������" << endl;
		ifs.close();
		return;
	}
	char ch;
	ifs >> ch;
	if(ifs.eof())
	{
		cout << "�ļ�Ϊ��" << endl;
		this->fileIsEmpty = true;
		ifs.close();
		return;
	}

	//�ļ���Ϊ��
	this->fileIsEmpty = false;
	ifs.putback(ch);//�Ѷ��ߵ�һ���ַ��û���
	
	string data;
	int index = 0;
	while (ifs >> data)
	{
		vector<string>v;

		int pos = -1;
		int start = 0;
		while (1)
		{
			pos = data.find(",", start);//��0��ʼ����","
			if (pos == -1)
			{
				break;//�Ҳ���break ����
			}
			string tmp = data.substr(start, pos - start);//�ҵ��ˣ����зָ�

			v.push_back(tmp);
			start = pos + 1;
		}
		this->m_Record.insert(make_pair(index, v));
		index++;
	}
	ifs.close();
	//����
	//for (map<int, vector<string>>::iterator it = m_Record.begin(); it != m_Record.end(); it++)
	//{
	//	cout << it->first << " �ھ���ţ�" << it->second[0] << " ������" << it->second[1]<<endl;
	//}

}
void SpeechManager::showRecord()
{
	if (this->fileIsEmpty)
	{
		cout << "�ļ�Ϊ�ջ򲻴���" << endl;
	}
	for (int i = 0;i < this->m_Record.size(); i++)
	{
		cout << "��" << i + 1 << "��" <<
			"�ھ���ţ�" << this->m_Record[i][0] << "�÷֣�" << this->m_Record[i][1] << " "
			"�Ǿ���ţ�" << this->m_Record[i][2] << "�÷֣�" << this->m_Record[i][3] << " "
			"������ţ�" << this->m_Record[i][4] << "�÷֣�" << this->m_Record[i][5] << endl;
	}
	system("pause");
	system("cls");
}
void SpeechManager::clearRecord()
{
	cout << "ȷ����գ�" << endl;
	cout << "1.ȷ��" << endl;
	cout << "2.����" << endl;

	int select = 0;
	cin >> select;

	if (select == 1)
	{
		//��ģʽ ios::trunc ������� ɾ���ļ������´���
		ofstream ofs("speech.csv",ios::trunc);
		ofs.close();

		//��ʼ������
		this->initSpeech();

		//����ѡ��
		this->createSpeaker();

		//��ȡ�����¼
		this->loadRecord();

		cout << "��ճɹ�" << endl;
	}
	system("pause");
	system("cls");
}
//��������
SpeechManager::~SpeechManager()
{


}