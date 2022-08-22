#define _CRT_SECURE_NO_WARNINGS 1
 
#include<stdio.h>
//void rotate(int* nums, int numsSize, int k) {
//    int arr1[numsSize];
//    for (int i = 0; i < k; i++)
//    {
//        arr1[0] = nums[numsSize - 1];
//        for (int j = 1; j < numsSize; j++)
//        {
//            arr1[j] = nums[j - 1];
//        }
//        for (int n = 0; n < numsSize; n++)
//        {
//            nums[n] = arr1[n];
//        }
//
//    }
//}
//int main()
//{
//    int nums[] = { 1,2,3,4,5,6,7 };
//    int k = 3;
//    int numsSize = sizeof(nums) / sizeof(nums[0]);
//    rotate(nums, numsSize, k);
//    for (int i = 0; i < numsSize; i++)
//    {
//        printf("%d ", nums[i]);
//    }
//	return 0;
//}
//int containsDuplicate(int* nums, int numsSize) {
//    if (numsSize < 2)
//        return 0;
//    int* slow = nums[0];
//    int* fast = nums[1];
//    while (*slow != 0)
//    {
//        while (*fast != 0)
//        {
//            if (*slow == *fast)
//            {
//                return 1;
//            }
//            *fast++;
//        }
//        *slow++;
//    }
//
//}
//int main()
//{
//    int arr[] = { 1,2,3,4 };
//    int numsSize = sizeof(arr) / sizeof(arr[0]);
//    int tmp=containsDuplicate(arr, numsSize);
//    printf("%d", tmp);
//    return 0;
//}
//void moveZeroes(int* nums, int numsSize) {
//    int left = 0, right = 1;
//    while (right < numsSize)
//    {
//
//        if (nums[left] != 0 && nums[right] != 0)
//        {
//            left++;
//            right++;
//        }
//        else if (nums[left] == 0 && nums[right] != 0)
//        {
//            nums[left] = nums[right];
//            left++;
//            right++;
//        }
//        else if (nums[left] == 0 && nums[right] == 0)
//        {
//            right++;
//        }
//        else if (nums[left] != 0 && nums[right] == 0)
//        {
//            right++;
//        }
//
//    }
//    for (int i = left; i < numsSize; i++)
//    {
//        nums[i] = 0;
//    }
//}
//int main()
//{
//    int arr[] = { 0,1,0,3,12 };
//    int numsSize = sizeof(arr) / sizeof(arr[0]);
//    moveZeroes(arr, numsSize);
//    return 0;
//}
#include<math.h>
int main()
{
	int arr[] = { 1,2,3,4,5 };
	int sz = 5;
	int count = sz-1;
	int sum = 0;
	for (int i = 0; i < sz; i++)
	{
		sum += (int)pow(10, count)*arr[i];
		count--;
	}

	printf("%d", sum);
	
	return 0;
}