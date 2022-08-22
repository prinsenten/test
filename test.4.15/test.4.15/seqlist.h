#pragma once
#pragma once
#include<stdio.h>
#include<stdlib.h>

#define N 1000
typedef int SLDataType;

//静态顺序表
//typedef struct SeqList
//{
//	SLDataType a[N];
//	int size;//表示数组中目前存储多少个数据
//}SL;
//
////接口函数--命名风格尽量跟着STL
//void SeqListInit(SL* ps);
//
////静态特点:如果满了就不让插入了 缺点:多了浪费 少了不够用
//void SeqListPushBack(SL* ps, SLDataType x);
//void SeqListPopBack(SL* ps);
//void SeqListPushFront(SL* ps, SLDataType x);
//void SeqListPoPFront(SL* ps);



//动态顺序表
typedef struct SeqList
{
	SLDataType* a;
	int size;//表示数组中目前存储多少个数据
	int capacity;//数组实际上能存数据空间容量多大
}SL;

//接口函数--命名风格尽量跟着STL
void SeqListInit(SL* ps);

void SeqListPushBack(SL* ps, SLDataType x);
void SeqListPopBack(SL* ps);
void SeqListDestory(SL* ps);
void SeqListCheckCapacity(SL* ps);
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPoPFront(SL* ps);
void SeqListPrintf(SL* ps);
//找到返回x的下标，否则返回-1
int SeqListFind(SL* ps,SLDataType x);
//指定pos下标位置插入
void SeqListInsert(SL* ps,int pos,SLDataType x);
//删除pos位置的数据
void SeqListErase(SL* ps, int pos);

