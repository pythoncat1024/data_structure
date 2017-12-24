//
// Created by cat on 2017/12/24.
//
/**
 * 类型名称：线性表（List）
数据对象集：线性表是 n (≥0)个元素构成的有序序列( a1, a2, ,an)
操作集：线性表L  List，整数i表示位置，元素X  ElementType，
 线性表基本操作主要有：
1、List MakeEmpty()：初始化一个空线性表L；
2、ElementType FindKth( int K, List L )：根据位序K，返回相应元素 ；
3、int Find( ElementType X, List L )：在线性表L中查找X的第一次出现位置；
4、void Insert( ElementType X, int i, List L)：在位序i前插入一个新元素X；
5、void Delete( int i, List L )：删除指定位序i的元素；
6、int Length( List L )：返回线性表L的长度n。
 */
#ifndef DATA_STRUTURE_LINEARLIST_H
#define DATA_STRUTURE_LINEARLIST_H


template<typename ElementType>
struct List {
    static const unsigned long MAXSIZE = 20; // # this can redefine !
    int last;
    ElementType data[MAXSIZE];
};

template<typename ElementType>
List<ElementType> *MakeEmpty();

template<typename ElementType>
ElementType FindKth(int K, List<ElementType> *L);

template<typename ElementType>
int Find(ElementType *X, List<ElementType> *L);

template<typename ElementType>
void Insert(ElementType *X, int i, List<ElementType> *L);

template<typename ElementType>
void Delete(int i, List<ElementType> *L);

template<typename ElementType>
int Length(List<ElementType> *L);


#endif //DATA_STRUTURE_LINEARLIST_H
