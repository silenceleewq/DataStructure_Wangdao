//
// Created by 李仁强 on 2021/8/17.
//

#ifndef UNTITLED_SEQLIST_H
#define UNTITLED_SEQLIST_H

#include "ElemType.h"
#include <iostream>

using namespace std;

typedef struct {
    ElemType *data;
    int length, MaxSize;
} SeqList;

// 初始化表
void InitList(SeqList &L);

// 求表长
int Length(SeqList L);

// 按值查找
int LocateElem(SeqList L, ElemType e);

// 按位查找
ElemType GetElem(SeqList L, int i);

// 插入操作
bool ListInsert(SeqList &L, int i, ElemType e);

// 删除操作
bool ListDelete(SeqList &L, int i, ElemType &e);

// 输出操作
void PrintList(SeqList L);

//判空操作
bool Empty(SeqList L);
void DestroyList(SeqList &L);



#endif //UNTITLED_SEQLIST_H
