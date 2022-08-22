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
//	vector<int>v1;//创建一个容器
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);//插入
//	}
//	print(v1);
//	//区间方式构造
//	vector<int>v2(v1.begin(), v1.end());
//	print(v2);
//	//n个elem方式构造
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
		string name = "选手";
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
		deque<int>d;//用deque容器存评委的分

		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;//60-100
			d.push_back(score);
		}
		sort(d.begin(), d.end());

		//去除最高分和最低分
		d.pop_back();
		d.pop_front();

		//取平均分
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;
		}
		int avg = sum / d.size();

		//将平均分 赋值给选手
		it->m_Score = avg;
	}

}
void showScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名：" << (*it).m_Name << " 分数：" << (*it).m_Score << endl;
	}
}
int main()
{
	vector<Person>v;//存放选手的容器
	//创建选手
	creatPerson(v);
	//for (vector<Person>::iterator it = v.begin(); it!= v.end(); it++)
	//{
	//	cout << "姓名：" << (*it).m_Name << " 分数：" << (*it).m_Score << endl;
	//}
	//给选手打分
	setScore(v);
	//显示分数
	showScore(v);
	return 0;
}