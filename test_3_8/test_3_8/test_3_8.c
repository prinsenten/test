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
//}//输出结果还是10和20 x和y交换了但是a，b没有交换
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
//int binary_search(int arr[], int k,int sz)//数组传参不能用这个方法 arr实际为个指针
//{
//	//int sz = sizeof(arr) / sizeof(arr[0]);//只传递了首元素地址
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
//	int ret=binary_search(arr, k,sz);//binary二进制的意思 在arr中查找k
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
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
		printf("猜数字:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		if (guess == ret)
		{
			printf("猜对了\n");
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
		printf("请选择:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("输入非法，重新输入\n");
			break;
		}
	
	} while (input);
}
int main()
{
	test();
	return 0;
}
