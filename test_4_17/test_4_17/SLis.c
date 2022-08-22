#include"SList.h"

void SListPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
}
void SListPushBack(SLTNode* phead, SLTDateType x)
{
	SLTNode* tail = phead;
	while (tail)
	{
		tail = tail->next;
	}

	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	newnode->data = x;
	newnode->next = NULL;
}