#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<deque>
#include<algorithm>
//void print(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	vector<int>v1;//����һ������
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);//����
//	}
//	print(v1);
//	//���䷽ʽ����
//	vector<int>v2(v1.begin(), v1.end());
//	print(v2);
//	//n��elem��ʽ����
//	vector<int>v3(10, 100);
//	print(v3);
//}
//
//
//int main()
//{
//	test01();
//	return 0;
//}
//
//

class Person
{
public:
	Person(string name, int score)
	{
		this->m_Name = name;
		this->m_Score = score;
	}
	string m_Name;
	int m_Score;
};


void creatPerson(vector<Person>& v)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "ѡ��";
		name += nameSeed[i];

		int score = 0;

		Person p(name, score);

		v.push_back(p);
	}
}
void setScore(vector<Person>&v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		deque<int>d;//��deque��������ί�ķ�

		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;//60-100
			d.push_back(score);
		}
		sort(d.begin(), d.end());

		//ȥ����߷ֺ���ͷ�
		d.pop_back();
		d.pop_front();

		//ȡƽ����
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;
		}
		int avg = sum / d.size();

		//��ƽ���� ��ֵ��ѡ��
		it->m_Score = avg;
	}

}
void showScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "������" << (*it).m_Name << " ������" << (*it).m_Score << endl;
	}
}
int main()
{
	vector<Person>v;//���ѡ�ֵ�����
	//����ѡ��
	creatPerson(v);
	//for (vector<Person>::iterator it = v.begin(); it!= v.end(); it++)
	//{
	//	cout << "������" << (*it).m_Name << " ������" << (*it).m_Score << endl;
	//}
	//��ѡ�ִ��
	setScore(v);
	//��ʾ����
	showScore(v);
	return 0;
}