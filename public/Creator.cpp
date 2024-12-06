#include "Creator.h"
#include <string>

using namespace std;

Creator::Creator(string fname, string lname, string userName) {
    User(fname, lname, userName);
    makeCreationList();
}

LinkedList* Creator::makeCreationList() {
    this->creations = new LinkedList();
    return creations;
}

void Creator::addCreation(Creation c) {
    //need to fix sections of NODE and LINKEDLIST to take CREATIONS, not STRINGS
    creations->push_back(c);
}

void Creator::printCreations() {
    creations->reversePrint();
}