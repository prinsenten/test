#include"seqlist.h"

void TestSeqList1()
{
	SL s1;
	SeqListInit(&s1);
	SeqListPushBack(&s1, 1);
	SeqListPushBack(&s1, 2);
	SeqListPushBack(&s1, 3);
	SeqListPushBack(&s1, 4);
	SeqListPushBack(&s1, 5);

	SeqListPrintf(&s1);
}
void TestSeqList2()
{
	SL s1;
	SeqListInit(&s1);
	SeqListPushBack(&s1, 1);
	SeqListPushBack(&s1, 2);
	SeqListPushBack(&s1, 3);
	SeqListPushBack(&s1, 4);
	SeqListPushBack(&s1, 5);
	SeqListPrintf(&s1);

	SeqListPushFront(&s1, 10);
	SeqListPushFront(&s1, 20);
	SeqListPushFront(&s1, 30);
	SeqListPrintf(&s1);
	
	SeqListPoPFront(&s1);
	SeqListPoPFront(&s1);
	SeqListPopBack(&s1);
	SeqListPopBack(&s1);
	SeqListPrintf(&s1);

	SeqListDestory(&s1);

}

int main()
{
	//TestSeqList1();
	TestSeqList2();

	return 0;
}