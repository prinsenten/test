#include<iostream>
using namespace std;

//���һ��Բ�࣬��Բ���ܳ�
//Բ���ܳ��Ĺ�ʽ��2*��*r
//const double PI = 3.14;
//class Circle
//{
//	//����Ȩ��--����Ȩ��
//public:
//
//	//����--�뾶
//	int m_r;
//	//��Ϊ--��ȡԲ���ܳ�
//	double calculateZC()
//	{
//		return 2 * PI * m_r;
//	}
//};
//int main()
//{
//	//ͨ��Բ�ഴ���������
//	Circle c1;
//
//	c1.m_r = 10;
//	cout << "Բ���ܳ�Ϊ:" << c1.calculateZC() << endl;
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
//		cout << "������ " << m_name << "ѧ��: " << m_id << endl;
//	}
//};
//int main()
//{
//	Student s1;
//
//	s1.m_name = "���� ";
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
//	//�ɶ���д
//	void setName(string name)
//	{
//		m_Name = name;
//	}
//
//	string getName()
//	{
//		return m_Name;
//	}
//	//ֻ��
//	int getage()
//	{
//		m_age = 0;
//		return m_age;
//	}
//	//ֻд
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
//	p.setName("����");
//	cout << "������ " << p.getName()<<endl;
//
//	//p.getage(100);
//	cout << "���䣺 " << p.getage() << endl;
//
//	p.setLover("xx");
//	cout << "������ " << p.getName() << endl;
//
//	return 0;
//}
//class Cube
//{
//public:
//	//���ó�
//	void setL(int l)
//	{
//		m_L = l;
//	}
//	int getL()
//	{
//		return  m_L;
//	}
//	//���ÿ�
//	void setW(int w)
//	{
//		m_W = w;
//	}
//	int getW()
//	{
//		return  m_W;
//	}	
//	//���ø�
//	void setH(int h)
//	{
//		m_H = h;
//	}
//	int getH()
//	{
//		return  m_H;
//	}
//	//�������
//	int calculateS()
//	{
//		return 2 * m_L * m_W + 2 * m_L * m_H + 2*m_W * m_H;
//	}
//	//�������
//	int calculateV()
//	{
//		return m_L * m_H * m_W;
//	}
//private:
//	int m_L;//��
//	int m_W;//��
//	int m_H;//��
//
//
//};
////����ȫ�ֺ����жϣ������������Ƿ����
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
//	cout << "c1�����Ϊ��" << c1.calculateS() << endl;
//	cout << "c1�����Ϊ��" << c1.calculateV() << endl;
//
//	Cube c2;
//	c2.setL(10);
//	c2.setW(10);
//	c2.setH(10);
//
//	return 0;
//}

////���Բ�Ĺ�ϵ
////����
//class Point
//{
//public:
//	//����x 
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	//��ȡx
//	int getx()
//	{
//		return m_X;
//	}
//	//����y
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	//��ȡy
//	int getY()
//	{
//		return m_Y;
//	}
//private:
//	int m_X;
//	int m_Y;
//};
////Բ��
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
//	//Բ������
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
		cout << "���캯���ĵ���" << endl;
	}
	~Person()
	{
		cout << "���������ĵ���" << endl;
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