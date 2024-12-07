#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <string>
#include "LinkedList.h"
#include "Creation.h"

struct Playlist
{

private:
    std::string title;
    LinkedList *listItems;

public:
    Playlist();
    Playlist(std::string title);
    void addToPlaylist(Creation c);
    void delFromPlaylist(Creation c);
    bool searchPlaylist(std::string searchTitle);
};

#endif