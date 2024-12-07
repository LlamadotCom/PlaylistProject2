#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <string>
#include <vector>
#include "Song.h"

using namespace std;

class Playlist
{
public:
    Playlist();
    Playlist(const string &name);
    void addSong(const Song &song);
    void showPlaylist() const; // Display playlist contents

    string getName() const; // Get playlist name

private:
    string name;
    vector<Song> songs;
};

#endif
