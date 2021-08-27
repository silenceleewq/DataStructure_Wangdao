//
// Created by 李仁强 on 2021/8/17.
//

#include "SeqList.h"
#define InitSize 8
// 初始化表
void InitList(SeqList &L) {
    L.data = (ElemType *)malloc(sizeof(ElemType) * InitSize);
    L.length = 0;
    L.MaxSize = InitSize;
}

bool ListInsert(SeqList &list, int i, ElemType e) {

    // 判断 插入位置i 范围是否有效
    if (i < 1 || i > list.length + 1) {
        printf("插入位置 %d 无效\n", i);
        return false;
    }
    // 判断当前存储空间是否已满
    if (list.length >= list.MaxSize) {
        return false;
    }

    // 将第 i 个元素及之后的元素后移
    for (int j = list.length; j >= i; --j) {
        list.data[j] = list.data[j - 1];
    }

    // 在位置 i 处放入 数据元素e
    list.data[i - 1] = e;

    // 在线性表长度加1
    list.length++;

    return true;
}


bool ListDelete(SeqList &L, int i, ElemType &e) {

    if (i < 1 || i > L.length + 1) {
        return false;
    }

    e = L.data[i - 1];

    for (int j = i; j < L.length; ++j) {
        L.data[j - 1] = L.data[j];
    }

    L.length--;

    return true;
}

int LocateElem(SeqList L, ElemType e) {

    int i;

    for (int i = 0; i < L.length; ++i) {
        if (L.data[i] == e) {
            return i + 1;
        }
    }

    return 0;
}


// 输出操作
void PrintList(SeqList L) {
    printf("顺序表打印如下：\n");
    for (int i = 0; i < L.length; ++i) {
        printf("%d\t", L.data[i]);
    }
    printf("\n");
}








