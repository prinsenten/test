#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
//例如：ABCD左旋一个字符串得到BCDA
//
//ABCD左旋两个字符串得到CDAB
//
//暴力求解法
//void left_Move(char* a, int n)
//{
//	int i = 0;
//	int len = strlen(a);
//	for (i = 0; i < n; i++)
//	{
//		char tmp = *a;
//		int j = 0;
//		for (j = 0; j < len-1; j++)
//		{
//			*(a+j) = *(a + j+1);
//		}
//		*(a + len - 1) = tmp;
//	}
//}
//int main()
//{
//	char a1[] = "ABCDEF";
//	int input = 0;
//	scanf("%d", &input);
//	left_Move(a1,input);
//	printf("%s\n", a1);
//	return 0;
//}
//#include<assert.h>
//void reverse(char* left, char* right)
//{
//	assert(left && right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_Move(char* a, int n)
//{
//	int len = strlen(a);
//	reverse(a,a+n-1);
//	reverse(a+n, a+len-1);
//	reverse(a, a+len-1);
//
//}
//int main()
//{
//	char a1[] = "ABCDEF";
//	int input = 0;
//	scanf("%d", &input);
//	left_Move(a1, input);
//	printf("%s\n", a1);
//	return 0;
//}