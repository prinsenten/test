#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
//
//struct S
//{
//	int n;
//	int arr[0];//未知大小的-柔性数组成员-数组大小是可以调整的
//};
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//4 只有第一个int的值
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	ps->n = 100;//100赋值到n的内存中
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;//0 1 2 3 4 
//	}
//	struct S* ptr = realloc(ps, 44);//给arr数组追加元素
//	if (ptr == NULL)
//	{
//		ps = NULL;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ptr);
//	ptr = NULL;
//	return 0;
//}
//
//struct S
//{
//	int n;
//	int* arr;
//};
//int main()
//{        //用ps接受地址
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	ps->arr = malloc(5 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ",ps->arr[i]);
//	}
//	//不够用时 用一个新变量来接受追加的值的空间
//	int* ptr = realloc(ps->arr, 10 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ptr);
//	ps->arr= NULL;//先将数组开辟的空间置为空指针
//	free(ps);
//	ps = NULL;//后置空，否则寻找不到arr的空间
//	return 0;
//}
#include<string.h>
#include<errno.h>
//int main()
//{
//	//打开文件
//	// .-为当前路径   ..-为上级路径
//	//fopen("test.txt", "r");//相对路径（就在此文件夹下） ，“r”-打开方式
//	FILE *pf=fopen("D:\\vs2019\\test_3_3\\test_3_3", "r");
//	//绝对路径-多加个\可以防止被转义
//	if (pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	//打开成功
//	//读取文件
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

int main()
{
	FILE* pfWrite = fopen("TEST.txt", "w");
	if (pfWrite == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//写文件
	fputc('t', pfWrite);
	fputc('h', pfWrite);
	fputc('e', pfWrite);
	//关闭文件
	fclose(pfWrite);
	pfWrite = NULL;
	
	return 0;

}




