#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
//
//struct S
//{
//	int n;
//	int arr[0];//δ֪��С��-���������Ա-�����С�ǿ��Ե�����
//};
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//4 ֻ�е�һ��int��ֵ
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	ps->n = 100;//100��ֵ��n���ڴ���
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;//0 1 2 3 4 
//	}
//	struct S* ptr = realloc(ps, 44);//��arr����׷��Ԫ��
//	if (ptr == NULL)
//	{
//		ps = NULL;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ptr);
//	ptr = NULL;
//	return 0;
//}
//
//struct S
//{
//	int n;
//	int* arr;
//};
//int main()
//{        //��ps���ܵ�ַ
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	ps->arr = malloc(5 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ",ps->arr[i]);
//	}
//	//������ʱ ��һ���±���������׷�ӵ�ֵ�Ŀռ�
//	int* ptr = realloc(ps->arr, 10 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ptr);
//	ps->arr= NULL;//�Ƚ����鿪�ٵĿռ���Ϊ��ָ��
//	free(ps);
//	ps = NULL;//���ÿգ�����Ѱ�Ҳ���arr�Ŀռ�
//	return 0;
//}
#include<string.h>
#include<errno.h>
//int main()
//{
//	//���ļ�
//	// .-Ϊ��ǰ·��   ..-Ϊ�ϼ�·��
//	//fopen("test.txt", "r");//���·�������ڴ��ļ����£� ����r��-�򿪷�ʽ
//	FILE *pf=fopen("D:\\vs2019\\test_3_3\\test_3_3", "r");
//	//����·��-��Ӹ�\���Է�ֹ��ת��
//	if (pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	//�򿪳ɹ�
//	//��ȡ�ļ�
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

int main()
{
	FILE* pfWrite = fopen("TEST.txt", "w");
	if (pfWrite == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//д�ļ�
	fputc('t', pfWrite);
	fputc('h', pfWrite);
	fputc('e', pfWrite);
	//�ر��ļ�
	fclose(pfWrite);
	pfWrite = NULL;
	
	return 0;

}




