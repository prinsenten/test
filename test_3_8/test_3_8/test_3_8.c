#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int tmp = 0;
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("a=%d b=%d", a, b);
//	return 0;
//}

//void Swap(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp =*pa;
//	*pa= *pb;
//	*pb= tmp;
//}//����������10��20 x��y�����˵���a��bû�н���
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	Swap(&a,&b);
//	printf("a=%d b=%d", a, b);
//	return 0;
//}

//
//int binary_search(int arr[], int k,int sz)//���鴫�β������������ arrʵ��Ϊ��ָ��
//{
//	//int sz = sizeof(arr) / sizeof(arr[0]);//ֻ��������Ԫ�ص�ַ
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret=binary_search(arr, k,sz);//binary�����Ƶ���˼ ��arr�в���k
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}



//
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%num=%d\n", num);
//	Add(&num);
//	printf("%num=%d\n", num);
//	Add(&num);
//	printf("%num=%d\n", num);
//	return 0;
//}
//
//
//

menu()
{
	printf("*****************************************\n");
	printf("****      1.play         0.exit      ****\n");
	printf("*****************************************\n");
}
void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;
	while (1)
	{
		printf("������:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		if (guess < ret)
		{
			printf("��С��\n");
		}
		if (guess == ret)
		{
			printf("�¶���\n");
			break;
		}
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("��ѡ��:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("����Ƿ�����������\n");
			break;
		}
	
	} while (input);
}
int main()
{
	test();
	return 0;
}
