//#include<stdio.h>
//void print(int* arr, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void shellSort(int *arr,int len,int step)
//{
//	for (int i = 0; i < len; i++)
//	{
//		for (int j = i + step; j < len; j+=step)
//		{
//			for (int k = i; k < j; k += step)
//			{
//				if (arr[j] < arr[k]){
//					int temp = arr[j];
//					for (int l = j - step; l >= k; l -= step)
//					{
//						arr[l + step] = arr[l];
//					}
//					arr[k] = temp;
//				}
//			}
//		}
//	}
//	print(arr, 10);
//}
//int main()
//{
//	int arr[10] = { 49,38,65,97,76,13,27,49,55,4 };
//	int step[3] = {5,3,1};
//	for (int i = 0; i < 3; i++)
//	{
//		shellSort(arr, 10, step[i]);
//	}
//	return 0;
//}