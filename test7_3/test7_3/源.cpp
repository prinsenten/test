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
//	输出结果为16.子类会继承所有父类。
//	只是私有权限不能被访问到。
//}
//int main()
//{
//	test01();
//	return 0;
//}
//class Animal
//{
//public://虚函数
//	virtual void speak()
//	{
//		cout << "动物在说话:" << endl;
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
//		cout << "猫在说话:" << endl;
//	}
//};
//
//class Dog :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "狗在说话:" << endl;
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
//普通写法
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
		}//如果先扩展新功能，需要修改源码
		//在开发中 提倡 开闭原则
		//开闭原则：对扩展进行开发，对修改进行关闭
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
//利用多态实现
//实现计算机抽象类
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
//加法计算器类
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
	//多态使用条件是父类指针或者引用指向子类对象
	AbstractCalculator* abc = new AddCalulator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 10;

	cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getRuslt() << endl;
	delete abc;//开辟的要释放

	abc = new SubCalulator;
}
int main()
{
	test01();
	return 0;
}