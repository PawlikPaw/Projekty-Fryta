#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

#include "Node.h"

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList();
    ~DoublyLinkedList();

    void addFront(int val);
    void addBack(int val);
    void removeFront();
    void removeBack();
    void displayForward() const;
    void displayBackward() const;
    void clear();
};

#endif