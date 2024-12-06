#include "SystemDriver.h"
#include <iostream>
#include <string>

using namespace std;

void SystemDriver::welcomeMessage()
{
    string userName;
    cout << "Welcome to the Playlist Manager System!" << endl;
    cout << "---------------------------------------" << endl;

    // Ask for the user's name
    cout << "Please enter your name: ";
    getline(cin, userName);

    // Personalized welcome message
    cout << "Welcome " << userName << endl;
    cout << endl;
}

void SystemDriver::mainMenuOptions()
{
    cout << "Please select one of the following:" << endl;
    cout << "1. Login as User" << endl;
    cout << "2. Login as Creator" << endl;
    cout << "0. Exit" << endl;
    cout << "Your Selection: ";
}

void SystemDriver::userMenu()
{
    int choice;
    do
    {
        cout << "\nUser Menu:" << endl;
        cout << "1. View Playlists" << endl;
        cout << "2. Search Playlists" << endl;
        cout << "3. Sort Playlists" << endl;
        cout << "0. Back to Main Menu" << endl;
        cout << "Your Selection: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Viewing Playlists..." << endl;
            break;
        case 2:
            cout << "Searching Playlists..." << endl;
            break;
        case 3:
            cout << "Sorting Playlists..." << endl;
            break;
        case 0:
            cout << "Returning to Main Menu..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 0);
}

void SystemDriver::creatorMenu()
{
    int choice;
    do
    {
        cout << "\nCreator Menu:" << endl;
        cout << "1. Add a Creation" << endl;
        cout << "2. Delete a Creation" << endl;
        cout << "3. View Albums" << endl;
        cout << "0. Back to Main Menu" << endl;
        cout << "Your Selection: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Adding a Creation..." << endl;
            break;
        case 2:
            cout << "Deleting a Creation..." << endl;
            break;
        case 3:
            cout << "Viewing Albums..." << endl;
            break;
        case 0:
            cout << "Returning to Main Menu..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 0);
}

void SystemDriver::handleMenuChoice(int choice)
{
    switch (choice)
    {
    case 1:
        cout << "Login as User selected." << endl;
        userMenu();
        break;
    case 2:
        cout << "Login as Creator selected." << endl;
        creatorMenu();
        break;
    case 0:
        cout << "Exiting the system. Goodbye!" << endl;
        break;
    default:
        cout << "Invalid choice. Please try again." << endl;
        break;
    }
}

void SystemDriver::userOrCreator()
{
    int choice;
    do
    {
        mainMenuOptions();
        cin >> choice;
        handleMenuChoice(choice);
    } while (choice != 0);
}
