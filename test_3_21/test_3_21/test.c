


#include<stdio.h>

//
//void test(int arr[])// ����  ������һ�� ����ȡ�׵�ַ
//{}
//void test(int arr[10])//���� �����10 д��дһ�� ��Ӱ��
//{}
//void test(int* arr)//���� 
//{}
//void test2(int *arr2[20])//���� һά���鴫�ο���д�������ָ��
//{}
//void test2(int **arr2)//����
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//}



//void test(int arr[3][5])//��
//{}
//void test(int arr[][5])//�п���ʡ�ԣ��в���ʡ��
//{}


//void test(int *arr)//err ��Ԫ���ǵ�һ��Ϊһά����
//{}
//void test(int **arr)//err
//{}
//void test(int (*arr)[5])//�� 
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}
//

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int (*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(3, 3));
//	return 0;
//}

//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void (*p)(char*) = Print;
//	(*p)("hello world");
//	return 0;
//}


////����1
//     (*(void(*)())0)();
//     //void(*)()-����ָ������  ��0����ĳ�����ĵ�ַ 
//     //��0ǿ������ת��  ( void(*)()  ��0
//     //(*( void(*)���� �� 0��  ����  �����õ��ú���
//     //�˴�����һ�κ�������
//      
////����2
//     void(*signal(int, void(*)(int)))(int);
//     //         �������� ����ָ�����ͣ�
//     //void(*                       )(int)---����ָ��
//     //signal��һ����������
//    //signal�����Ĳ�������������һ����int,�ڶ����Ǻ���ָ�룬
//    //�ú���ָ��ָ��ĺ����Ĳ�����int������������void
// //signal�ķ�������Ҳ��һ������ָ�룬�ú���ָ��ָ��int ��������void
//
//     typedef void(*pfun_t)(int);//ok
//     pfun_t signal(int, pfun_t);//����������һ��ʹ���2һ��
//
//     typedef void(*)(int) pfun_t;//err ����ָ�����Ͳ�����ô����
//     
//     typedef unsigned int uint;//ok



//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int (*pa)(int, int) = Add;
//	printf("%d\n", (pa)(3, 3));
//	printf("%d\n", Add(3, 3));
//	printf("%d\n", (*pa)(3, 3));
//	printf("%d\n", (**pa)(3, 3));
//	printf("%d\n", (***pa)(3, 3));
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x /y;
//}
//int main()
//{
//	int arr[5];
//	int (*pa)(int, int) = Add;//����ָ��
//	int (*parr[4])(int, int) = { Add,Sub,Mul,Div };//����ָ������
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", parr[i](2, 3));
//	}
//	return 0;
//}


//char* my_strcpy(char* dest, const char* src);
////1.дһ������ָ��pf���ܹ�ָ��my_strcpy
////2.дһ������ָ������ pfArr���ܹ����4��my_strcpy�ĺ�����ַ
//
//int main()
//{
//	char* (*pf)(char*,const char*) = my_strcpy;
//	char* (*pfArr[4])(char*,const char*) = { my_strcpy };
//	
//	return 0;
// }
//
//void Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("����������������:");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));//��pfָ��Ӽ��˳�����
//}
//int main()
//{
//	int input = 0;
//	do 
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1://���ûص������Ͳ�����ÿ��case���涼�����������������
//			Calc(Add);   //��Ϊ������ֻ�����ȡ�����㲻һ��ǰ����ʾ��һ��
//			break;
//		case 2:
//			Calc(Sub);
//		}
//	} while (input);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//ȡ�������ַ
//	
//	int(*pf)(int, int);//����ָ��
//	int (*pfArr[4])(int, int);//pfArr��һ�����飬����ָ������
//	int (*(*ppfArr)[4])(int, int) = &pfArr;
//	//ppfArr��һ������ָ�룬ָ��ָ���������4��Ԫ��
//	//ָ��������ÿ��Ԫ��������һ������ָ��int(*)(int,int)
//	return 0;
//}



void print(char* str)
{
	printf("hehe:%s", str);
}
void test(void(*p)(char*))
{
	printf("test\n");
	p("bit");//pΪ�ص�����   ������print����
}
int main()
{
	test(print);
	return 0;
}