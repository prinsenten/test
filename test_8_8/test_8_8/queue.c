//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//#define MAX_OP 20
//
//typedef struct Queue
//{
//	int* data;
//	int length;
//	int tail;
//	int head;
//}Queue;
//
//Queue* init(int n)
//{
//	Queue* q = (Queue*)malloc(sizeof(Queue));
//	q->data = (int*)malloc(sizeof(int) * n);
//	q->head = q->tail = 0;
//	q->length = n;
//
//	return q;
//}
//int empty(Queue*q)
//{
//	return q->head == q->tail;
//}
//
//int front(Queue* q)
//{
//	return q->data[q->head];
//}
//
//int push(Queue* q, int val)
//{
//	if (q == NULL)
//		return 0;
//	if (q->tail == q->length)
//		return 0;
//	q->data[q->tail++] = val;
//	return 1;
//}
//
//int pop(Queue* q)
//{
//	if (q == NULL)
//		return 0;
//	if (empty(q))
//		return 0;
//	q->head++;
//	return 1;
//}
//
//void clear(Queue* q)
//{
//	if (q == NULL)
//		return;
//	free(q->data);
//	free(q);
//	return;
//}
//void output(Queue* q)
//{
//	printf("queue=[");
//	for (int i = q->head; i < q->tail; i++)
//	{
//		printf(" %d", q->data[i]);
//	}
//	printf("]\n");
//	return;
//}
//int main()
//{
//	srand(time(0));
//	Queue* q=init(MAX_OP);
//	for (int i = 0; i < MAX_OP; i++)
//	{
//		int val = rand() % 100, op = rand() % 2;
//		switch (op)
//		{
//		case 0:
//			printf("push %d to queue=%d\n", val, push(q,val));
//			break;
//		case 1:
//			printf("pop %d to queue=%d\n", front(q), pop(q));
//			break;
//		}
//		output(q);
//	}
//	
//	return 0;
//}
//
////typedef struct Queue
////{
////	int* data;
////	int head, tail;
////	int length;
////}Queue;
////
////Queue* init(int n)
////{
////	Queue* q = (Queue*)malloc(sizeof(Queue));
////	q->data = (int*)malloc(sizeof(int) * n);
////	q->head = q->tail = 0;
////	q->length = n;
////	return;
////}
////
////int main()
////{
////	Queue*q=init(MAX_OP);
////	return 0;
////}
//
//
////typedef struct sqstack
////{
////	int data[20];
////	int top;
////}sqstack;
////
////void initstack()
////{
////	
////}
////int main()
////{
////	sqstack* s;
////
////	return 0;
////}