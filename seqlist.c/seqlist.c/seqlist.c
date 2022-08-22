#include"seqlist.h"

#include<assert.h>

void SeqListPrintf(SL* ps)
{
	for (int i = 0; i <ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}
void SeqListInit(SL* ps)
{
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}
void SeqListPushBack(SL* ps, SLDataType x)
{
	//进行扩容
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newcapacity * sizeof(SLDataType));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newcapacity;
	}
	ps->a[ps->size] = x;
	ps->size++;
}
void SeqListDestory(SL* ps)
{
	free(ps->a);
	ps ->a= NULL;
	ps->capacity = ps->size = 0;
}
void SeqListPopBack(SL* ps)
{
	/*if (ps->size > 0)
	{
		ps->size--;
	}*/
	assert(ps->size > 0);
	ps->size--;
}
void SeqListPushFront(SL* ps, SLDataType x)
{
	//挪动数据
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[0] = x;
	ps->size++;
}
void SeqListPoPFront(SL* ps);