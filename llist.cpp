//
// Created by The Dark Avenger on 10/24/2016.
//

#include "llist.h"
llist::llist(){
        first = new link;
        first->next = nullptr;
        length = 1;
    }

void llist::insertEnd(link *x){
    if (x->next == nullptr){
        link *p;
        p = new link;
        x->next = p;
        length++;
        return;
    }
    insertEnd(x->next);
}