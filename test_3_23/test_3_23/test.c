

#include<stdio.h>


//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
////&a+1是a后面的一组数组，数组指针类型 所以进行强制转换
////ptr-1就向前移动一位 又指到a数组结尾的5
//	printf("%d,%d", *(a + 1), *(ptr - 1));//2,5
//	return 0;
//}

//
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p的值为0x100000，如下表表达式的值分别为多少？
////已知结构体Test类型的变量大小是20个字节
//int main()
//{
//	p = (struct Test*)0x1000000;
//	printf("%p\n", p + 0x1);//0x00100014;
//	//跳过一给结构体，加20
//	printf("%p\n", (unsigned long)p + 0x1);//0x00100001
//	//相当于原值加1
//	printf("%p\n", (unsigned int*)p + 0x1);//0x00100004
//	//跳过一个无符号整形  加4（指针？）
//	return 0;
//}


//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr[-1], *ptr2);//0x4,0x2000000
//	//ptr1[-1]==*(ptr1-1),ptr1是整形指针
//	//ptr1是指在一个元素中向后偏移一个字 
//	//输出读取四个 读取的为00 00 00 20
//	//10 00 00 00 | 20 00 00 00 | 30 00 00 00 | 40 00 00 00
//	//   ptr2（在00处) 为 00 00 00 20
//
//	return 0;
//}


//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//逗号表达式
//	//数组其实为{1，3，5}
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//
//	return 0;
//}



//
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}



