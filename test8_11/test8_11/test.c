#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//
//
//
//void test()
//{
//	int chess[8][8] = {0};
//	for (int i = 0; i < 8; i++)
//	{
//		for (int j = 0; j < 8; j++)
//		{
//			printf("  %d  ", chess[1][1]);
//
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//
//	test();
//	return 0;
//}
//#include <stdio.h>
//#define N 20       //�ʺ������
//int q[N];          //���лʺ����ڵ���
//int count = 0;     //ͳ��N�ʺ������ĸ���
//
////��� N �ʺ�����Ľ������
//void print(int n)
//{
//    int i, j;
//    count++;
//    printf("��%d���⣺\n", count);
//    for (i = 1; i <= n; i++)        //��
//    {
//        for (j = 1; j <= n; j++)   //��
//        {
//            if (q[i] != j)
//                printf(" x ");
//            else
//                printf(" Q ");
//        }
//        printf("\n");
//    }
//    printf("\n");
//}
////�����k�е�j�����Ƿ���԰ڷŻʺ�
//int isSafe(int k, int j)
//{
//    int i;
//    for (i = 1; i < k; i++) {
//        //����������ʺ�λ��ͬһ���ϣ�����λ�ڸ�λ�õ�б��λ���ϣ����λ���޷�ʹ��
//        if (q[i] == j || abs(i - k) == abs(q[i] - j))
//            return 0;
//    }
//    return 1;
//}
////���ûʺ�������
//void n_queens(int k, int n)
//{
//    int j;
//    if (k > n)     //�ݹ�ĳ���
//        print(n);
//    else
//    {
//        for (j = 1; j <= n; j++)   //��̽��k�е�ÿһ�У��ҵ�����Ҫ�����
//        {
//            if (isSafe(k, j))
//            {
//                q[k] = j;             //���лʺ����ڵ���
//                n_queens(k + 1, n);  //��ȷ�ϵ� k �лʺ�λ�õ�ǰ���£�����������һ�лʺ��λ��
//            }
//        }
//    }
//}
//
//int main()
//{
//    int n;
//    printf("������ʺ������");
//    scanf("%d", &n);
//    n_queens(1, n);
//    printf("���� %d �ֲ�ͬ������", count);
//    return 0;
//}

#include<stdio.h>
#include<stdlib.h>


typedef struct BiTNode
{
	char data;
	struct BiTNode* lchild, * rchild;
}BiTNode,*BiTree;

creatBiTree(BiTree* T)
{
	char c;

	scanf("%c", &c);
	if (' ' == c)
	{
		*T = NULL;
	}
	else
	{
		*T = (BiTNode*)malloc(sizeof(BiTNode));
		(*T)->data = c;
		creatBiTree(&(*T)->lchild);
		creatBiTree(&(*T)->rchild);

	}
}
void visit(char c,int level)
{
	printf("%c λ�ڵ�%d��\n", c, level);
}
PreOrderTrave(BiTree T, int level)
{
	if (T)
	{
		visit(T->data, level);
		PreOrderTrave(T->lchild, level + 1);
		PreOrderTrave(T->rchild, level + 1);
	}

}
int main()
{
	int level = 1;
	BiTree T = NULL;

	creatBiTree(&T);
	PreOrderTrave(T, level);
	return 0;
}