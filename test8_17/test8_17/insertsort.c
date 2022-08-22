#include<stdio.h>


void insertSort(int arr[], int len)
{
	for (int i = 1; i < len; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[i] < arr[j])
			{
				int temp = arr[i];
				for (int k = i - 1; k >= j; k--)
				{
					arr[k + 1] = arr[k];
				}
				arr[j] = temp;
			}
		}
	}
}

void print(int* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[] = { 4,3,2,9,7,6,5,8,1 };
	insertSort(arr, 9);
	print(arr, 9);
	return 0;
}