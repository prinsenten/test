//#include<stdio.h>
//#include<stdlib.h>
//
//void print(int* arr, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void insertSort(int* arr, int len)
//{
//	for (int i = 1; i < len; i++)
//	{
//		for (int j = 0; j < i;j++)
//		{
//			if (arr[i] < arr[j])
//			{
//				int temp = arr[i];
//				for (int k = i-1; k >= j; k--)
//				{
//					arr[k + 1] = arr[k];
//				}
//				arr[j] = temp;
//			}
//		}
//	}
//}
//void test()
//{
//	int arr[] = { 1,4,3,2,9,7,8,6,5 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	insertSort(arr, len);
//	print(arr,len);
//}
//int main()
//{
//	test();
//	return 0;
//}