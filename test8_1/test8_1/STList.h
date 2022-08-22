#pragma once
#include<stdio.h>
#include<stdlib.h>

typedef struct STList
{
	struct STList* next;
	int Data;
}STL;

void STLPrint(STL* phead);


void STListInit(STL* phead);
void STListPushBack(STL** pphead,int x);
void STListPopBack(STL** pphead);
void STListPushFront(STL** pphead, int x);
void STListPopFront(STL** pphead);

STL* SListFind(STL* phead, int x);
void SListEase(STL** pphead, STL* pos);
void SListInsert(STL** pphead, STL* pos, int x);
void SListInsertAfter(STL* pos, int x);
void SListDestroy(STL** pphead);