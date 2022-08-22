#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
//typedef int TElemType;
//
//typedef struct BiTNode
//{
//	TElemType data;
//	struct BiTNode* lchild, * rchild;
//	int ltag, rtag;
//}BiTNode,*BiTree;
//
//
//void CreatBiTree(BiTree* T)
//{
//	char ch;
//	scanf_s("%d", &ch);
//	if (ch == "#")
//	{
//		*T = NULL;
//	}
//	else
//	{
//		*T = (BiTNode*)malloc(sizeof(BiTNode));
//		if (!*T) return;
//		(*T)->data = ch;
//		CreatBiTree(&(*T)->lchild);
//		CreatBiTree(&(*T)->rchild);
//	}
//}
//void inThreadTree(BiTree T, BiTNode** pre)
//{
//	if (T)
//	{
//		inThreadTree(T->lchild, pre);
//		if (T->lchild==NULL)
//		{
//			T->ltag = 1;
//			T->lchild = pre;
//		}
//		if(*pre!=NULL&& (*pre)->rchild==NULL)
//		{
//			(*pre)->rtag = 1;
//			(*pre)->rchild = T;
//		}
//		*pre = T;
//		inThreadTree(T->rchild, pre);
//	}
//}
//
//BiTree* getFirst(BiTree T)
//{
//	while (T->rtag == 0)
//	{
//		T = T->rchild;
//	}
//	return T;
//}
//
//BiTree* getNext(BiTree node)
//{
//	if (node->rtag == 1)
//	{
//		return node->rchild;
//	}
//	else
//	{
//		return getFirst(node->rchild);
//	}
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
////前序遍历
////void InOrderTrverse(BiTree T)
////{
////	if (T == NULL)
////		return;
////	printf("%c ", T->data);
////	InOrderTrverse(T->lchild);
////	InOrderTrverse(T->rchild);
////}
////中序遍历
////void MidOrderTrverse(BiTree T)
////{
////	if (T == NULL)
////		return;
////	MidOrderTrverse(T->lchild);
////	printf("%c ", T->data);
////	MidOrderTrverse(T->rchild);
////}
//// 后序遍历
////void PosOrderTrverse(BiTree T)
////{
////	if (T == NULL)
////		return;
////	PosOrderTrverse(T->lchild);
////	PosOrderTrverse(T->rchild);
////	printf("%c ", T->data);
////}
//
//
//
//int main()
//{
//	BiTree T;
//
//	return 0;
//}

typedef struct BiTree
{
	char data;
	BiTNode* lchild, * rchild;
	int ltag, rtag;
}BiTNode,*BiTree;

void creatBiTree(BiTree* T)
{
	char ch;
	scanf("%c", &ch);
	if (ch == "#")
	{
		return;
	}
	else
	{
		*T = (BiTree)malloc(sizeof(BiTNode));
		(*T)->data = ch;
		creatBiTree(&(*T)->lchild);
		creatBiTree(&(*T)->rchild);
	}
}

BiTree preThreadTree(BiTree T, BiTree* pre)
{
	if (T)
	{
		if (T->lchild == NULL)
		{
			T->ltag = 1;
			T->lchild = *pre;
		}
		if (*pre != NULL && (*pre)->rchild == NULL)
		{
			(*pre)->rtag = 1;
			(*pre)->rchild = T;
		}
		*pre = T;
		if (T->ltag == 0)
			preThreadTree(T->lchild, pre);
		preThreadTree(T->rchild, pre);

	}
}
