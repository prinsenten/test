#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<ctime>
#include<map>
//class Worker
//{
//public:
//
//	string m_Name;
//	int m_Salary;
//
//};
//
//void CreateWorker(vector<Worker>&v)
//{
//	string nameseed = "ABCDEFGHIJ";
//	for (int i = 0; i < 10; i++)
//	{
//		Worker worker;
//		worker.m_Name = "Ա��";
//		worker.m_Name += nameseed[i];
//		worker.m_Salary = rand() % 10000 + 10000;
//
//		v.push_back(worker);
//	}
//}
//void setGroup(vector<Worker>& v,multimap<int,Worker>&m)
//{
//	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		int depeId = rand() % 3;
//
//		m.insert(make_pair(depeId, *it));
//	}
//	/*for (multimap<int, Worker>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "����" << it->first << "  Ա����" << it->second.m_Name
//			<< " ���ʣ�" << it->second.m_Salary << endl;
//	}*/
//}
//void printv(multimap<int,Worker>&m)
//{
//	cout << "�߻�����:" << endl;
//	multimap<int, Worker>::iterator pos = m.find(0);
//	int count=m.count(0);
//	int index = 0;
//	for (; index < count && pos != m.end(); index++, pos++)
//	{
//		cout << "������" << pos->second.m_Name << " ���ʣ�" << pos->second.m_Salary << endl;
//	}
//	cout << "------------------------------" << endl;
//
//	cout << "���۲���:" << endl;
//	pos = m.find(1);
//	count = m.count(1);
//	index = 0;
//	for (; index < count && pos != m.end(); index++, pos++)
//	{
//		cout << "������" << pos->second.m_Name << " ���ʣ�" << pos->second.m_Salary << endl;
//	}
//	cout << "------------------------------" << endl;
//	
//	cout << "�з�����:" << endl;
//	pos = m.find(2);
//	count = m.count(2);
//	index = 0;
//	for (; index < count && pos != m.end(); index++, pos++)
//	{
//		cout << "������" << pos->second.m_Name << " ���ʣ�" << pos->second.m_Salary << endl;
//	}
//	
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	vector<Worker>vWorker;
//	CreateWorker(vWorker);
//	
//	multimap<int, Worker>mWorker;
//	setGroup(vWorker,mWorker);
//	printv(mWorker);
//
//	return 0;
//}


