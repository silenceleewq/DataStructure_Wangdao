#include <iostream>
#include "SeqListQuestion.h"
void fillData(SeqList &L);
int main() {

    // 构建顺序表
    SeqList L;
    InitList(L);
    fillData(L);

    ListReverseTest(L);

    return 0;
}

void fillData(SeqList &L) {
    ListInsert(L, 0, 8);
    ListInsert(L, 1, 8);
    ListInsert(L, 2, 7);
    ListInsert(L, 3, 6);
    ListInsert(L, 4, 5);
    ListInsert(L, 5, 4);
    ListInsert(L, 6, 3);
    ListInsert(L, 7, 2);
    ListInsert(L, 8, 1);
}

