#ifndef PODCAST_H
#define PODCAST_H

#include "Creation.h"
#include <string>
using namespace std;

class Podcast : public Creation
{
public:
    // Constructors
    Podcast();                                                                      // Default Constructor
    Podcast(string title, string artType, string genre, string creator, int epNum); // Full Constructor

    // Getters and Setters
    int getEpisodeNumber();
    void setEpisodeNumber(int epNum);

    // Methods
    void play();         // Overridden play method for podcasts
    void showOverview(); // Displays podcast-specific details

private:
    int epNum; // Episode number of the podcast
};
