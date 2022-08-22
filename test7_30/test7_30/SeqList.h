#pragma once
#define N 1000
typedef int SLDataType;
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//��̬
//typedef struct SeqList
//{
//	SLDataType a[N];
//	int size;//��ʾĿǰ���˶���
//}SL;
//��̬
typedef struct SeqList
{
	SLDataType *a;
	int size;//��ʾĿǰ���˶���
	int capacity;//����ʵ���ܴ洢���ݵĿռ������ж��
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