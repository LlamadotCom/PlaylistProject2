#include "User.h"
#include <iostream>
#include <string>

using namespace std;

User::User() {
    Person();
    setUserName("default");
}

User::User(string userName) {
    Person();
    setUserName(userName);
}

User::User(string fname, string lname, string userName) {
    Person(fname, lname);
    setUserName(userName);
}

string User::getUserName() const {
    return this->userName;
}

void User::setUserName(string newUser) {
    this->userName = newUser;
}

void User::makeNewPlayList(string title) {
    playlists.push_back(title);
    //write a new file for a list of creations TO DO!!!
}

void User::printPlaylists() {
    vector <Playlist>::iterator iter;
    cout << " Current Playlists:\n" << flush;
    for (iter = playlists.begin(); iter != playlists.end(); iter++) {
        //need to add to *iter the playlist method for getting the title, hopefully it has one...    
        cout << "\t" << *iter.getTitle() << endl;
    }
}