#include<iostream>

using namespace std;

#include<set>


//void print(set<int>&s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	//set<int>s1;
//	//s1.insert(10);
//	//s1.insert(20);
//	//s1.insert(20);
//	//s1.insert(30);
//	//s1.insert(40);
//
//	////����Ԫ��
//	//set<int>::iterator pos = s1.find(30);
//
//	//if (pos != s1.end())
//	//{
//	//	cout << "�ҵ�Ԫ��" << endl;
//	//}
//	//else
//	//{
//	//	cout << "δ�ҵ�" << endl;
//	//}
//
//	//int num = s1.count(20);
//	//cout << "num=" << num << endl;
//
//
//	multiset<int>ms;
//	ms.insert(10);
//	ms.insert(10);
//	ms.insert(10);
//
//	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
////}
//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//void test01()
//{
//	set<int,MyCompare>s1;
//	s1.insert(10);
//	s1.insert(50);
//	s1.insert(40);
//	s1.insert(20);
//	s1.insert(30);
//
//	for (set<int, MyCompare>::iterator it = s1.begin(); it != s1.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
////}
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//class MyCompare
//{
//public:
//	bool operator()(const Person& p1, const Person& p2)const
//	{
//		//��������
//		return p1.m_Age > p2.m_Age;
//	}
//};
//void test01()
//{
//	set<Person, MyCompare>s;
//	Person p1("����", 24);
//	Person p2("����", 28);
//	Person p3("�ŷ�", 25);
//	Person p4("����", 21);
//
//	s.insert(p1);
//	s.insert(p2);
//	s.insert(p3);
//	s.insert(p4);
//
//	for (set<Person, MyCompare>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << "������" << (*it).m_Name << " ����: " << it->m_Age<<endl;
//	}
//}
//#include<map>
//void test()
//{
//	map<int, int>m;
//	
//	m.insert(pair<int, int>(1, 10));//��������
//
//
//}
//int main()
//{
//	test();
//	return 0;
//}
#include<vector>
#include<map>
#include<ctime>
class Worker
{
public:
	
	string m_Name;
	int m_Salary;
};
void print(multimap<int,Worker>&m)
{
	cout << "�߻����ţ�" << endl;
	multimap<int, Worker>::iterator pos = m.find(0);
	int count = m.count(0);
	int index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "������" << pos->second.m_Name << " ���䣺 " << pos->second.m_Salary << endl;
	}
	cout << "--------------------------" << endl;
	cout << "������" << endl;
	pos = m.find(1);
	count = m.count(1);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "������" << pos->second.m_Name << " ���䣺 " << pos->second.m_Salary << endl;
	}
	cout << "--------------------------" << endl;
	cout << "�з���" << endl;
	pos = m.find(2);
	count = m.count(2);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "������" << pos->second.m_Name << " ���䣺 " << pos->second.m_Salary << endl;
	}
}
void createWorker(vector<Worker>& v)
{
	string nameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		Worker worker;
		worker.m_Name = "Ա��";
		worker.m_Name += nameSeed[i];
		
		worker.m_Salary = rand() % 10000 + 10000;

		//��Ա���ŵ�������
		v.push_back(worker);
	}
}
void setGroup(vector<Worker>&v,multimap<int,Worker>&m)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		//�����������
		int deptId = rand() % 3;//0,1,2

		//����Ա��
		m.insert(make_pair(deptId, *it));
	}
}
int main()
{
	srand((unsigned int)time(NULL));

	//1.����Ա��
	vector<Worker>vWorker;
	createWorker(vWorker);

	//Ա������
	multimap<int, Worker>mWorker;
	setGroup(vWorker, mWorker);

	print(mWorker);


	return 0;
}