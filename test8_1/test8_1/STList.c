#include"STList.h"


void STListInit(STL* phead)
{
	phead->Data = 0;
	phead->next = NULL;

}
void STLPrint(STL* phead)
{
	STL* cur = phead;
	while (cur != NULL)
	{
		printf(" %d-> ", cur->Data);
		cur=cur->next;
	}
	printf("\n");
}
STL* BuyList(int x)
{
	STL* newnode = (STL*)malloc(sizeof(STL));

	newnode->Data = x;
	newnode->next = NULL;

	if (newnode == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	return newnode;
}
void STListPushBack(STL** pphead, int x)
{
	STL* newnode = BuyList(x);

	if (*pphead==NULL)
	{
		*pphead = newnode;
	}
	else
	{
		STL* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}


}
void STListPopBack(STL** pphead)
{
	if (*pphead == NULL)
	{
		return;
	}
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		STL* tail = *pphead;
		while (tail->next->next != NULL)
		{
			tail = tail->next;
		}
		free(tail->next);
		tail->next = NULL;
	}
}
void STListPushFront(STL** pphead, int x)
{
	STL* newnode = BuyList(x);

	newnode->next = *pphead;
	*pphead = newnode;
}

void STListPopFront(STL** pphead)
{
	if (*pphead == NULL)
	{
		return;
	}
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		STL* prev = *pphead;
		*pphead = prev->next;
		free(prev);
		prev = NULL;
		
	}
}
STL* SListFind(STL* phead, int x)
{
	STL* cur = phead;
	while (cur)
	{
		if (cur->Data == x)
		{
			return cur;
		}
		else
		{
			cur = cur->next;
		}
	}
	return NULL;
}
void SListEase(STL** pphead, STL* pos)
{

	if (*pphead==pos)
	{
		*pphead = pos->next;
		free(pos);
	}
	else
	{
		STL* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = pos->next;
	}
}
void SListInsert(STL** pphead, STL* pos, int x)
{
	STL* newnode = BuyList(x);
	if (*pphead == pos)
	{
		newnode->next = *pphead;
		*pphead = newnode;
	}
	STL* posprev = *pphead;
	while (posprev->next != pos)
	{
		posprev = posprev->next;
	}
	posprev->next = newnode;
	newnode->next = pos;
}
void SListDestroy(STL** pphead);
void SListInsertAfter(STL* pos, int x)
{
	STL* newnode = BuyList(x);

	newnode->next = pos->next;
	pos->next = newnode;
}