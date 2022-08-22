#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int removeDuplicates(int* nums, int numsSize) {
//    int count = 1;
//    int left = 0;
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (*nums == *(nums + 1))
//        {
//            n
//        }
//    }
//    while (*nums != 0)
//    {
//        if (*nums == *nums + 1)
//        {
//            *nums + 1 = *nums + 2;
//        }
//        else
//        {
//            count++;
//        }
//        *nums++;
//    }
//    return count, nums;
//}
//int main()
//{
//    int arr[] = { 1,1,2 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    removeDuplicates(arr, sz);
//    return 0;
//}
//在数组中找到最小值,找到数组下标
int main()
{
	int arr[] = { 2,3,4,6,5,7,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int min = arr[0];
	int index = 0;
	for (int i = 1 ; i < sz; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
			index = i;
		}

	}
	printf("%d,%d", min,index);
	return 0;
}