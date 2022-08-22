#define _CRT_SECURE_NO_WARNINGS

#include<string.h>
#include<stdio.h>


//struct 
//{
//	int a;
//	char c;
//}x;//匿名结构体类型
//struct
//{
//	int a;
//	char c;
//}*psa;//匿名结构体指针类型
//int main()
//{
//	psa = &x;//不是一个类型，是非法的
//	return 0;
//}

//struct Node  //可行吗
//{
//	int data;
//	struct Node next;//不可行，因为这样数据一直进去，大小未知
//};
//
//struct Node
//{
//	int date;
//	struct Node* next;//可行,用指针来确定地址，指针大小可以确定
//};
//int main()
//{
//
//	return 0;
//}

//struct T
//{
//	double weight;
//	short age;
//};
//struct S
//{
//	char c;
//	int a;
//	double b;
//	struct T st;
//	char arr[20];
//};
//int main()
//{
//	/*struct S s = { 'c',100,3.14,"hello world" };*/
//	struct S s = { 'c',100,3.14,{55.6,30},"hello word" };
//	printf("%c %d %lf %s\n", s.c, s.a, s.b, s.arr);
//	printf("%lf", s.st.weight);
//	return 0;
//}


//
//struct S1
//{
//	char c1;//1  1. 是结构体内存起始位置  此时为0
//	int a;//4   2.vs对齐数为8 4与8取4 从 c1位置开始先跳过4字节
//	      //    浪费了3字节，然后int再存入4字节    此时为8
//	char c2;//1  3. 1的倍数就是1字节 直接存储存储一字节   此时为9 
//// 因为结构体大小为最大对齐数的整数倍 故需要在浪费3个字节补齐到12
//};
//struct S2
//{
//	char c1;//1   此时为0
//	char c2;//1    此时为1
//	int a;//4   从4开始 浪费了2字节然后 然后存入4字节 此时为8
//};
//struct S3
//{
//	double d;//8
//	char c;//1
//	int i;//4
//};                 //struct S3占用了16个字节
//struct S4
//{
//	char c1;//1     此时为1  与struct之间浪费了7个字节
//	struct S3 s3;//16 此时S3 存储按其结构体中最大的类型算 就是double的8
//	          //从8开始 直接存入16个字节    此时为16+8=24
//	double d;//8    24的位置为8的倍数 直接存入为32  
//	    //   此时 32也为8的倍数 就不需要再浪费字节补齐
//};
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));//12
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));//8
//	return 0;
//}


//设置默认对齐数位 4
//#pragma pack(4)
//struct s
//{
//	char c1;// 1
//	double b; // 8  正常是在8时存入double 浪费7个字节
//	        //  设置默认对齐数4，就在4时存入 只浪费3个字节
//
//};
//#pragma pack()
////取消设置默认对齐数
//
//#include<stddef.h>
//struct S
//{
//	char c;//     0
//	int i; //     4
//	double d;//   8
//};
//int main()
//{
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, d));
//	return 0;
//}
//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//void Init(struct S* ps)
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
//void print1(struct S tmp)
//{
//	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
//}
//void print2(struct S* ps)
//{
//	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
//}
//int main()
//{
//	struct S s = { 0 };
//	Init(&s);//结构体传参 传址，这样在别的函数中修改才一起改变
//	print1(s);//只需要打印，不需要改变它的值所以不用带地址
//	print2(&s);
//	return 0;
//}






//struct S
//{
//	int _a : 2;
//	int _b : 5;//加不加_下划线都可
//	int c : 10;
//	int d : 30;
//};
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//8个字节
//	return 0;
//}// 开始时 位段先开辟4个字节 32个比特位
////a占用1个比特位，b占用5个，c占用10个 此时已经占用17个了
////还剩15个不够d的位置，所以会直接再开辟4个字节给d使用
////故一共占了8字节




struct S
{                //存放时是从右往左存放
	char a : 3;//先开辟一个字节8个比特位，a占3个
	char b : 4;//然后存入b，b占4个还有一个丢掉
	char c : 5;//再开辟一个字节，放入5个比特，还剩3个不够d存放
	char d : 4;//再开辟一个字节，放入4个比特
};
int main()
{
	struct S s = { 0 };
	           
	s.a = 10;//1010  a只能接受3个，只存放010
	s.b = 20;//10100 b只接受4个，只存放0100
	s.c = 3;//0011 c接受5个，补0 存放00011
	s.d = 4;//0100 d接受4个，存放0100
	//内存每四个比特显示一位
	//所以内存中存储为 22  03  04
	return 0;
}