#ifndef SYSTEMDRIVER_H
#define SYSTEMDRIVER_H

#include "Playlist.h"
#include "User.h"
#include "Creator.h"
#include "Person.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class SystemDriver
{
public:
    void run();
    void signIn();
    void showUserMenu();
    void showCreatorMenu();

private:
    User currentUser;
    Creator currentCreator;
    vector<Playlist> playlists;
};

#endif
