#include"SeqList.h"

void test01()
{
	SL s1;
	SeqListInit(&s1);
	SeqListPushBack(&s1, 1);
	SeqListPushBack(&s1, 2);
	SeqListPushBack(&s1, 3);
	SeqListPushBack(&s1, 4);

	SeqListPrint(&s1);
	
	SeqListPushFront(&s1, 1);
	SeqListPushFront(&s1, 2);
	SeqListPushFront(&s1, 3);
	SeqListPushFront(&s1, 4);
	SeqListPrint(&s1);

	SeqListPopFront(&s1);
	SeqListPrint(&s1);

}
int removeElement(int* nums, int numsSize, int val)
{
	/*printf("%d", *(nums + 1));
	printf("%d", *(nums) + 1);
	printf("%d", *nums + 1);
	printf("%d", nums[1]);

	*nums + 1 = 10;
	printf("%d", *(nums + 1));*/

	int first = 0,second = 0;
	while (second < numsSize)
	{
		if (*(nums + second) != val)
		{
			*(nums + first) = *(nums + second);
			second++;
			first++;
		}
		else
		{
			second++;
		}
	}
	printf("%d ",first);
	for (int i = 0; i < first;i++)
	{
		printf(" %d", nums[i]);
	}
}
void test02()
{
	int nums[] = { 0,1,2,2,3,0,4,2 };
	removeElement(&nums,8,2);
}
int main()
{
	//test01();
	test02();
	return 0;
}