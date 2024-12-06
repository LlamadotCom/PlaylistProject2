#ifndef SYSTEMDRIVER_H
#define SYSTEMDRIVER_H

#include <iostream>
#include <vector>
#include <string>

// for the future
class Playlists;
class Creator;

class SystemDriver
{
public:
    void welcomeMessage();
    void userOrCreator();

private:
    void mainMenuOptions();
    void userMenu();
    void creatorMenu();
    void handleMenuChoice(int choice);

    std::vector<Playlists *> playlists;
    std::vector<Creator *> creators;
};

#endif
