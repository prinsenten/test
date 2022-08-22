//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct List
//{
//	int* data;
//	int num;
//	int length;
//}List;
//
//List* initList(int length)
//{
//	List* (list) = (List*)malloc(sizeof(List));
//	list->length = length;
//	list->data = (int*)malloc(sizeof(int) * length);
//	list->num = 1;
//	return list;
//}
//
//void Addlist(List* list, int data)
//{
//	list->data[list->num++] = data;
//}
//void printList(List* list)
//{
//	for (int i = 0; i < list->num; i++)
//	{
//		printf("%d->", list->data[i]);
//	}
//	printf("NULL\n");
//}
//
//int searchList(List*list,int data)
//{
//	/*for (int i = 0; i < list->length; i++)
//	{
//		if (list->data[i] == data)
//			return i;
//	}
//	return -1;*/
//	int i;
//	list->data[0] = data;
//	for (i = (list->num) - 1; list->data[i] != data; i--);
//	return i;
// 
//}
//
//int main()
//{
//	List* list = initList(5);
//	Addlist(list, 1);
//	Addlist(list, 2);
//	Addlist(list, 3);
//	Addlist(list, 4);
////	printf("%d\n", searchList(list, 4));
//
//	printList(list);
//	return 0;
//}