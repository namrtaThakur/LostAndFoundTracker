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

        if(choice ==1){
            string name,location, date;
            cout << "Enter item name:";
            cin >> name;
            cout << "Enter location:";
            cin >> location;
            cout << "Enter Lost date:";
            cin >> date;"


            tracker.addItem(new LostItem(name, location, date));
        } 
        else if(choice == 2){
            string name, location, date;
            cout << "Enter item name:";
            cin >> name;
            cout << "Enter location:";
            cin >> location;
            cout << "Enter Found date:";
            cin >> date;

            tracker.addItem(new FoundItem(name, location, date));
    
        }
        else if(choice == 3){
            tracker.displayAll();

            
        }
        else if(choice == 4){
            tracker.findMatches();
        
        }
        else if(choice == 5){
            string searchName;
            cout << "Enter name to search:";
            cin >> searchName;
            tracker.searchByName(searchName);
        
        }
        else if(choice == 6){
            cout << "Invalid choice. Please try again.\n";
            
            
        }
        else if(choice ==7){

        }
        return 0;
        
    } 