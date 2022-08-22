#pragma once
#pragma once
#include<stdio.h>
#include<stdlib.h>

#define N 1000
typedef int SLDataType;

//��̬˳���
//typedef struct SeqList
//{
//	SLDataType a[N];
//	int size;//��ʾ������Ŀǰ�洢���ٸ�����
//}SL;
//
////�ӿں���--�������������STL
//void SeqListInit(SL* ps);
//
////��̬�ص�:������˾Ͳ��ò����� ȱ��:�����˷� ���˲�����
//void SeqListPushBack(SL* ps, SLDataType x);
//void SeqListPopBack(SL* ps);
//void SeqListPushFront(SL* ps, SLDataType x);
//void SeqListPoPFront(SL* ps);



//��̬˳���
typedef struct SeqList
{
	SLDataType* a;
	int size;//��ʾ������Ŀǰ�洢���ٸ�����
	int capacity;//����ʵ�����ܴ����ݿռ��������
}SL;

//�ӿں���--�������������STL
void SeqListInit(SL* ps);

void SeqListPushBack(SL* ps, SLDataType x);
void SeqListPopBack(SL* ps);
void SeqListDestory(SL* ps);
void SeqListCheckCapacity(SL* ps);
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPoPFront(SL* ps);
void SeqListPrintf(SL* ps);
//�ҵ�����x���±꣬���򷵻�-1
int SeqListFind(SL* ps,SLDataType x);
//ָ��pos�±�λ�ò���
void SeqListInsert(SL* ps,int pos,SLDataType x);
//ɾ��posλ�õ�����
void SeqListErase(SL* ps, int pos);

