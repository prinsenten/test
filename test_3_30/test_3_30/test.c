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
//	//���ڴ�����10�����εĿռ�
//	int* p = (int*)malloc(10 * sizeof(int));
//	//malloc����������void* ����ǿ������ת��һ��
//	if (p == NULL)
//	{
//		//��ӡ����ԭ��
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ��
//		int i = 0;
//	/*	for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}*/
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}//����̬����Ŀռ䲻��ʹ�õ�ʱ�򣬾�Ӧ������ϵͳ
//	free(p);//��������
//	p = NULL;//p���ͷ��˵��ǻ������ҵ������ַ������Ҫ�ŵ��յ�ַ
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
	//�������20���ֽڲ�������ʹ�ã�������Ҫ40��
	//��ʱ����ʹ��realloc��������̬���ٵ��ڴ�
//	int* ptr=realloc(p, 40);
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p+ i));//׷����5��
//	}
//	return 0;
//}
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);//*p����str�ĵ�ַ
//}             
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);//ȡ��ַ
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
	static char p[] = "hello world";//����ֻ�ں����ڲ���ֵ�������ڴ���
	return p;
}
void Test(void)
{
	char* str = NULL;
	str = GetMemory();
	printf(str);//��ӡ�����ֵ�����ڷǷ����ʵ�����
}
int main()
{
	Test();
	return 0;
}