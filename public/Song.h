#ifndef SONG_H
#define SONG_H

#include "Creation.h"
#include <string>
using namespace std;

class Song : public Creation
{
public:
    // Constructors
    Song();                                                                         // Default Constructor
    Song(string title, string artType, string genre, string creator, string album); // Full Constructor

    // Getters and Setters
    string getAlbum();
    void setAlbum(string album);

    // Methods
    void play();         // Overridden play method for songs
    void showOverview(); // Displays song-specific details

private:
    string album; // Album of the song
};

#endif