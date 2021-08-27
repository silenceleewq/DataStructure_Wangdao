//
// Created by 李仁强 on 2021/8/17.
//

#ifndef UNTITLED_SEQLISTQUESTION_H
#define UNTITLED_SEQLISTQUESTION_H
#include "ElemType.h"
#include "SeqList.h"
#include <iostream>
using namespace std;

void delAndInsert(SeqList &L, int i, ElemType &e);
void ListReverseTest(SeqList &L);
// 删除所有 e 元素，时间复杂度 n， 空间复杂度 1
void deleteAllSpecificElementTest(SeqList &L, ElemType e);

#endif //UNTITLED_SEQLISTQUESTION_H
