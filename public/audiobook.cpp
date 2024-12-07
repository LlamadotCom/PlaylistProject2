#include "AudioBook.h"

// Constructors
AudioBook::AudioBook()
{
    this->narrator = ""; // Default narrator
} // Default Constructor

AudioBook::AudioBook(string title, string artType, string genre, string creator, string narrator)
    : Creation(title, artType, genre, creator)
{
    this->narrator = narrator; // Initialize narrator
} // Full Constructor

// Getters and Setters
string AudioBook::getNarrator()
{
    return this->narrator;
}
void AudioBook::setNarrator(string narrator)
{
    this->narrator = narrator;
}

// Methods
void AudioBook::play()
{
    cout << "Playing audiobook \"" << this->getTitle() << "\" narrated by " << this->narrator << "..." << endl;
}

void AudioBook::showOverview()
{
    cout << "<-------------------->" << endl; // 20 dashes
    cout << "Title: " << this->getTitle() << "\nArt Type: " << this->getArtType()
         << "\nGenre: " << this->getGenre() << "\nCreator: "
         << this->getCreator() << "\nNarrator: " << this->narrator << endl;
    cout << "<-------------------->" << endl
         << endl; // 20 dashes
}