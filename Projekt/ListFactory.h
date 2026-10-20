#ifndef LISTFACTORY_H
#define LISTFACTORY_H

#include "DoublyLinkedList.h"
#include "Node.h"
/*
 * Factory class for creating list and node objects
*/
class ListFactory {
public:
    static DoublyLinkedList* createList();
    static Node* createNode(int val);
    /* Constructor for the ListFactory class */
};

#endif