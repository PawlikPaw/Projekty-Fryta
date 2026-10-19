#ifndef LISTFACTORY_H
#define LISTFACTORY_H

#include "DoublyLinkedList.h"
#include "Node.h"

class ListFactory {
public:
    static DoublyLinkedList* createList();
    static Node* createNode(int val);
};

#endif