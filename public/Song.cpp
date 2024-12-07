#include "Song.h"

// Constructors
Song::Song()
{
    this->album = ""; // Default album
} // Default Constructor

Song::Song(string title, string artType, string genre, string creator, string album)
    : Creation(title, artType, genre, creator)
{
    this->album = album; // Initialize album
} // Full Constructor

// Getters and Setters
string Song::getAlbum()
{
    return this->album;
}
void Song::setAlbum(string album)
{
    this->album = album;
}

// Methods
void Song::play()
{
    cout << "Playing song \"" << this->getTitle() << "\" from the album \"" << this->album << "\" by " << this->getCreator() << "..." << endl;
}

void Song::showOverview()
{
    cout << "<-------------------->" << endl; // 20 dashes
    cout << "Title: " << this->getTitle() << "\nArt Type: " << this->getArtType()
         << "\nGenre: " << this->getGenre() << "\nCreator: " << this->getCreator()
         << "\nAlbum: " << this->album << endl;
    cout << "<-------------------->" << endl
         << endl; // 20 dashes
}