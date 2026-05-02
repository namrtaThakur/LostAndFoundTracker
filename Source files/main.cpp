  #include <iostream>
  #include"Tracker.h"
  #include"LostItem.h"
  #include"FoundItem.h"

  using  namespace std;

  int main()
  { 
    Tracker tracker;
    int choice;

    do{
        cout <<\n--- Lost and Found Tracker ---\n";
        cout <<1. Add lost item\n";
        cout << 2. Add Found iten\n";
        cout << 3. Display all Items\n";
        cout << 4.Find Matches\n";
        cout << "5.Search by name (Template)\n";
        cout <<  "6. Exit\n";
        cout << "Enter your Choice:";
        cin >> choice;
    }
  } 