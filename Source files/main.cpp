#include <iostream>
#include "Tracker.h"
#include "LostItem.h"
#include "FoundItem.h"

using namespace std;

int main()
{
    Tracker tracker;
    int choice;

    do {
        cout << "\n--- Lost and Found Tracker ---\n";
        cout << "1. Add Lost Item\n";
        cout << "2. Add Found Item\n";
        cout << "3. Display All Items\n";
        cout << "4. Find Matches\n";
        cout << "5. Search by Name (Template)\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // IMPORTANT

        if (choice == 1) {
            string name, location, date, imagePath;

            cout << "Enter item name: ";
            getline(cin, name);

            cout << "Enter location: ";
            getline(cin, location);

            cout << "Enter lost date: ";
            getline(cin, date);

            cout << "Enter image path (or press ENTER to skip): ";
            getline(cin, imagePath);

            tracker.addItem(new LostItem(name, location, date, imagePath));

            
            LostItem temp(name, location, date, imagePath);
            tracker.findMatches(temp);
        }

        else if (choice == 2) {
            string name, location, date, imagePath;

            cout << "Enter item name: ";
            getline(cin, name);

            cout << "Enter location: ";
            getline(cin, location);

            cout << "Enter found date: ";
            getline(cin, date);

            cout << "Enter image path (or press ENTER to skip): ";
            getline(cin, imagePath);

            tracker.addItem(new FoundItem(name, location, date, imagePath));
        }

        else if (choice == 3) {
            tracker.displayAll();
        }

        else if (choice == 4) {
            string name, location, date;

            cout << "Enter lost item details to search:\n";

            cout << "Name: ";
            getline(cin, name);

            cout << "Location: ";
            getline(cin, location);

            cout << "Date: ";
            getline(cin, date);

            LostItem temp(name, location, date);
            tracker.findMatches(temp);
        }

        else if (choice == 5) {
            string searchName;
            cout << "Enter name to search: ";
            getline(cin, searchName);

            tracker.searchByName(searchName);
        }

        else if (choice == 6) {
            cout << "Exiting...\n";
        }

        else {
            cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 6);

    return 0;
}