#include <iostream>
#include "LinearList.h"

//
// Created by cat on 2017/12/24.
//
int main(void) {
    using namespace std;
    cout << "Hello World !\n";
    List *list = MakeEmpty();
    Insert(1.23, 0, list);
    Insert(2.13, 0, list);
    Insert(3.45, 0, list);
    int length = Length(list);
    cout << "length==" << length << endl;
    Show(list);
    Delete(1, list);
    Show(list);
    cout << Find(1.23, list) << endl;
    cout << Find(3.45, list) << endl;
    cout << FindKth(1, list) << endl;
    cout << FindKth(99, list) << endl;
    delete list;

    cout << "over  ....\n";
    return 0;
}