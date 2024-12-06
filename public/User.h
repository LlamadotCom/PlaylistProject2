#ifndef USER_H
#define USER_H

#include "Person.h"
#include "Creation.h"
#include "Playlist.h"
#include <string>
#include <vector>

struct User: public Person {

    private:
        std::string userName;
        std::vector <Playlist> playlists;

    public:
        User();
        User(std::string userName);
        User(std::string fname, std::string lname, std::string userName);
        std::string getUserName() const;
        void setUserName(std::string newUser);
        void makeNewPlayList(std::string title);
        void printPlaylists();
};

#endif