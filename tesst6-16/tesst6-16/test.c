#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int arr[3] = { &a,&b,&c };
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}

//����һ���������飺1.ʵ�ֺ���lnit��������ʼ������Ϊȫ0?
//
//2.ʵ��print��������ӡ����ÿ��Ԫ��
//
//3.ʵ��reverse���������������Ԫ�ص�����


void Init(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}
void reverse(int arr[], int sz)
{
	int left = 0;
	int right =  sz - 1;
	while (left <= right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//Init(arr,sz);
	reverse(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}