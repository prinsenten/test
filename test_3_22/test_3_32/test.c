#define _CER_SECUER_NO_WARNINGS

#include<stdio.h>
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//��������
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������
//		int j = 0;
//		for (j = 0; j < sz - 1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	char ch = "w";
//	void* p = &a;//void*���Խ����������͵ĵ�ַ
//	*p = 0;//void*���Ͳ��ܽ��н����ò���
//	p++;// void* ����ָ��Ҳ���ܽ��мӼ������Ĳ���
//	p = &ch;
//
//	return 0;
//}
//
//
#include<stdlib.h>
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int cmp_float(const void* e1, const void* e2)
//{
//	if (*(float*)e1 == *(float*)e2)
//		return 0;// ��Щ�Ƚ�����Ϊqsort�� �涨������
//	else if (*(float*)e1 > *(float*)e2)
//		return 1;
//	else
//		return -1;
//}//e1 e2 ����void*���ͣ�����ֱ�ӽ����� Ҫ��ǿ������ת��
//void test2()
//{
//	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%f ", f[j]);
//	}
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}
//#include<string.h>
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}//������Ƚ�
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}//�Ƚ����־��ǱȽ��ַ���
////�ַ����Ƚϲ���ֱ����<>=���Ƚϣ�Ҫ��strcmp����
//void test()
//{
//	struct Stu s[3] = { {"wlm",25},{"zjr",21},{"lmt",10}};
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);//����������
//
//}
//int main()
//{
//	test();
//	return 0;
//}
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void* base, int sz, int width, int(*cmp)(void* e1, void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
		}//��width���úܺõĿ����������ֽڣ�char*�Ȱ�baseǿ��ת��Ϊ1�ֽڵ��ֽ��� Ȼ�����ʵ�ʲ������ͳ�j
	}//Swap���н���
}
void test1()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
}
int main()
{
	test1();
	return 0;
}











