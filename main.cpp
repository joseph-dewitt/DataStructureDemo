#include <iostream>
#include "llist.h"

using namespace std;

int main() {
    llist list;
    cout << "Length : " << list.length<<endl;
    list.insertEnd(list.first);

    while(list.first) {

        cout << list.first->data << endl;
        list.first = list.first->next;
    }

    cout << "Length : " << list.length<<endl;

    return 0;
}