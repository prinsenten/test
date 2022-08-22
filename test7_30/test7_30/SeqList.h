#pragma once
#define N 1000
typedef int SLDataType;
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//静态
//typedef struct SeqList
//{
//	SLDataType a[N];
//	int size;//表示目前存了多少
//}SL;
//动态
typedef struct SeqList
{
	SLDataType *a;
	int size;//表示目前存了多少
	int capacity;//数组实际能存储数据的空间容量有多大
}SL;

void SeqListInit(SL* ps);
void SeqListPrint(SL* ps);
void SeqListDestory(SL* ps);
void SeqListCheckCapacity(SL* ps);
void SeqListPushBack(SL* ps, SLDataType x);
void SeqListPopBack(SL* ps);
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);

int SeqListFind(SL* ps, SLDataType x);
void SeqListInsert(SL* ps, int pos, SLDataType x);
void SeqListErase(SL* ps, int pos);