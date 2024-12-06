#include "Person.h"
#include <string>

using namespace std;

Person::Person(string fname, string lname) {
    if (fname == "" && lname == "") {
        setFname("John/Jane");
        setLname("Doe");
    }
    else {
        setFname(fname);
        setLname(lname);
    }
}

string Person::getFname() const {
    return this->fname;
}

string Person::getLname() const {
    return this->lname;
}

void Person::setFname(string newName) {
    this->fname = newName;
}

void Person::setLname(string newName) {
    this->lname = newName;
}