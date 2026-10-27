#ifndef LISTFACTORY_H
#define LISTFACTORY_H

#include "DoublyLinkedList.h"
#include "Node.h"
#include "ListIterator.h"
/*
 * Factory class for creating list and node objects
*/
class ListFactory {
public:
    static DoublyLinkedList* createList();
    static Node* createNode(int val);
    static ListIterator* createIterator(Node* startNode);
    /* Constructor for the ListFactory class */
};

#endif