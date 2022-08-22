#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//
//	pa++;
//	printf("%s\n", *pa);
//
//	return 0;
//}
//
//int main()
//{
//	char* p = "abcdef"; //字符指针只存常量字符串首字符地址
//	return 0;
//}

//int main()
//{
//	char* c[] = { "ENTER","NWE","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//
//	printf("%s\n", **++cpp);// POINT
//	printf("%s\n", *-- * ++cpp + 3);//ER
//	printf("s\n", *cpp[-2] + 3);//ST
//	printf("%s\n", cpp[-1][-1] + 1);//EW
//}

//#include<assert.h>
//void reverse(char* str)
//{
//	assert(str);
//	int len = strlen(str);
//	char* left = str;//指向首元素
//	char* right = str + len-1;//最后一个元素地址
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[256] = { 0 };
////	scanf("%s", arr);//abcdef-->fedcba scanf 中间有空格不能读取
//	gets(arr);//gets可以读取一行
//	//可以逆序arr
//	reverse(arr);
//	printf("%s\n", arr);//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);// 2 5
//	//2 22 222 2222 22222
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//判断i是否为水仙花数（自幂数）
//		//1.计算i的位数     n位数
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp /= 10)
//		{  
//			n++;
//		}
//		//2.计算i的每一位n次方之和   sum
//		tmp = i;
//		while (tmp)
//		{
//			sum+=pow(tmp % 10, n);//求次方
//			tmp /= 10;
//		}
//		//3.比较i和sum
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}






//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************  7
// ***********        11
//  *********          9
//   *******
//    *****
//	   ***             3
//	    *              1
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);//菱形是奇数行 ，用line控制上半部分
//	//打印上半部分
//	int i = 0;
//	for (i = 0; i < line ;i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j <line-1-i ; j++)
//		{
//			printf(" ");
//		}
//		//打印*号
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <=i ; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <2*(line-1-i)-1 ; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	//买回来的汽水
//	total = money;//有多少钱就可以买多少瓶
//	empty = money;
//	//换回来的汽水
//	while (empty >= 2) 
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("total= %d\n", total);
//	return 0;
//}




//int main()
//{
//	int a = 9;
//	int b = 9 / 2;
//	printf("%d", b);
//	return 0;
//}


void print(int arr[], int sz)
{
	int i =0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void move(int arr[], int sz)//从左边找一个偶数，从左找一个奇数交换
{
	int left = 0;
	int right = sz - 1;
	while (left<right)
	{
		//从左找偶数
		while ((left<right)&&arr[left] % 2 == 1)
		{
			left++;
		}
		while ((left<right)&&arr[right] % 2 == 0)
		{
			right--;
		}
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
int main()
{
	int arr[] = {1,2,3,4,5,5,5,5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr,sz);
	print(arr, sz);
	return 0;
}







