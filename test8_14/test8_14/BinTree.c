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
//	//@ 表示此处无结点，为虚结点
//	if (ch == '@') {
//		*T = NULL;
//	}
//	else
//	{
//		*T = (TreeNode*)malloc(sizeof(TreeNode));
//		(*T)->data = ch;
//		//创建左子树，进行递归
//		creatTree(&((*T)->lchild));
//		//创建右子树，进行递归
//		creatTree(&((*T)->rchild));
//	}
//}
////前序遍历
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
//////结点结构体
////typedef struct BiTNode {
////    char data;//数据
////    struct BiTNode* lchild, * rchild;//左右孩子指针
////}TreeNode;
//////初始化二叉树的二叉链表T
////void Create_BiTree(TreeNode** T) {
////    char ch;
////    scanf_s("%c", &ch);
////    //@ 表示此处无结点，为虚结点
////    if (ch == '@') {
////        *T = NULL;
////    }
////    //# 表示构造结束
////    else if (ch == '#') {
////        return;
////    }
////    //排除以上两种情况，则为有数据的结点，对其进行构造
////    else {
////        *T = (TreeNode*)malloc(sizeof(TreeNode));
////        (*T)->data = ch;
////        //继续构造其左右孩子结点
////        Create_BiTree(&(*T)->lchild);
////        Create_BiTree(&(*T)->rchild);
////    }
////}
//////先序遍历二叉树
////void PreOrder(TreeNode*T) {
////    if (T) {
////        //遇到结点先输出其结点信息，然后按照先左后右的方式进行遍历
////        printf("%3c", T->data);
////        PreOrder(T->lchild);
////        PreOrder(T->rchild);
////    }
////}
////int main() {
////    TreeNode* T;
////    //构造二叉树
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


//定义双链表
typedef struct QueueNode
{
	TreeNode* data;
	struct QueueNode* pre;
	struct QueueNode* next;
}QueueNode;

void creatTree(TreeNode**T)