#include"SList.h"

SLTNode* BuyListNode(int x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	newnode->data = x;
	newnode->next = NULL;

	if (newnode == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	return newnode;
}
void SListPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur=cur->next;
	}
}
void SListPushBack(SLTNode** pphead, int x)
{
	SLTNode* newnode = BuyListNode(x);

	if(*pphead==NULL)
	{
		*pphead = newnode;
	}
	else
	{
		SLTNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		tail->next = newnode;
	}
}
void SListPushFront(SLTNode** pphead,int x)
{
	SLTNode* newnode = BuyListNode(x);

	newnode->next = *pphead;

	*pphead = newnode;

}
void SListPopBack(SLTNode** pphead)
{
	if (*pphead == NULL)
	{

	}
	else
	{
		SLTNode* tail = *pphead;
		while (tail->next->next != NULL)
		{
			tail = tail->next;
		}
		free(tail->next);
		tail->next = NULL;
	}
}
void SListPopFront(SLTNode** pphead);