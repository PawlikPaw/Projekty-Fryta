#include <iostream>
#include "ListFactory.h"

using namespace std;
/**
    * @brief Main function for testing the doubly linked list
    * 
    * This function creates a doubly linked list using the ListFactory class and performs various operations on it.
    * It tests adding elements to the front and back of the list, removing elements from the front and back,
    * displaying the list in both forward and backward order, and clearing the list.
    * 
    * @return int Returns 0 upon successful execution.
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