#include "Playlist.h"
#include <iostream>

using namespace std;

Playlist::Playlist() : name("Unnamed Playlist") {}

Playlist::Playlist(const string &name) : name(name) {}

void Playlist::addSong(const Song &song)
{
    songs.push_back(song);
}

void Playlist::showPlaylist() const
{
    cout << "Playlist: " << name << endl;
    if (songs.empty())
    {
        cout << "No songs in this playlist.\n";
        return;
    }

    for (size_t i = 0; i < songs.size(); ++i)
    {
        cout << i + 1 << ". " << songs[i].getTitle() << " - "
             << songs[i].getArtist() << endl;
    }
}

string Playlist::getName() const
{
    return name;
}
