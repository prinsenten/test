#include<iostream>
using namespace std;

//
//class Base
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//class Son1 :public Base
//{
//public:
//	int m_D;
//
//};
//void test01()
//{
//	cout << "sizeof=" << sizeof(Son1) << endl;
//	������Ϊ16.�����̳����и��ࡣ
//	ֻ��˽��Ȩ�޲��ܱ����ʵ���
//}
//int main()
//{
//	test01();
//	return 0;
//}
//class Animal
//{
//public://�麯��
//	virtual void speak()
//	{
//		cout << "������˵��:" << endl;
//	}
//};
//
//void dospeak(Animal &animal)
//{
//	animal.speak();
//}
//class Cat :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "è��˵��:" << endl;
//	}
//};
//
//class Dog :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "����˵��:" << endl;
//	}
//};
//void test01()
//{
//	Cat cat;
//	dospeak(cat);
//
//	Dog dog;
//	dospeak(dog);
//}
//int main()
//{
//	test01();
//	return 0;
//}

#include<string>
//��ͨд��
class Calculator
{
public:
	int getRuslt(string oper)
	{
		if (oper == "+")
		{
			return m_Num1 + m_Num2;
		}
		else if (oper == "-")
		{
			return m_Num1 - m_Num2;
		}
		else if (oper == "*")
		{
			return m_Num1 * m_Num2;
		}//�������չ�¹��ܣ���Ҫ�޸�Դ��
		//�ڿ����� �ᳫ ����ԭ��
		//����ԭ�򣺶���չ���п��������޸Ľ��йر�
	}
	int m_Num1;
	int m_Num2;
};
void test01()
{
	Calculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 10;

	cout << c.m_Num1 << "+" << c.m_Num2 << "=" << c.getRuslt("+") << endl;
	cout << c.m_Num1 << "-" << c.m_Num2 << "=" << c.getRuslt("-") << endl;
	cout << c.m_Num1 << "*" << c.m_Num2 << "=" << c.getRuslt("*") << endl;
}
//���ö�̬ʵ��
//ʵ�ּ����������
class AbstractCalculator
{
public:

	virtual int getRuslt()
	{
		return 0;
	}
	int m_Num1;
	int m_Num2;
};
//�ӷ���������
class AddCalulator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 + m_Num2;
	}
};
class SubCalulator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 - m_Num2;
	}
};
class MulCalulator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 * m_Num2;
	}
};
void test02()
{
	//��̬ʹ�������Ǹ���ָ���������ָ���������
	AbstractCalculator* abc = new AddCalulator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 10;

	cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getRuslt() << endl;
	delete abc;//���ٵ�Ҫ�ͷ�

	abc = new SubCalulator;
}
int main()
{
	test01();
	return 0;
}