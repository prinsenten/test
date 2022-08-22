#pragma once

#include<stdio.h>
#include<stdlib.h>



typedef struct SListNode
{
	int data;
	struct SListNode* next;
}SLTNode;


void SListPrint(SLTNode* phead);
void SListPushBack(SLTNode** pphead,int x);
void SListPushFront(SLTNode** pphead,int x);
void SListPopBack(SLTNode** pphead);
void SListPopFront(SLTNode** pphead);