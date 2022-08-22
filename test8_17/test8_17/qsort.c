//////#include<stdio.h>
//////#include<stdlib.h>
//////
//////
//////void print(int arr[], int len)
//////{
//////	for (int i = 0; i < len; i++)
//////	{
//////		printf("%d ", arr[i]);
//////	}
//////	printf("\n");
//////}
//////
//////void quick_sort(int s[], int begin,int end )
//////{
//////	if (begin > end)
//////		return;
//////	int ref = s[begin];
//////	int i = begin, j = end;
//////	while (i != j)
//////	{
//////		while (s[j] >= ref)
//////			j--;
//////		while (s[i] <= ref)
//////			i++;
//////		if (i < j)
//////		{
//////			int tem = s[i];
//////			s[i] = s[j];
//////			s[j] = tem;
//////		}
//////	}
//////	s[begin] = s[i];
//////	s[i] = ref;
//////	quick_sort(s, begin, i-1);
//////	quick_sort(s, i + 1, end);
//////}
////////void Quick_Sort(int* arr, int begin, int end) {
////////    if (begin > end)
////////        return;
////////    int tmp = arr[begin];
////////    int i = begin;
////////    int j = end;
////////    while (i != j) {
////////        while (arr[j] >= tmp && j > i)
////////            j--;
////////        while (arr[i] <= tmp && j > i)
////////            i++;
////////        if (j > i) {
////////            int t = arr[i];
////////            arr[i] = arr[j];
////////            arr[j] = t;
////////        }
////////    }
////////    arr[begin] = arr[i];
////////    arr[i] = tmp;
////////    Quick_Sort(arr, begin, i - 1);
////////    Quick_Sort(arr, i + 1, end);
////////}
//////void test()
//////{
//////	int arr[9] = { 6,5,3,2,1,7,8,4,9 };
//////	int len = sizeof(arr)/sizeof(arr[0]);
//////	quick_sort(arr, 0, len-1);
//////	print(arr,9);
//////}
//////int main()
//////{
//////	test();
//////	return 0;
//////}
////
////#include<stdio.h>
////
////void print(int arr[], int len)
////{
////	for (int i = 0; i < len; i++)
////	{
////		printf("%d ", arr[i]);
////	}
////	printf("\n");
////}
////void quicksort(int arr[], int i, int j)
////{
////	if (i < j)
////		return ;
////	int ref = arr[i];
////	int x = i, y = j;
////	while (i < j)
////	{
////		while (arr[j] < x && i < j)
////		{
////			j--;
////		}
////		while (arr[i] > x && i < j)
////		{
////			i++;
////		}
////		if (i < j)
////		{
////			int temp = arr[i];
////			arr[i] = arr[j];
////			arr[j] = temp;
////		}
////	}
////		s[begin] = s[i];
////	s[i] = ref;
////	quicksort(s, begin, i-1);
////	quicksort(s, i + 1,);
////}
////int main()
////{
////	int arr[] = { 4,3,2,6,7,8,9,1,5 };
////	quicksort(arr, 0, 9);
////	pint(arr, 9);
////	return 0;
////}
//
//
//#include<stdio.h>
//void print(int arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void bulleSort(int* arr, int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	print(arr, len);
//}
//void test()
//{
//	int arr[] = { 4,3,2,6,7,8,9,1,5 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	bulleSort(arr, len);
//}
//int main()
//{
//	test();
//	return 0;
//}