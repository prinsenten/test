#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a','b','c'};
//	printf("%d\n",strlen(arr1));
//	printf("%d\n",strlen(arr2));
//
//	return 0;
//}
//void test(int n)
//{
//	if (n % 2 != 0)
//		printf("为奇数");
//	else
//		printf("为偶数");
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	test(n);
//	return 0;
//}
//int main()
//{
//	//int n = 0;
//	//scanf("%d",&n);
//	//if (n % 2 != 0)
//	//	printf("为奇数");
//	//else
//	//	printf("为偶数");
//	int i = 100;
//	int count = 0;
//	while (i--)
//	{
//		if (i % 2 != 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d", count);
//	return 0;
//}
//
//int main()
//{
//	/*int a = 10;
//	int b = a++;
//	printf("%d,%d", b,a);*/
//	int ch = 0;
//	while((ch=getchar())!=EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码：>");
//	scanf("%s", password);
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("success");
//	}
//	else
//		printf("defead");
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//
//	//int n = 0;
//	//int ret = 1;
//	//scanf("%d", &n);
//	//for (int i = 1; i <=n; i++)
//	//{
//	//	ret = ret*i;
//	//
//	//}
//	//printf("%d", ret);
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	while (--n)
//	{
//		ret = ret * n;
//		
//	}
//	printf("%d", ret);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	while (n)
//	{
//		int ret = 1;
//		for (int i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		n--;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}\

//int main()
//{
	//int arr[] = { 1,2,3,4,5,6,7,8,9 };
	//int ret = sizeof(arr) / sizeof(arr[0]);
	//int k = 0;
	//scanf("%d", &k);
	//for (int i = 0; i < ret; i++)
	//{
	//	if (arr[i] == k)
	//	{
	//		printf("%d", i);
	//		break;
	//	}
	//}
//	int arr[] = { 1,2,3,4,5,6,8,9 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("not found");
//	}
//
//	return 0;
//}
 
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int left = 0;
//	int right = sz - 2;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	return 0;
//}
//int main()
//{
//	char password[20] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password ,"123456")==0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//	}
//	if (i == 3)
//		printf("三次错误登录失败\n");
//
//	return 0;
//}

