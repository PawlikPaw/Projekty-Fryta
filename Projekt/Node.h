#ifndef NODE_H
#define NODE_H
/*
 * Class representing a node in the doubly linked list
 */
class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val);
    /* Constructor for the Node class */
};

#endif