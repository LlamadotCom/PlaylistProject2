#ifndef CREATION_H
#define CREATION_H

#include <iostream>
#include <string>
using namespace std;

class Creation
{
public:
    // Constructors
    Creation();                                                             // Default Constructor
    Creation(string title, string artType, string genre, Creator *creator); // Parameterized Constructor

    // Getters and Setters
    string getTitle() const;
    void setTitle(string title);
    string getArtType() const;
    void setArtType(string artType);
    string getGenre() const;
    void setGenre(string genre);
    Creator getCreator() const;
    void setCreator(Creator *creator);

    // Methods
    void pause();        // Pause the creation
    void play();         // Play the creation
    void skip();         // Skip the creation
    void rewind();       // Rewind the creation
    void showOverview(); // Display an overview of the creation

private:
    string title;     // Title of the creation
    string artType;   // Type of the artwork (e.g., Song, Podcast, Audiobook)
    string genre;     // Genre of the creation
    Creator *creator; // Creator of the creation
};

#endif