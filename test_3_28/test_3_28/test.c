#define _CRT_SECURE_NO_WARNINGS

#include<string.h>
#include<stdio.h>


//struct 
//{
//	int a;
//	char c;
//}x;//�����ṹ������
//struct
//{
//	int a;
//	char c;
//}*psa;//�����ṹ��ָ������
//int main()
//{
//	psa = &x;//����һ�����ͣ��ǷǷ���
//	return 0;
//}

//struct Node  //������
//{
//	int data;
//	struct Node next;//�����У���Ϊ��������һֱ��ȥ����Сδ֪
//};
//
//struct Node
//{
//	int date;
//	struct Node* next;//����,��ָ����ȷ����ַ��ָ���С����ȷ��
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
//	char c1;//1  1. �ǽṹ���ڴ���ʼλ��  ��ʱΪ0
//	int a;//4   2.vs������Ϊ8 4��8ȡ4 �� c1λ�ÿ�ʼ������4�ֽ�
//	      //    �˷���3�ֽڣ�Ȼ��int�ٴ���4�ֽ�    ��ʱΪ8
//	char c2;//1  3. 1�ı�������1�ֽ� ֱ�Ӵ洢�洢һ�ֽ�   ��ʱΪ9 
//// ��Ϊ�ṹ���СΪ���������������� ����Ҫ���˷�3���ֽڲ��뵽12
//};
//struct S2
//{
//	char c1;//1   ��ʱΪ0
//	char c2;//1    ��ʱΪ1
//	int a;//4   ��4��ʼ �˷���2�ֽ�Ȼ�� Ȼ�����4�ֽ� ��ʱΪ8
//};
//struct S3
//{
//	double d;//8
//	char c;//1
//	int i;//4
//};                 //struct S3ռ����16���ֽ�
//struct S4
//{
//	char c1;//1     ��ʱΪ1  ��struct֮���˷���7���ֽ�
//	struct S3 s3;//16 ��ʱS3 �洢����ṹ�������������� ����double��8
//	          //��8��ʼ ֱ�Ӵ���16���ֽ�    ��ʱΪ16+8=24
//	double d;//8    24��λ��Ϊ8�ı��� ֱ�Ӵ���Ϊ32  
//	    //   ��ʱ 32ҲΪ8�ı��� �Ͳ���Ҫ���˷��ֽڲ���
//};
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));//12
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));//8
//	return 0;
//}


//����Ĭ�϶�����λ 4
//#pragma pack(4)
//struct s
//{
//	char c1;// 1
//	double b; // 8  ��������8ʱ����double �˷�7���ֽ�
//	        //  ����Ĭ�϶�����4������4ʱ���� ֻ�˷�3���ֽ�
//
//};
//#pragma pack()
////ȡ������Ĭ�϶�����
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
//	Init(&s);//�ṹ�崫�� ��ַ�������ڱ�ĺ������޸Ĳ�һ��ı�
//	print1(s);//ֻ��Ҫ��ӡ������Ҫ�ı�����ֵ���Բ��ô���ַ
//	print2(&s);
//	return 0;
//}






//struct S
//{
//	int _a : 2;
//	int _b : 5;//�Ӳ���_�»��߶���
//	int c : 10;
//	int d : 30;
//};
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//8���ֽ�
//	return 0;
//}// ��ʼʱ λ���ȿ���4���ֽ� 32������λ
////aռ��1������λ��bռ��5����cռ��10�� ��ʱ�Ѿ�ռ��17����
////��ʣ15������d��λ�ã����Ի�ֱ���ٿ���4���ֽڸ�dʹ��
////��һ��ռ��8�ֽ�




struct S
{                //���ʱ�Ǵ���������
	char a : 3;//�ȿ���һ���ֽ�8������λ��aռ3��
	char b : 4;//Ȼ�����b��bռ4������һ������
	char c : 5;//�ٿ���һ���ֽڣ�����5�����أ���ʣ3������d���
	char d : 4;//�ٿ���һ���ֽڣ�����4������
};
int main()
{
	struct S s = { 0 };
	           
	s.a = 10;//1010  aֻ�ܽ���3����ֻ���010
	s.b = 20;//10100 bֻ����4����ֻ���0100
	s.c = 3;//0011 c����5������0 ���00011
	s.d = 4;//0100 d����4�������0100
	//�ڴ�ÿ�ĸ�������ʾһλ
	//�����ڴ��д洢Ϊ 22  03  04
	return 0;
}