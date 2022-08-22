//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct List
//{
//	int* data;
//	int length;
//	int num;
//}List;
//
//List* initList(int length)
//{
//	List* list = (List*)malloc(sizeof(List));
//	list->data = (int*)malloc(sizeof(int) * length);
//	list->length = length;
//	list->num = 0;
//	return list;
//}
//void AddList(List* list, int data)
//{
//	list->data[list->num++] = data;
//
//}
//void printList(List* list)
//{
//	for (int i = 0; i < list->num; i++)
//	{
//		printf("%d ", list->data[i]);
//	}
//	printf("\n");
//}
//int binarySearch(List*list,int key)
//{
//	int start = 0,end=list->num-1;
//	int mid ;
//	while (start <= end)
//	{
//		int mid = (start + end) / 2;
//		if (list->data[mid] < key)
//		{
//			start = mid + 1;
//		}
//		else if (list->data[mid] > key)
//		{
//			end = mid - 1;
//		}
//		else
//			return mid;
//	}
//	return -1;
//}
////µİ¹éËã·¨
//int binarySearchRecursion(List* list, int key, int start, int end)
//{
//	if (start == end)
//	{
//		if (list->data[start] == key)
//			return start;
//		else
//			return -1;
//	}
//	int mid = (start + end) / 2;
//	if (list->data[mid] > key)
//	{
//		return binarySearchRecursion(list, key, start, mid - 1);
//	}
//	else if(list->data[mid] < key)
//	{
//		return binarySearchRecursion(list, key, mid + 1, end);
//	}
//	else
//		return mid;
//}
//int main()
//{
//	List* list=initList(9);
//	AddList(list, 1);
//	AddList(list, 2);
//	AddList(list, 3);
//	AddList(list, 4);
//	AddList(list, 5);
//	AddList(list, 6);
//	AddList(list, 7);
//	AddList(list, 8);
//	AddList(list, 9);
//	printList(list);
//	printf("%d \n", binarySearch(list, 5));
//	printf("%d \n", binarySearch(list, 7));
//
//	printf("%d \n", binarySearchRecursion(list, 5,0,list->num-1));
//	printf("%d \n", binarySearchRecursion(list, 7, 0, list->num - 1));
//	return 0;
//}