#include<stdio.h>


//enum Color
//{
//	RED=2,//����������ʼֵ
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
//	int a = 1;  //�ڴ��д洢��ʽ 00 00 00 01
//	return *(char*)&a;//�ַ���ָ�룬ֻȡ��һ���ֽ� �жϴ�С��
//}
//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	//��Ϊ�����干���ڴ棬�����жϵ�һ���ֽڼ����жϴ�С��
//	//��int ��ֵ��1 ����ͼ��int a=1һ��
//	return u.c;
//}
//int main()
//{
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("С��\n"); //С�˵Ĵ洢��ʽΪ 01 00 00 00
//	}
//	else
//	{
//		printf("���\n");//��˴洢��ʽΪ 00 00 00 01
//	}
//	return 0;
//}


//union Un
//{
//	int a;//4     ȡ������8��4�Ƚ� ȡ4
//	char arr[5];//5  �ַ�����Ƚ�Ϊ 8��1�Ƚ�   
//};
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));//8 
//	return 0;
//}



