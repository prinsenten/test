#pragma once
#include<stdio.h>

typedef int SLTDateType;

typedef struct SListNodae
{
	SLTDateType data;
	struct SListNode* next;
}SLTNode;

void SListPrint(SLTNode* phead);
void SListPushBack(SLTNode* phead,SLTDateType x);