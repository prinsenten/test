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
//	////查找元素
//	//set<int>::iterator pos = s1.find(30);
//
//	//if (pos != s1.end())
//	//{
//	//	cout << "找到元素" << endl;
//	//}
//	//else
//	//{
//	//	cout << "未找到" << endl;
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
//		//按照年龄
//		return p1.m_Age > p2.m_Age;
//	}
//};
//void test01()
//{
//	set<Person, MyCompare>s;
//	Person p1("刘备", 24);
//	Person p2("关羽", 28);
//	Person p3("张飞", 25);
//	Person p4("赵云", 21);
//
//	s.insert(p1);
//	s.insert(p2);
//	s.insert(p3);
//	s.insert(p4);
//
//	for (set<Person, MyCompare>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << "姓名：" << (*it).m_Name << " 年龄: " << it->m_Age<<endl;
//	}
//}
//#include<map>
//void test()
//{
//	map<int, int>m;
//	
//	m.insert(pair<int, int>(1, 10));//匿名对组
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
	cout << "策划部门：" << endl;
	multimap<int, Worker>::iterator pos = m.find(0);
	int count = m.count(0);
	int index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名：" << pos->second.m_Name << " 年龄： " << pos->second.m_Salary << endl;
	}
	cout << "--------------------------" << endl;
	cout << "美术：" << endl;
	pos = m.find(1);
	count = m.count(1);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名：" << pos->second.m_Name << " 年龄： " << pos->second.m_Salary << endl;
	}
	cout << "--------------------------" << endl;
	cout << "研发：" << endl;
	pos = m.find(2);
	count = m.count(2);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名：" << pos->second.m_Name << " 年龄： " << pos->second.m_Salary << endl;
	}
}
void createWorker(vector<Worker>& v)
{
	string nameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		Worker worker;
		worker.m_Name = "员工";
		worker.m_Name += nameSeed[i];
		
		worker.m_Salary = rand() % 10000 + 10000;

		//将员工放到容器中
		v.push_back(worker);
	}
}
void setGroup(vector<Worker>&v,multimap<int,Worker>&m)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		//产生随机部门
		int deptId = rand() % 3;//0,1,2

		//插入员工
		m.insert(make_pair(deptId, *it));
	}
}
int main()
{
	srand((unsigned int)time(NULL));

	//1.创建员工
	vector<Worker>vWorker;
	createWorker(vWorker);

	//员工分组
	multimap<int, Worker>mWorker;
	setGroup(vWorker, mWorker);

	print(mWorker);


	return 0;
}