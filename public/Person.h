#ifndef PERSON_H
#define PERSON_H

#include <string>

struct Person {
    protected:
        std::string fname;
        std::string lname;

    public:
        Person(std::string fname = "", std::string lname = "");
        std::string getFname() const;
        std::string getLname() const;
        void setFname(std::string newName);
        void setLname(std::string newName);
};

#endif