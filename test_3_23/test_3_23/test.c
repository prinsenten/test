

#include<stdio.h>


//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
////&a+1��a�����һ�����飬����ָ������ ���Խ���ǿ��ת��
////ptr-1����ǰ�ƶ�һλ ��ָ��a�����β��5
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
////����p��ֵΪ0x100000�����±�����ʽ��ֵ�ֱ�Ϊ���٣�
////��֪�ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//	p = (struct Test*)0x1000000;
//	printf("%p\n", p + 0x1);//0x00100014;
//	//����һ���ṹ�壬��20
//	printf("%p\n", (unsigned long)p + 0x1);//0x00100001
//	//�൱��ԭֵ��1
//	printf("%p\n", (unsigned int*)p + 0x1);//0x00100004
//	//����һ���޷�������  ��4��ָ�룿��
//	return 0;
//}


//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr[-1], *ptr2);//0x4,0x2000000
//	//ptr1[-1]==*(ptr1-1),ptr1������ָ��
//	//ptr1��ָ��һ��Ԫ�������ƫ��һ���� 
//	//�����ȡ�ĸ� ��ȡ��Ϊ00 00 00 20
//	//10 00 00 00 | 20 00 00 00 | 30 00 00 00 | 40 00 00 00
//	//   ptr2����00��) Ϊ 00 00 00 20
//
//	return 0;
//}


//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//���ű���ʽ
//	//������ʵΪ{1��3��5}
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


