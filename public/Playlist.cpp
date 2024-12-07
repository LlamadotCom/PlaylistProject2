#include "Playlist.h"
#include <string>
#include <iostream>

using namespace std;

Playlist::Playlist()
{
    this->title = "Default_Title";
    this->listItems = new LinkedList();
}

Playlist::Playlist(string title)
{
    this->title = title;
    this->listItems = new LinkedList();
}

void Playlist::addToPlaylist(Creation c)
{
    listItems->push_back(c);
}

void Playlist::delFromPlaylist(Creation c)
{
    listItems->deleteWord(c);
}

bool Playlist::searchPlaylist(string searchTitle)
{
    listItems->linearSearch(searchTitle, "", "");
}