#include "ListFactory.h"
/*
 * Factory class for creating list and node objects
 */
DoublyLinkedList* ListFactory::createList() {
    return new DoublyLinkedList();
}

Node* ListFactory::createNode(int val) {
    return new Node(val);
}