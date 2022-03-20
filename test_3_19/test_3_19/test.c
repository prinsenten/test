#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//
//	return 0;
//}


//实现1！+2！+...的阶乘,存在问题去发现问题
//int main()
//{
//	int i = 0;
//	int sum = 0;//保存最终结果
//	int n = 0;
//	int ret = 1;//保存n的阶乘
//	scanf("%d", &n);//3 1!+2!+3!=1+2+6+9
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//
//	return 0;

//void my_strcpy(char* dest, char* src)
//{
//	while(*src!='\0')
//	{ 
//	*dest = *src;
//	src++;
//	dest++;                  未优化
//	}
//	*dest = *src;
//} 
//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)//防止有空指针程序崩溃
//	{
//		while (*dest++ = *src++)
//		{
//			;           //优化后 利用‘\0'的ASCII码为0  停下循环
//		}
//	}
//}

#include<assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);//断言    提醒有空指针 而不是直接跳过问题
//	assert(src != NULL);//断言    
//		while (*dest++ = *src++)
//		{
//			;       
//		}
//	
//}
//const* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//
//}
//int main()
//{
//	char arr1[] = "#############";
//	char arr2[] = "bit";
//	printf("%s\n",my_strcpy(arr1, arr2));//联试访问
//
//	return 0;
//}


//
//int main()
//{
//	const int num = 10;
//	int n = 100;
//	const int* p = &num;
//	//err const 放在指针变量的*左边时，修饰的*p，不可通过p来改变*p（num）的值
//	//err const 放在指针变量的*右边时,修饰的时p，p不能改变
//	*p = 20;
//	p=&n
//	printf("%d\n", num);
//	return 0;
//}


int main()
{
	int b = -10;
	//0xfffffff6
	return 0;
}