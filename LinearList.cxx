//
// Created by cat on 2017/12/24.
//

#include <iostream>
#include "LinearList.h"

List *MakeEmpty() {


    List *list = new List;
    std::cout << "x--> " << list->MAXSIZE << "\n";
    list->last = -1; // 初始化的时候，没有任何的数据
    list->data = new ElementType[list->MAXSIZE];
//    int a[9]=new int[9];
    return list;
}

/**
 * 查找第K个元素[0,max)
 * @tparam ElementType
 * @param K
 * @param L
 * @return
 */
ElementType FindKth(int K, List *L) {
    if (L->last == -1) {
        // is empty
        return ERROR;
    }
    ElementType ele;
    int size = L->last + 1;
    int i;
    for (i = 0; i < size; ++i) {
        if (K == i) break;
    }

    if (i < size) {
        return L->data[K];
    } else {
        return ERROR;
    }


}

int Find(ElementType X, List *L) {
    if (L->last == -1) {
        // is empty
        return -1;
    }
    int size = L->last + 1;
    int i;
    for (i = 0; i < size; ++i) {
        if (X == L->data[i]) break;
    }
    if (i < size) {
        return i;
    } else {
        return -1;
    }
}

/**
 * 插入元素到第 i 个位置
 * @tparam ElementType
 * @param X
 * @param i
 * @param L
 */
void Insert(ElementType X, int i, List *L) {

    std::cout << "a:" << L->last << " , b= " << L->MAXSIZE << "\n";
//    if (L->last >= L->MAXSIZE) {
//        // is full
//        return;
//    }
    if (L->last > -1) {
        for (int j = L->last + 1; j > i; --j) {
            L->data[j] = L->data[j - 1];
        }
    }
    L->data[i] = X;
    L->last++;
}

void Delete(int i, List *L) {
    if (i > L->last || i < 0) {
        // illegal position
        return;
    } else {
        for (int j = i; j < L->last + 1; ++j) {
            L->data[j - 1] = L->data[j];
        }
        L->last--;
    }
}

int Length(List *L) {
    return L->last + 1;
}

void Show(List *data) {

    std::cout << "List:" << data->last << " , [";

    for (int i = 0; i < Length(data) - 1; ++i) {
        std::cout << data->data[i] << " , ";
        if (i != 0 && i % 5 == 0) {
            std::cout << "\n";
        }
    }
    std::cout << data->data[Length(data) - 1] << " ]\n";
}