#include <iostream>
#include<list>
using namespace std;
#include<vector>
////
////void test()
////{
////	vector<int>v;
////	v.push_back(10);
////	v.push_back(20);
////	v.push_back(30);
////	v.push_back(40);
////	v.push_back(50);
////	v.push_back(60);
////
////	for (int i : v)//c++11
////	{
////		cout << i << " ";// 10 20 30 40 50 60
////	}
////	cout << v.size() << endl;
////	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
////	{
////		if (*it == 60)
////		{
////			it = v.erase(it);
////			it--;
////		}
////	}
////	for (int i : v)//c++11
////	{
////		cout << i << " ";// 10 20 30 40 50
////	}
////	cout << v.size() << endl;
////
////}
////int main()
////{
////	test();
////
////	return 0;
////}
//#include<string>
//#include<list>
//
//class Person
//{
//public:
//	Person(string name, int age, int highet)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//		this->m_Highet = highet;
//	}
//	string m_Name;
//	int m_Age;
//	int m_Highet;
//
//};
//bool comparePerson(Person&p1,Person&p2)
//{
//	if (p1.m_Age == p2.m_Age)
//	{
//		return p1.m_Highet > p2.m_Highet;
//	}
//	return p1.m_Age < p2.m_Age;
//}
//void showPerson(list<Person>&l)
//{
//	for (list<Person>::iterator it = l.begin(); it != l.end(); it++)
//	cout << "����:" << it->m_Name << " ���䣺" << it->m_Age << " ��ߣ�" << it->m_Highet << endl;
//
//}
//void test()
//{
//	list<Person>l;
//	Person p1("����",25,175);
//	Person p2("����", 23, 185);
//	Person p3("�ŷ�", 21, 178);
//	Person p4("����", 19, 180);
//	Person p5("����", 21, 180);
//	Person p6("����", 25, 176);
//
//	l.push_back(p1);
//	l.push_back(p2);
//	l.push_back(p3);
//	l.push_back(p4);
//	l.push_back(p5);
//	l.push_back(p6);
//
//	//for (list<Person>::iterator it = l.begin(); it != l.end(); it++)
//	//{
//	//	cout << "����:" << it->m_Name << " ���䣺" << it->m_Age << " ��ߣ�" << it->m_Highet << endl;
//	//}
//	showPerson(l);
//	cout << "-------------------------" << endl;
//
//	l.sort(comparePerson); 
//	showPerson(l);
//
//	//for (list<Person>::iterator it = l.begin(); it != l.end(); it++)
//	//{
//	//	cout << "����:" << it->m_Name << " ���䣺" << it->m_Age << " ��ߣ�" << it->m_Highet << endl;
//	//}
//}
//int main()
//{
//	test();
//
//	return 0;
//}
#include<set>

class compare
{
public:
	bool operator()(int v1, int v2)const
	{
		return v1 > v2;
	}
};
void test()
{
	set<int,compare>s;
	s.insert(10);
	s.insert(30);
	s.insert(20);
	s.insert(50);
	s.insert(40);

	//set<int>::iterator pos = s.find(30);
	//if (pos != s.end())
	//{
	//	cout << "�ҵ�" << endl;
	//}
	//else
	//{
	//	cout << "û�ҵ�" << endl;
	//}
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << endl;
	}
}
int main()
{
	test();
	return 0;
}