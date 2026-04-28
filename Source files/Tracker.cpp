#include "Tracker.h"
#include "LostItem.h"
#include "FoundItem.h"
#include <iostream>
using namespace std;
Tracker::Tracker() {
    count = 0;

}
void Tracker :: add Item(Item* item)
{
    if(count <100)
    {
        items[count++]=item;
    }
    else{
        cout<<"Tracker is full!"<<endl;
    }
}

void Tracker:: displayAll()
{
    cout<<"\nAll Items\n";
    for(int i=0; i<count ; i++)
    {
        items[i]=display();
    }
}

Tracker::~Tracker(){
for(int i=0; i< count; i++)
{
    delete items[i];
}

}
