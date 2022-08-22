#include<iostream>
using namespace std;

//设计一个圆类，求圆的周长
//圆求周长的公式：2*Π*r
//const double PI = 3.14;
//class Circle
//{
//	//访问权限--公共权限
//public:
//
//	//属性--半径
//	int m_r;
//	//行为--获取圆的周长
//	double calculateZC()
//	{
//		return 2 * PI * m_r;
//	}
//};
//int main()
//{
//	//通过圆类创建具体对象
//	Circle c1;
//
//	c1.m_r = 10;
//	cout << "圆的周长为:" << c1.calculateZC() << endl;
//	
//	return 0;
//}
#include<string>
//class Student
//{
//public:
//	string m_name;
//
//	int m_id;
//
//	void showStudent()
//	{
//		cout << "姓名： " << m_name << "学号: " << m_id << endl;
//	}
//};
//int main()
//{
//	Student s1;
//
//	s1.m_name = "张三 ";
//	s1.m_id = 1;
//	
//	s1.showStudent();
//
//
//	return 0;
////
////}
//class Person
//{
//public:
//	//可读可写
//	void setName(string name)
//	{
//		m_Name = name;
//	}
//
//	string getName()
//	{
//		return m_Name;
//	}
//	//只读
//	int getage()
//	{
//		m_age = 0;
//		return m_age;
//	}
//	//只写
//	void setLover(string lover)
//	{
//		m_Lover = lover;
//	}
//private:
//	string m_Name;
//
//	int m_age;
//
//	string m_Lover;
//};
//int main()
//{
//	Person p;
//	p.setName("张三");
//	cout << "姓名： " << p.getName()<<endl;
//
//	//p.getage(100);
//	cout << "年龄： " << p.getage() << endl;
//
//	p.setLover("xx");
//	cout << "姓名： " << p.getName() << endl;
//
//	return 0;
//}
//class Cube
//{
//public:
//	//设置长
//	void setL(int l)
//	{
//		m_L = l;
//	}
//	int getL()
//	{
//		return  m_L;
//	}
//	//设置宽
//	void setW(int w)
//	{
//		m_W = w;
//	}
//	int getW()
//	{
//		return  m_W;
//	}	
//	//设置高
//	void setH(int h)
//	{
//		m_H = h;
//	}
//	int getH()
//	{
//		return  m_H;
//	}
//	//计算面积
//	int calculateS()
//	{
//		return 2 * m_L * m_W + 2 * m_L * m_H + 2*m_W * m_H;
//	}
//	//计算体积
//	int calculateV()
//	{
//		return m_L * m_H * m_W;
//	}
//private:
//	int m_L;//长
//	int m_W;//宽
//	int m_H;//高
//
//
//};
////利用全局函数判断，两个立方体是否相等
//bool isSame(Cube &c1, Cube &c2)
//{
//	
//}
//int main()	
//{
//	Cube c1;
//	c1.setL(10);
//	c1.setW(10);
//	c1.setH(10);
//
//	cout << "c1的面积为：" << c1.calculateS() << endl;
//	cout << "c1的体积为：" << c1.calculateV() << endl;
//
//	Cube c2;
//	c2.setL(10);
//	c2.setW(10);
//	c2.setH(10);
//
//	return 0;
//}

////点和圆的关系
////点类
//class Point
//{
//public:
//	//设置x 
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	//获取x
//	int getx()
//	{
//		return m_X;
//	}
//	//设置y
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	//获取y
//	int getY()
//	{
//		return m_Y;
//	}
//private:
//	int m_X;
//	int m_Y;
//};
////圆类
//class Circle
//{
//public:
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	int getR()
//	{
//		return m_R;
//	}
//	//圆心设置
//	void setCenter(Point center)
//	{
//		m_Center = center;
//	}
//	Point getm_Center()
//	{
//		return m_Center;
//	}
//private:
//	int m_R;
//	
//	Point m_Center;
//};
class Person
{
public:
	Person()
	{
		cout << "构造函数的调用" << endl;
	}
	~Person()
	{
		cout << "析构函数的调用" << endl;
	}
};
void test()
{
	Person p;
}
int main()
{
	//test();
	Person p;
	system("pause");

	return 0;
}