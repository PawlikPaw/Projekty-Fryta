#include "DoublyLinkedList.h"
#include "ListFactory.h"
#include <iostream>

using namespace std;

DoublyLinkedList::DoublyLinkedList() : head(nullptr), tail(nullptr) {}

DoublyLinkedList::~DoublyLinkedList() {
    clear();
}

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

void DoublyLinkedList::addAt(int index, int val) {
    if (index <= 0) {
        addFront(val);
        return;
    }
    Node* curr = head;
    for (int i = 0; i < index - 1 && curr; i++) {
        curr = curr->next;
    }
    if (!curr || !curr->next) {
        addBack(val);
        return;
    }
    Node* newNode = ListFactory::createNode(val);
    newNode->next = curr->next;
    newNode->prev = curr;
    curr->next->prev = newNode;
    curr->next = newNode;
}

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

void DoublyLinkedList::removeAt(int index) {
    if (!head) return;
    if (index <= 0) {
        removeFront();
        return;
    }
    Node* curr = head;
    for (int i = 0; i < index && curr; i++) {
        curr = curr->next;
    }
    if (!curr) return; 
    if (!curr->next) {
        removeBack();
        return;
    }
    curr->prev->next = curr->next;
    curr->next->prev = curr->prev;
    delete curr;
}

void DoublyLinkedList::displayForward() const {
    Node* curr = head;
    cout << "Lista (od poczatku): ";
    while (curr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

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

// Ta funkcja jest potrzebna dla Iteratora!
Node* DoublyLinkedList::getHead() const {
    return head;
}