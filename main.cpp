#include <iostream>
using namespace std;

struct link {
    int data;
    link *next = nullptr;
};

class llist {
public:
    int length = 0;
    link *first;
    int num = 0;

    llist(){
        first = new link;
        first->data = ++num;
        first->next = nullptr;
        length++;
    }
    
    void insertEnd(link *x){
        if (x->next == nullptr){
            link *p;
            p = new link;
            x->next = p;
            return;
        }
        insertEnd(x->next);
    }
};

int main() {
    llist list;
    cout << "Length : " << list.length<<endl;
    list.insertEnd(list.first);
    //list.insertEnd(list.first);

    while(list.first) {

        cout << list.first->data << endl;
        list.first = list.first->next;
    }

    cout << "Length : " << list.length<<endl;

    return 0;
}