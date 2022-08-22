#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//struct S
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	struct S s[n];
//
//	return 0;
//}

#include<errno.h>
//int main()
//{
//	//向内存申请10个整形的空间
//	int* p = (int*)malloc(10 * sizeof(int));
//	//malloc返回类型是void* 所以强制类型转换一下
//	if (p == NULL)
//	{
//		//打印错误原因
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用
//		int i = 0;
//	/*	for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}*/
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}//当动态申请的空间不再使用的时候，就应当返回系统
//	free(p);//主动回收
//	p = NULL;//p被释放了但是还是能找到这个地址，所以要放到空地址
//	return 0;
//}



//int main()
//{
//	//malloc(10,sizeof(int))
//	int*p=(int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", * (p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}




//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)		
//	{
//		*p++ = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
	//假设这里，20个字节不能满足使用，我们需要40个
	//此时可以使用realloc来调整动态开辟的内存
//	int* ptr=realloc(p, 40);
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p+ i));//追加了5个
//	}
//	return 0;
//}
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);//*p才是str的地址
//}             
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);//取地址
//	strcpy(str, "hello world");
//	printf(str);
//
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}



char* GetMemory(void)
{
	static char p[] = "hello world";//数组只在函数内部，值被返还内存了
	return p;
}
void Test(void)
{
	char* str = NULL;
	str = GetMemory();
	printf(str);//打印的随机值，存在非法访问的问题
}
int main()
{
	Test();
	return 0;
}