//
// Created by The Dark Avenger on 10/24/2016.
//

#ifndef DATASTRUCTUREDEMO_LLIST_H
#define DATASTRUCTUREDEMO_LLIST_H

struct link {
    int data = 0;
    link *next = nullptr;
};

class llist {
public:
    int length;
    link *first;
    llist();
    void insertEnd(link*);
};


#endif //DATASTRUCTUREDEMO_LLIST_H
