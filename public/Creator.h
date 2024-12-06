#ifndef CREATOR_H
#define CREATOR_H

#include "User.h"
#include "Creation.h"
#include "LinkedList.h"
#include <string>

struct Creator: public User {

    private:
        LinkedList* creations;
        LinkedList* makeCreationList();

    public:
        Creator(std::string fname = "", std::string lname = "", std::string userName = "");
        void addCreation(Creation c);
        void printCreations();

};
#endif