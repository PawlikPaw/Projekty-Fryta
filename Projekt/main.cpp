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
    list->addBack(69);
    list->addBack(67);
    list->addFront(2137);
    list->addBack(12);

    list->displayForward();
    list->displayBackward();
    
    cout << "\n--- Test usuwania z poczatku i konca ---" << endl;
    list->removeFront();
    list->removeBack();
    
    list->displayForward();
    

    cout << "\n--- Test czyszczenia listy ---" << endl;
    list->clear();
    list->displayForward();

    cout << "--- Test dodawania elementow ---" << endl;
    list->addBack(69);
    list->addBack(67);
    list->addFront(2137);
    list->addBack(12);

    cout << "\n--- 3. Test iteratora (nastepny i poprzedni element) ---" << endl;
    ListIterator* it = ListFactory::createIterator(list->getHead());
    it->displayCurrent();
    it->displayNext();
    it->displayNext();
    it->displayPrev();
    delete it;

    cout << "\n--- 4. Usuwanie spod wskazanego indeksu ---" << endl;
    list->removeAt(2);
    list->displayForward();

    cout << "\n--- 5. Usuwanie z poczatku i konca ---" << endl;
    list->removeFront();
    list->removeBack();
    list->displayForward();

    cout << "\n--- 6. Czyszczenie calej listy ---" << endl;
    list->clear();
    list->displayForward();


    delete list;

    return 0;
}