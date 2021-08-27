//
// Created by 李仁强 on 2021/8/17.
//

#include "SeqListQuestion.h"
// 二、综合应用题 1. 删除最小的元素，空出的位置由最后一个元素补上 start
void delAndInsert(SeqList &L, int i, ElemType &e) {
    if (i < 1 || i > L.length + 1) {
        printf("pos invalid!");
        return;
    }

    int min = 0;
    for (int j = 1; j < L.length; ++j) {
        if (L.data[min] > L.data[j]) {
            min = j;
        }
    }

    L.data[min] = L.data[L.length];
    L.length--;
}
// 二、综合应用题 1. 删除最小的元素，空出的位置由最后一个元素补上 end

// 二、2 高效算法， L 所有元素逆置，空间复杂度为 O(1) start
void ListReverse(SeqList &L) {
    for (int i = 0; i < L.length / 2; ++i) {
        ElemType temp = L.data[i];
        L.data[i] = L.data[L.length - i - 1];
        L.data[L.length - i - 1] = temp;
    }
}

void ListReverseTest(SeqList &L) {
    PrintList(L);

    printf("--------- 反转顺序表 ---------\n");

    ListReverse(L);

    PrintList(L);
}

// 二、2 高效算法， L 所有元素逆置，空间复杂度为 O(1) end


// 删除所有 e 元素，时间复杂度 n， 空间复杂度 1
void deleteAllSpecificElement(SeqList &L, ElemType e) {
    for (int i = 0; i < L.length; ++i) {
        if (L.data[i] == e) {

        }
    }
}
void deleteAllSpecificElementTest(SeqList &L, ElemType e);

// 删除所有 e 元素，时间复杂度 n， 空间复杂度 1














