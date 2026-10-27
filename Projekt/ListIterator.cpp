#include "ListIterator.h"
#include <iostream>

using namespace std;

ListIterator::ListIterator(Node* startNode) : current(startNode) {}

void ListIterator::displayCurrent() const {
    if (current) {
        cout << "Aktualny element: " << current->data << endl;
    } else {
        cout << "Iterator jest pusty." << endl;
    }
}

void ListIterator::displayNext() {
    if (current && current->next) {
        current = current->next;
        cout << "Nastepny element: " << current->data << endl;
    } else {
        cout << "Brak nastepnego elementu." << endl;
    }
}

void ListIterator::displayPrev() {
    if (current && current->prev) {
        current = current->prev;
        cout << "Poprzedni element: " << current->data << endl;
    } else {
        cout << "Brak poprzedniego elementu." << endl;
    }
}