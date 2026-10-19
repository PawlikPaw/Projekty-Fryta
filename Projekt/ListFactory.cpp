#include "ListFactory.h"

DoublyLinkedList* ListFactory::createList() {
    return new DoublyLinkedList();
}

Node* ListFactory::createNode(int val) {
    return new Node(val);
}