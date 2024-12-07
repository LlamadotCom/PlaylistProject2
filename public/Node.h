#ifndef NODE_H
#define NODE_H

#include <string>

#include "Creation.h"
#include "Creator.h"

using namespace std;

struct Node
{
private:
    Creation creation;
    Node *next;
    Node *prev;

public:
    Node();
    Node(const Creation &c);
    string getCreation() const;
    Creation getCreation(bool flip) const;
    void setNext(Node *n);
    void setPrev(Node *p);
    Node *getNext() const;
    Node *getPrev() const;
    void setCreation(const Creation &newCreation);
};

// Declare operator overloads as non-member functions
bool operator==(const Node &lhs, const Node &rhs);
bool operator!=(const Node &lhs, const Node &rhs);
bool operator<(const Node &lhs, const Node &rhs);
bool operator>(const Node &lhs, const Node &rhs);
bool operator<=(const Node &lhs, const Node &rhs);
bool operator>=(const Node &lhs, const Node &rhs);

bool operator==(const Node &lhs, const string &rhs);
bool operator!=(const Node &lhs, const string &rhs);
bool operator<(const Node &lhs, const string &rhs);
bool operator>(const Node &lhs, const string &rhs);
bool operator<=(const Node &lhs, const string &rhs);
bool operator>=(const Node &lhs, const string &rhs);

bool operator==(const string &lhs, const Node &rhs);
bool operator!=(const string &lhs, const Node &rhs);
bool operator<(const string &lhs, const Node &rhs);
bool operator>(const string &lhs, const Node &rhs);
bool operator<=(const string &lhs, const Node &rhs);
bool operator>=(const string &lhs, const Node &rhs);

#endif