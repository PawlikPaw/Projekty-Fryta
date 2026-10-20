#include "ListFactory.h"
/*
 * Factory class for creating list and node objects
 */
DoublyLinkedList* ListFactory::createList() {
    return new DoublyLinkedList();
    /* Constructor for the ListFactory class */
}

Node* ListFactory::createNode(int val) {
    return new Node(val);
    /* Constructor for the Node class */
}