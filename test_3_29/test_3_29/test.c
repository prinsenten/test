#include<stdio.h>


//enum Color
//{
//	RED=2,//给常量赋初始值
//	GREEN,
//	BULE=8
//};
//int main()
//{
//	int color = RED;
//	printf("%d %d %d\n", RED, GREEN, BULE);
//	return 0;
//}

//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un  u;
//	printf("%d\n", sizeof(u));//4
//	
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//
//	return 0;
//}


//
//int check_sys()
//{
//	int a = 1;  //内存中存储形式 00 00 00 01
//	return *(char*)&a;//字符型指针，只取第一个字节 判断大小端
//}
//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	//因为联合体共用内存，所以判断第一个字节即可判断大小端
//	//给int 赋值了1 和上图的int a=1一样
//	return u.c;
//}
//int main()
//{
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("小端\n"); //小端的存储形式为 01 00 00 00
//	}
//	else
//	{
//		printf("大端\n");//大端存储形式为 00 00 00 01
//	}
//	return 0;
//}


//union Un
//{
//	int a;//4     取对齐数8和4比较 取4
//	char arr[5];//5  字符数组比较为 8和1比较   
//};
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));//8 
//	return 0;
//}



