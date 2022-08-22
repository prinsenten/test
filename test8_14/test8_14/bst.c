//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct TreeNode
//{
//	int data;
//	struct TreeNode* lchild, * rchild;
//}TreeNode;
//
//
//TreeNode* bstSearch(TreeNode* T, int key)
//{
//	if (T)
//	{
//		if (T->data == key)
//		{
//			return T;
//		}
//		else if (T->data < key)
//		{
//			return bstSearch(T->rchild,key);
//		}
//		else
//		{
//			return bstSearch(T->lchild, key);
//		}
//	}
//	else
//	{
//		return NULL;
//	}
//}
//void  bstInsert(TreeNode** T, int key)
//{
//	if (*T == NULL)
//	{
//		*T = (TreeNode*)malloc(sizeof(TreeNode));
//		(*T)->data = key;
//		(*T)->lchild = NULL;
//		(*T)->rchild = NULL;
//	}
//	else if (key == (*T)->data)
//	{
//		return;
//	}
//	else if (key < (*T)->data)//key小于T的值就向左查找位置
//	{
//		bstInsert(&(*T)->lchild, key);
//	}
//	else if (key > (*T)->data)
//	{
//		bstInsert(&(*T)->rchild, key);
//	}
//}
//
//void preOrder(TreeNode* T)
//{
//	if (T)
//	{
//		printf("%d ", T->data);
//		preOrder(T->lchild);
//		preOrder(T->rchild);
//	}
//}
//
//int main()
//{
//	TreeNode* T = NULL;
//	int nums[7] = { 5,7,8,6,2,4,1 };
//	for (int i = 0; i < 7; i++)
//	{
//		bstInsert(&T, nums[i]);
//	}
//	preOrder(T);
//	printf("\n");
//}