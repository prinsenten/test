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


//ʵ��1��+2��+...�Ľ׳�,��������ȥ��������
//int main()
//{
//	int i = 0;
//	int sum = 0;//�������ս��
//	int n = 0;
//	int ret = 1;//����n�Ľ׳�
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
//	dest++;                  δ�Ż�
//	}
//	*dest = *src;
//} 
//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)//��ֹ�п�ָ��������
//	{
//		while (*dest++ = *src++)
//		{
//			;           //�Ż��� ���á�\0'��ASCII��Ϊ0  ͣ��ѭ��
//		}
//	}
//}

#include<assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);//����    �����п�ָ�� ������ֱ����������
//	assert(src != NULL);//����    
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
//	printf("%s\n",my_strcpy(arr1, arr2));//���Է���
//
//	return 0;
//}


//
//int main()
//{
//	const int num = 10;
//	int n = 100;
//	const int* p = &num;
//	//err const ����ָ�������*���ʱ�����ε�*p������ͨ��p���ı�*p��num����ֵ
//	//err const ����ָ�������*�ұ�ʱ,���ε�ʱp��p���ܸı�
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