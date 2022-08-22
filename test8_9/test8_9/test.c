//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
////
////
////typedef struct Queue
////{
////	int* data;
////	int head, tail;
////	int length,cnt;
////}Queue;
////
////Queue* init(int n)
////{
////	Queue* q = (Queue*)malloc(sizeof(Queue));
////	q->data = (int*)malloc(sizeof(int) * n);
////	for (int i = 0; i < n; i++)
////	{
////		q->data[i] = 0;
////	}
////	q->head = q->tail =q->cnt= 0;
////	q->length = n;
////
////	return q;
////}
////
////int empty(Queue* q)
////{
////	return q->cnt==0;//¿Õ¾Í·µ»Ø1 
////}
////
////int push(Queue* q,int val)
////{
////	if (q == NULL)
////		return 0;
////	if (q->tail == q->length)
////		return 0;
////	q->data[q->tail++] = val;
////	if (q->tail == q->length)
////		q->tail -= q->length;
////	q->cnt++;
////	return 1;
////}
////
////int front(Queue* q)
////{
////	return q->data[q->head];
////}
////int pop(Queue* q)
////{
////	if (q == NULL)
////		return 0;
////	if (empty(q))
////		return 0;
////	q->head++;
////	if (q->head == q->length)
////		q->head -= q->length;
////	q->cnt--;
////	return 1;
////
////}
////
////void clear(Queue* q)
////{
////	if (q == NULL)
////		return 0;
////	free(q->data);
////	free(q);
////
////}
////
////void output(Queue* q)
////{
////	printf("[");
////	for (int i = q->head,j=0; j<q->cnt; j++)
////	{
////		int ind = (i + j) % q->length;
////		printf(" %d", q->data[ind]);
////	}
////	printf("]\n");
////
////}
////int main()
////{
////	srand(time(0));
////	Queue* q = init(20);
////
////	/*if (empty(q))
////	printf("¿Õ\n");
////	else
////	printf("·Ç¿Õ\n");
////
////	push(q, 1);
////	push(q, 2);
////	push(q, 3);
////	output(q);
////
////	if (empty(q))
////		printf("¿Õ\n");
////	else
////		printf("·Ç¿Õ\n");
////
////	printf("head:%d\n", front(q));
////	
////	pop(q);
////	output(q);
////
////	printf("head:%d\n", front(q));
////
////	pop(q);
////	output(q);
////	printf("head:%d\n", front(q));
////
////	pop(q);
////	output(q);
////	printf("head:%d\n", front(q));
////
////	pop(q);
////	output(q);
////	printf("head:%d\n", front(q));
////
////	push(q, 3);
////	output(q);
////	printf("head:%d\n", front(q));*/
////
////	//for (int i = 0; i < 20; i++)
////	//{
////	//	int val = rand() % 100, op = rand() % 2;
////	//	switch (op)
////	//	{
////	//	case 0:
////	//		printf("push %d to Queue", val);
////	//		printf("=%d\n", push(q, val));
////	//		break;
////	//	case 1:
////	//		printf("pop %d to Queue", front(q));
////	//		printf("=%d\n", pop(q));
////	//		break;
////	//	}
////	//	output(q);
////	//}
////
////	printf("%d\n", 7 % 8);
////	printf("%d\n", 8 % 8);
////	printf("%d\n", 9 % 8);
////	return 0;
////}
//
//
//typedef struct stack
//{
//	int* data;
//	int top, size;
//}stack;
//
//stack* init(int n)
//{
//	stack* s = (stack*)malloc(sizeof(stack));
//	s->data = (int*)malloc(sizeof(int) * n);
//	s->size = n;
//	s->top = -1;
//	return s;
//}
//
//void clear(stack* s)
//{
//	if (s == NULL)
//		return;
//	free(s->data);
//	free(s);
//}
//
//int empty(stack* s)
//{
//	return s->top == -1;
//}
//
//int top(stack* s)
//{
//	if (empty(s))
//		return 0;
//	return s->data[s->top];
//}
//int push(stack* s,int val)
//{
//	if (s == NULL)
//		return 0;
//	if (s->top + 1 == s->size)
//		return 0;
//	s->top++;
//	s->data[s->top] = val;
//	return 1;
//}
//
//int pop(stack* s)
//{
//	if (s == NULL)
//		return;
//	if (empty(s))
//		return;
//	s->top--;
//	return 1;
//}
//void output(stack* s)
//{
//	for (int i = s->top;i>=0; i--)
//	{
//		printf(" %d ", s->data[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	stack* s = init(10);
//
//	if (empty(s))
//		printf("¿Õ\n");
//	else
//		printf("·Ç¿Õ\n");
//	push(s, 1);
//	push(s, 2);
//	push(s, 3);
//	output(s);
//	printf("head:%d\n", top(s));
//
//	pop(s);
//	pop(s);
//	pop(s);
//	pop(s);
//	pop(s);
//	output(s);
//	printf("head:%d\n", top(s));
//	push(s, 3);
//	output(s);
//	printf("head:%d\n", top(s));
//
//
//
//	return 0;
//}

