#include "SystemDriver.h"
using namespace std;

void SystemDriver::run()
{
    cout << "Welcome to the System!\n";
    signIn();
    showUserMenu(); // Start with the user menu
}

void SystemDriver::signIn()
{
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    currentUser.setUserName(name);
    cout << "Welcome, " << currentUser.getUserName() << "!\n";
}

void SystemDriver::showUserMenu()
{
    int choice;
    do
    {
        cout << "\nUser Menu:\n";
        cout << "1. Create Playlist\n";
        cout << "2. View Playlists\n";
        cout << "3. Go to Creator Menu\n";
        cout << "0. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;
        cin.ignore(); // Clear input buffer

        switch (choice)
        {
        case 1:
            // Logic to create a playlist
            break;
        case 2:
            // Logic to display playlists
            break;
        case 3:
            showCreatorMenu();
            break;
        case 0:
            cout << "Goodbye!\n";
            break;
        default:
            cout << "Invalid option. Try again.\n";
        }
    } while (choice != 0);
}

void SystemDriver::showCreatorMenu()
{
    int choice;
    do
    {
        cout << "\nCreator Menu:\n";
        cout << "1. Create Album\n";
        cout << "2. Create Song\n";
        cout << "3. Create Podcast\n";
        cout << "0. Back to User Menu\n";
        cout << "Choose an option: ";
        cin >> choice;
        cin.ignore(); // Clear input buffer

        switch (choice)
        {
        case 1:
            // Logic to create an album
            break;
        case 2:
            // Logic to create a song
            break;
        case 3:
            // Logic to create a podcast
            break;
        case 0:
            cout << "Returning to User Menu...\n";
            break;
        default:
            cout << "Invalid option. Try again.\n";
        }
    } while (choice != 0);
}
