#include "Creation.h"
#include "Creator.h"
#include <iostream>
using namespace std;

// Constructors
Creation::Creation()
{
	this->title = "";
	this->artType = "";
	this->genre = "";
	this->creator = new Creator(); // Updated to match UML diagram
} // Default Constructor

Creation::Creation(string title, string artType, string genre, Creator *creator)
{
	this->title = title;
	this->artType = artType;
	this->genre = genre;
	this->creator = creator;
} // Full Constructor

// Getters and Setters
string Creation::getTitle() const
{
	return this->title;
}
void Creation::setTitle(string title)
{
	this->title = title;
}
string Creation::getArtType() const
{
	return this->artType;
}
void Creation::setArtType(string artType)
{
	this->artType = artType;
}
string Creation::getGenre() const
{
	return this->genre;
}
void Creation::setGenre(string genre)
{
	this->genre = genre;
}
Creator Creation::getCreator() const
{
	return creator->getUserName();
}
void Creation::setCreator(Creator *creator)
{
	this->creator = creator;
}

// Methods
void Creation::pause()
{
	cout << "Pausing \"" << this->title << "\"..." << endl;
}

void Creation::play()
{
	cout << "Playing \"" << this->title << "\"..." << endl;
}

void Creation::skip()
{
	cout << "Skipping \"" << this->title << "\"..." << endl;
}

void Creation::rewind()
{
	cout << "Rewinding \"" << this->title << "\"..." << endl;
}

void Creation::showOverview()
{
	cout << "<-------------------->" << endl; // 20 dashes
	cout << "Title: " << this->title << "\nArt Type: " << this->artType
		 << "\nGenre: " << this->genre << "\nCreator: "
		 << this->creator << endl;
	cout << "<-------------------->" << endl
		 << endl; // 20 dashes
}
