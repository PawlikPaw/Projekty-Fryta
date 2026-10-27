#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

#include "Node.h"
/*
 * Class representing a doubly linked list
 */
class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList();
    ~DoublyLinkedList();
    
    void addFront(int val);
    void addBack(int val);
    void addAt(int index, int val);
    void removeFront();
    void removeBack();
    void removeAt(int index);
    void displayForward() const;
    void displayBackward() const;
    void clear();
    // Constructor for the DoublyLinkedList class
    Node* getHead() const;
    Node* getTail() const;
};

#endif