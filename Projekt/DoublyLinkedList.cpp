#include "DoublyLinkedList.h"
#include "ListFactory.h"
#include <iostream>

using namespace std;
/*
 * Constructor for DoublyLinkedList
 */
DoublyLinkedList::DoublyLinkedList() : head(nullptr), tail(nullptr) {}

DoublyLinkedList::~DoublyLinkedList() {
    clear();
}
/*
 * Adds a new node with the given value to the front of the list
 */
void DoublyLinkedList::addFront(int val) {
    Node* newNode = ListFactory::createNode(val);
    if (!head) {
        head = tail = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}
/*
 * Adds a new node with the given value to the back of the list
 */
void DoublyLinkedList::addBack(int val) {
    Node* newNode = ListFactory::createNode(val);
    if (!tail) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}
/*
 * Removes the first node from the list
 */
void DoublyLinkedList::removeFront() {
    if (!head) return;
    Node* temp = head;
    head = head->next;
    if (head) {
        head->prev = nullptr;
    } else {
        tail = nullptr;
    }
    delete temp;
}
/*
 * Removes the last node from the list
 */
void DoublyLinkedList::removeBack() {
    if (!tail) return;
    Node* temp = tail;
    tail = tail->prev;
    if (tail) {
        tail->next = nullptr;
    } else {
        head = nullptr;
    }
    delete temp;
}
/*
 * Displays the list from head to tail
 */
void DoublyLinkedList::displayForward() const {
    Node* curr = head;
    cout << "Lista (od poczatku): ";
    while (curr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}
/*
 * Displays the list from tail to head
 */
void DoublyLinkedList::displayBackward() const {
    Node* curr = tail;
    cout << "Lista (od konca):    ";
    while (curr) {
        cout << curr->data << " ";
        curr = curr->prev;
    }
    cout << endl;
}

void DoublyLinkedList::clear() {
    while (head) {
        removeFront();
    }
}

Node* DoublyLinkedList::getHead() const {
    return head;
}

Node* DoublyLinkedList::getTail() const {
    return tail;
}