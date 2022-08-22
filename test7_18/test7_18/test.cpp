#include<iostream>

using namespace std;
#include<string>
#include<vector>
#include<deque>
#include<algorithm>
//template<class Nametype,class Agetype>
////class Person
////{
////public:
////	Person(Nametype name,Agetype age)
////	{
////		this->m_Name = name;
////		this->m_Age = age;
////	}
////
////	void showPerson()
////	{
////		cout << "name:" << this->m_Name << "age:" << this->m_Age << endl;
////	}
////	Nametype m_Name;
////	Agetype m_Age;
////};
////void print01(Person<string,int>&p)
////{
////	p.showPerson();
////}
////
////template<class T1, class T2>
////void print02(Person<T1,T2>&p)
////{
////	p.showPerson();
////	cout << "T1数据类型为" << typeid(T1).name() << endl;
////	cout << "T2数据类型为" << typeid(T2).name() << endl;
////
////}
////template<class T>
////void print03(T &p)
////{
////	p.showPerson();
////	cout << "T数据类型为" << typeid(T).name() << endl;
////}
////void test01()
////{
////	Person<string, int>p("孙悟空", 999);
////	print02(p);
////}
////template<class T1,class T2>
////class Person
////{
////public:
////	Person(T1 name, T2 age);
////	void showPerson();
////
////	T1 m_Name;
////	T2 m_Age;
////};
////template<class T1, class T2>
////Person<T1, T2>::Person(T1 name, T2 age)
////{
////	this->m_Name = name;
////	this->m_Age = age;
////}
////template<class T1, class T2>
////void Person<T1, T2>::showPerson()
////{
////	cout << "姓名：" << this->m_Name << " 年龄: " << this->m_Age << endl;
////}
////
////void test01()
////{
////	Person<string,int>p("tom", 20);
////	p.showPerson();
////}
//#include<vector>
////void test01()
////{
////	vector<int>v;
////	v.push_back(10);
////	v.push_back(20);
////	v.push_back(30);
////	v.push_back(40);
////
////	vector<int>::iterator itBegin = v.begin();
////	vector<int>::iterator itEnd = v.end();
////
////	while (itBegin != itEnd)
////	{
////		cout << *itBegin << endl;
////		itBegin++;
////	}
////}
////void test01()
////{
////	vector<vector<int>>v;
////	vector<int>v1;
////	vector<int>v2;
////	vector<int>v3;
////	vector<int>v4;
////
////	for (int i = 0; i < 4; i++)
////	{
////		v1.push_back(i + 1);
////		v2.push_back(i + 2);
////		v3.push_back(i + 3);
////		v4.push_back(i + 4);
////	}
////
////	v.push_back(v1);
////	v.push_back(v2);
////	v.push_back(v3);
////	v.push_back(v4);
////
////	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
////	{
////		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
////		{
////			cout << *vit << " ";
////		}
////		cout << endl;
////	}
////}
//void test01()
//{
//	/*string s1;
//	cout << "s1=" << s1 << endl;
//
//	const char* str2 = "hello world";
//	string s2(str2);
//	cout << "s2=" << s2 << endl;
//
//	string s3(s2);
//	cout << "s3=" << s3 << endl;
//
//	string s4 (10,'a');
//	cout << "s4=" << s4 << endl;*/
//
//	//string s1 = "我";
//	//string s2 = "爱玩游戏";
//	//s1 += s2;
//
//
//	//string s4 = "lol cs";
//	//cout << s1 << endl;
//
//	//string s3 = "i love game";
//	////s3.append("lol");
//	////cout << s3 << endl;
//	//s3.append(s4,4,3);
//	//cout << s3 << endl;
//	string s1="world";
//	s1.replace(1, 1, "111");
//	cout << s1 << endl;
//}
//int main()
//{
//	test01();
//
//
//	return 0;
//}
//#include<time.h>
//class Person
//{
//public:
//	Person(string name,int score)
//	{
//		this->m_Name = name;
//		this->m_score = score;
//	}
//
//	string m_Name;
//	int m_score;
//};
//
//void creatPerson(vector<Person>&v)
//{
//	string nameseed = "ABCDE";
//	for (int i = 0; i < 5; i++)
//	{
//		string name = "选手";
//		name += nameseed[i];
//		
//		int score = 0;
//		Person p(name,score);
//		v.push_back(p);
//	}
//}
//void setscore(vector<Person>&v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		deque<int>d;
//		for (int i = 0; i < 10; i++)
//		{
//			int score = rand() % 41 + 60;
//			d.push_back(score);
//		}
//		sort(d.begin(), d.end());
//		d.pop_back();
//		d.pop_front();
//		int sum = 0;
//		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
//		{
//			sum += *dit;
//		}
//		int avg = sum / d.size();
//
//		it->m_score = avg;
//	}
//}
//
//void showPerson(vector<Person>& v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "姓名：" << it->m_Name << " 得分：" << it->m_score << endl;
//	}
//}
//int main()
//{
//	srand((unsigned)time(NULL));
//	vector<Person>v;
//	creatPerson(v);
//	setscore(v);
//	showPerson(v);
//	return 0;
//}
