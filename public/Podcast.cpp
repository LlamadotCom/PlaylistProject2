#include "Podcast.h"

// Constructors
Podcast::Podcast()
{
    this->epNum = 0; // Default episode number
} // Default Constructor

Podcast::Podcast(string title, string artType, string genre, string creator, int epNum)
    : Creation(title, artType, genre, creator)
{
    this->epNum = epNum; // Initialize episode number
} // Full Constructor

// Getters and Setters
int Podcast::getEpisodeNumber()
{
    return this->epNum;
}
void Podcast::setEpisodeNumber(int epNum)
{
    if (epNum >= 0)
    {
        this->epNum = epNum;
    }
    else
    {
        cout << "Episode number cannot be negative. Setting to 0." << endl;
        this->epNum = 0;
    }
}

// Methods
void Podcast::play()
{
    cout << "Playing podcast \"" << this->getTitle() << "\", Episode #" << this->epNum << " by " << this->getCreator() << "..." << endl;
}

void Podcast::showOverview()
{
    cout << "<-------------------->" << endl; // 20 dashes
    cout << "Title: " << this->getTitle() << "\nArt Type: " << this->getArtType()
         << "\nGenre: " << this->getGenre() << "\nCreator: " << this->getCreator()
         << "\nEpisode #: " << this->epNum << endl;
    cout << "<-------------------->" << endl
         << endl; // 20 dashes
}