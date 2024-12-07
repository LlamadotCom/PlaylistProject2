#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
#include <string>
#include <iostream>

using namespace std;

class LinkedList
{
private:
    Node head;
    Node tail;
    int listSize;

    void setHead(Node h);
    void setTail(Node t);
    void setSize(int s);

public:
    LinkedList();
    LinkedList(const Creation &c);
    ~LinkedList();

    LinkedList &operator+=(LinkedList &otherList);

    void push_back(const Creation &c);
    void push_back(Node newCreationNode);
    void clear();
    int size();
    void print(ostream &os = cout);
    void reversePrint(ostream &os = cout);
    Node linearSearch(const Creation &c, string &prevWord, string &nextWord);
    Node deleteCreation(Node nodeToDelete);
    Node insert_before(Creation c, Node knownNode);

    // Declare the insert_in_order method
    void insert_in_order(const Creation &newCreation);

    Node getHead() const;
    Node getTail() const;

    void mergeDicts(LinkedList listB);
    void mergeSort();
    void mergeSort(LinkedList topListPtr);
    void split(LinkedList &leftList, LinkedList &rightList);
};

#endif