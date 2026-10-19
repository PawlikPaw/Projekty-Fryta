#include <iostream>
#include "ListFactory.h"

using namespace std;
/*
 * Main function for testing the doubly linked list
 */
int main() {
    DoublyLinkedList* list = ListFactory::createList();

    cout << "--- Test dodawania elementow ---" << endl;
    list->addBack(10);
    list->addBack(20);
    list->addFront(5);
    list->addBack(30);

    list->displayForward();
    list->displayBackward();

    cout << "\n--- Test usuwania z poczatku i konca ---" << endl;
    list->removeFront();
    list->removeBack();

    list->displayForward();

    cout << "\n--- Test czyszczenia listy ---" << endl;
    list->clear();
    list->displayForward();

    delete list;

    return 0;
}