#define _CRT_SECURE_NO_WARNINGS 1\

#include<stdio.h>

//int Max(int* a, int* b, int* c)
//{
//	if (*a < *b)
//	{
//		int tmp = *a;
//		*a = *b;
//		*b = tmp;
//	}
//	if (*a < *c)
//	{
//		int tmp = *a;
//		*a = *c;
//		*c = tmp;
//	}
//	if (*b < *c)
//	{
//		int tmp = *b;
//		*b = *c;
//		*c = tmp;
//	}
//	return *a, *b, *c;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//
//	Max(&a, &b, &c);
//
//	printf("%d%d%d", a, b, c);
//	return 0;
//}

//int main()
//{
//	int i = 100;
//	while (i)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//		else if (i == 1)
//			printf("%d ", i);
//		i--;
//	}
//	return 0;
//}

//辗转相除法
//int main()
//{
//	int m = 24;
//	int n = 16;
//	int r = 0;
//	while (r = m % n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}

//int main()
//{
//	int arr[] = { -3,-2,-3,-4,-5,-6,-7,-8,-9 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flage = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flage * 1.0 / i;
//		flage = -flage;
//	}
//
//	return 0;
//}
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("**************************\n");
//	printf("**  1.game  **** 0.exit **\n");
//	printf("**************************\n");
//}
//void game()
//{
//	printf("开始游戏\n");
//	int ret = 0;
//	int guess;
//	ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("请输入数字:");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do 
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	} while (input);
//	
//	return 0;
//}

//int ADD(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = ADD(a, b);
//
//	printf("%d", sum);
//
//	return 0;
//}
//int main()
//{
//	printf("%d", 43);
//	printf("\n");
//	printf("%d", printf("%d", 43));
//	printf("\n");
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}
//void Add(int *p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);	
//	Add(&num);
//	printf("%d\n", num);
//
//	return 0;
//}
//
//int Facl(int x)
//{
//	int sum = 1;
//	while (x)
//	{
//		sum *= x;
//		x--;
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Facl(n);
//	printf("%d", ret);
//
//	return 0;
//}
 
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j+1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//
//}
//int main()
//{
//	int arr[] = { 8,7,6,5,4,3,9,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

