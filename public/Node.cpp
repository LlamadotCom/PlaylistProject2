#include "Node.h"
#include "Creation.h"
#include "Creator.h"
#include <string>

Node::Node() : next(nullptr), prev(nullptr) {}

Node::Node(const Creation &c) : creation(c), next(nullptr), prev(nullptr) {}

Creation Node::getCreation() const
{
    return "Title: " + creation.getTitle() +
           "\nArtist: " + creation.getCreator().getUserName() +
           "\nArt Type: " + creation.getArtType();
}

void Node::setCreation(const Creation &newCreation)
{
    creation = newCreation;
}

Node *Node::getNext() const
{
    return next;
}

void Node::setNext(Node *n)
{
    next = n;
}

Node *Node::getPrev() const
{
    return prev;
}

void Node::setPrev(Node *p)
{
    prev = p;
}

// Non-member operator overloads

// Node compared to Node
bool operator==(const Node &lhs, const Node &rhs)
{
    return lhs.getCreation() == rhs.getCreation();
}

bool operator!=(const Node &lhs, const Node &rhs)
{
    return lhs.getCreation() != rhs.getCreation();
}

bool operator<(const Node &lhs, const Node &rhs)
{
    return lhs.getCreation() < rhs.getCreation();
}

bool operator>(const Node &lhs, const Node &rhs)
{
    return lhs.getCreation() > rhs.getCreation();
}

bool operator<=(const Node &lhs, const Node &rhs)
{
    return lhs.getCreation() <= rhs.getCreation();
}

bool operator>=(const Node &lhs, const Node &rhs)
{
    return lhs.getCreation() >= rhs.getCreation();
}

// Node compared to string
bool operator==(const Node &lhs, const string &rhs)
{
    return lhs.getCreation() == rhs;
}

bool operator!=(const Node &lhs, const string &rhs)
{
    return lhs.getCreation() != rhs;
}

bool operator<(const Node &lhs, const string &rhs)
{
    return lhs.getCreation() < rhs;
}

bool operator>(const Node &lhs, const string &rhs)
{
    return lhs.getCreation() > rhs;
}

bool operator<=(const Node &lhs, const string &rhs)
{
    return lhs.getCreation() <= rhs;
}

bool operator>=(const Node &lhs, const string &rhs)
{
    return lhs.getCreation() >= rhs;
}

// String compared to Node
bool operator==(const string &lhs, const Node &rhs)
{
    return lhs == rhs.getCreation();
}

bool operator!=(const string &lhs, const Node &rhs)
{
    return lhs != rhs.getCreation();
}

bool operator<(const string &lhs, const Node &rhs)
{
    return lhs < rhs.getCreation();
}

bool operator>(const string &lhs, const Node &rhs)
{
    return lhs > rhs.getCreation();
}

bool operator<=(const string &lhs, const Node &rhs)
{
    return lhs <= rhs.getCreation();
}

bool operator>=(const string &lhs, const Node &rhs)
{
    return lhs >= rhs.getCreation();
}