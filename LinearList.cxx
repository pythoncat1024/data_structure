//
// Created by cat on 2017/12/24.
//

#include "LinearList.h"

template<typename ElementType>
List<ElementType> *MakeEmpty() {

    List<ElementType> *list = new List<ElementType>;
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
template<typename ElementType>
ElementType FindKth(int K, List<ElementType> L) {
    if (L.last == -1) {
        // is empty
        return nullptr;
    }
    ElementType ele;
    int size = L.last + 1;
    int i;
    for (i = 0; i < size; ++i) {
        if (K == i) break;
    }

    if (i < size) {
        return L.data[K];
    } else {
        return nullptr;
    }


}

template<typename ElementType>
int Find(ElementType X, List<ElementType> L) {
    if (L.last == -1) {
        // is empty
        return -1;
    }
    int size = L.last + 1;
    int i;
    for (i = 0; i < size; ++i) {
        if (X == L.data[i]) break;
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
template<typename ElementType>
void Insert(ElementType X, int i, List<ElementType> L) {
    if (L.last >= L.MAXSIZE) {
        // is full
        return;
    }
    for (int j = L.last + 1; j > i; ++j) {
        L.data[j] = L.data[j - 1];
    }
    L.data[i] = X;
}

template<typename ElementType>
void Delete(int i, List<ElementType> L) {
    if (i > L.last || i < 0) {
        // illegal position
        return;
    } else {
        for (int j = i; j < L.last + 1; ++j) {
            L.data[j - 1] = L.data[j];
        }
    }
}

template<typename ElementType>
int Length(List<ElementType> L) {
    return L.last + 1;
}