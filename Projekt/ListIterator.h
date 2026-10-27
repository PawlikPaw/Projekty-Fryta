#ifndef LISTITERATOR_H
#define LISTITERATOR_H

#include "Node.h"

class ListIterator {
private:
    Node* current;

public:
    ListIterator(Node* startNode);

    void displayCurrent() const;
    void displayNext();
    void displayPrev();
};

#endif