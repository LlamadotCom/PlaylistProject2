#ifndef AUDIOBOOK_H
#define AUDIOBOOK_H

#include "Creation.h"
#include <string>
using namespace std;

class AudioBook : public Creation
{
public:
    // Constructors
    AudioBook();                                                                            // Default Constructor
    AudioBook(string title, string artType, string genre, string creator, string narrator); // Full Constructor

    // Getters and Setters
    string getNarrator();              // Get the narrator's name
    void setNarrator(string narrator); // Set the narrator's name

    // Methods
    void play();         // Overridden play method for audiobooks
    void showOverview(); // Displays audiobook-specific details

private:
    string narrator; // Narrator of the audiobook
};

#endif