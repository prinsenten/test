//#include<stdio.h>
//#include<Stdlib.h>
//
//
//typedef struct TreeNode
//{
//	char data;
//	struct TreeNode* lchild, * rchild;
//}TreeNode;
//
//void creatTree(TreeNode** T)
//{
//	char ch;
//	scanf_s("%c", &ch);
//	//@ ��ʾ�˴��޽�㣬Ϊ����
//	if (ch == '@') {
//		*T = NULL;
//	}
//	else
//	{
//		*T = (TreeNode*)malloc(sizeof(TreeNode));
//		(*T)->data = ch;
//		//���������������еݹ�
//		creatTree(&((*T)->lchild));
//		//���������������еݹ�
//		creatTree(&((*T)->rchild));
//	}
//}
////ǰ�����
//void preOread(TreeNode* T)
//{
//	if (T)
//	{
//		printf("%c", T->data);
//		preOread(T->lchild);
//		preOread(T->rchild);
//	}
//}
//int main()
//{
//	TreeNode* T = NULL;
//	creatTree(&T);
//	preOread(T);
//	return 0;
//}
////#include <stdio.h>
////#include <stdlib.h>
//////���ṹ��
////typedef struct BiTNode {
////    char data;//����
////    struct BiTNode* lchild, * rchild;//���Һ���ָ��
////}TreeNode;
//////��ʼ���������Ķ�������T
////void Create_BiTree(TreeNode** T) {
////    char ch;
////    scanf_s("%c", &ch);
////    //@ ��ʾ�˴��޽�㣬Ϊ����
////    if (ch == '@') {
////        *T = NULL;
////    }
////    //# ��ʾ�������
////    else if (ch == '#') {
////        return;
////    }
////    //�ų����������������Ϊ�����ݵĽ�㣬������й���
////    else {
////        *T = (TreeNode*)malloc(sizeof(TreeNode));
////        (*T)->data = ch;
////        //�������������Һ��ӽ��
////        Create_BiTree(&(*T)->lchild);
////        Create_BiTree(&(*T)->rchild);
////    }
////}
//////�������������
////void PreOrder(TreeNode*T) {
////    if (T) {
////        //������������������Ϣ��Ȼ����������ҵķ�ʽ���б���
////        printf("%3c", T->data);
////        PreOrder(T->lchild);
////        PreOrder(T->rchild);
////    }
////}
////int main() {
////    TreeNode* T;
////    //���������
////    Create_BiTree(&T);
////    PreOrder(T);
////}

#include<stdio.h>
#include<Stdlib.h>


typedef struct TreeNode
{
	char data;
	struct TreeNode* lchild, * rchild;
}TreeNode;


//����˫����
typedef struct QueueNode
{
	TreeNode* data;
	struct QueueNode* pre;
	struct QueueNode* next;
}QueueNode;

void creatTree(TreeNode**T)