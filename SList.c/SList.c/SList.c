#include"SList.h"

void SListPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("\n");
}
SLTNode* BuyListNode(SLTDateType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	newnode->data = x;
	newnode->next = NULL;

}
void SListPushBack(SLTNode** pphead, SLTDateType x)
{
	SLTNode* newnode=BuyListNode(x);

	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		SLTNode* tail = *pphead;
		while (tail->next)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}
void SListPushFront(SLTNode** pphead, SLTDateType x)
{
	SLTNode* newnode = BuyListNode(x);

	newnode->next = *pphead;

	*pphead = newnode;
}
#include<assert.h>
void SListPopBack(SLTNode** pphead)
{
	//��prev������tail��ǰһ��λ��
	//��tail����ʱ�ͷ�tail prevָ��ռ���

	//ֱ�Ӵ���û������ķ���
	if (*pphead == NULL)
	{
		return;
	}
	//������û������ķ���
	/*assert(*pphead);
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}*/
	else 
	{
		SLTNode* tail = *pphead;
		SLTNode* prev = NULL;
		while (tail->next)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		tail = NULL;
		prev->next = NULL;

		//��ʹ����ָ��ķ����ж��Ƿ�Ϊ��ָ��
		/*SLTNode* tail = *pphead;
		while (tail->next->next)
		{
			tail = tail->next;
		}
		free(tail->next);
		tail->next = NULL;*/
	}
}