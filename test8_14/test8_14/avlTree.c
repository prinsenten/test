//#include<stdio.h>
//#include<stdlib.h>
//
//
//typedef struct TreeNode
//{
//	int data;
//	int height;//��¼�߶�
//	struct TreeNode* lchild, * rchild;
//}TreeNode;
//
//
//int getHeight(TreeNode* node)
//{
//	return node ? node->height: 0;
//}
//
//int Max(int a,int b)
//{
//	return a > b ? a : b;
//}
//void rrRotation(TreeNode* node, TreeNode** root)
//{
//	TreeNode* temp = node->rchild;//nodeΪ���ڵ� temp��Ϊ�Һ���
//	node->rchild = temp->lchild;//���׵��Һ��ӵ��� temp������
//	temp->lchild = node;//temp�����ӵ��ڸ��ڵ�
//
//	node->height = Max(getHeight(node->lchild), getHeight(node->rchild)) + 1;
//	temp->height = Max(getHeight(temp->lchild), getHeight(temp->rchild)) + 1;
//	*root = temp;//���ڵ�仯
//}
//
//void llRotation(TreeNode* node, TreeNode** root)
//{
//	TreeNode* temp = node->lchild;
//	node->lchild = temp->rchild;
//	temp->rchild = node;
//	node->height = Max(getHeight(node->lchild), getHeight(node->rchild)) + 1;
//	temp->height = Max(getHeight(temp->lchild), getHeight(temp->rchild)) + 1;
//	*root = temp;
//}
//void avlInsert(TreeNode** T, int data)
//{
//	if (*T == NULL)
//	{
//		*T = (TreeNode*)malloc(sizeof(TreeNode));
//		(*T)->data = data;
//		(*T)->height = 0;
//		(*T)->lchild = NULL;
//		(*T)->rchild = NULL;
//	}
//	else if (data < (*T)->data)
//	{
//		avlInsert(&(*T)->lchild, data);
//		//�õ���ǰ�ڵ����������ĸ߶�
//		int lHeight = getHeight((*T)->lchild);
//		int rHeight = getHeight((*T)->rchild);
//		//�жϸ߶Ȳ�
//		if (lHeight - rHeight == 2)
//		{
//			if (data < (*T)->lchild->data)
//			{
//				//LL����
//				llRotation(*T, T);
//			}
//			else
//			{
//				//LR����
//				rrRotation((*T)->lchild, &(*T)->lchild);
//				llRotation(*T, T);
//			}
//		}
//	}
//	else if (data > (*T)->data)
//	{
//		avlInsert(&(*T)->rchild, data);
//		//�õ���ǰ�ڵ����������ĸ߶�
//		int lHeight = getHeight((*T)->lchild);
//		int rHeight = getHeight((*T)->rchild);
//		//�жϸ߶Ȳ�
//		if (rHeight - lHeight == 2)
//		{
//			if (data > (*T)->rchild->data)
//			{
//				//RR����
//				rrRotation(*T, T);
//			}
//			else
//			{
//				//RL����
//				llRotation((*T)->rchild, &(*T)->rchild);
//				rrRotation(*T, T);
//			}
//		}
//	}
//	(*T)->height = Max(getHeight((*T)->lchild), getHeight((*T)->rchild)) + 1;
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
//	int nums[5] = { 1,2,3,4,5 };
//	for (int i = 0; i < 5; i++)
//	{
//		avlInsert(&T, nums[i]);
//	}
//	preOrder(T);
//	printf("\n");
//	return 0;
//}