#include "Tracker.h"
#include "LostItem.h"
#include "FoundItem.h"
#include <iostream>
using namespace std;
Tracker::Tracker() {
    count = 0;

}
void Tracker :: addItem(Item* item)
{
    if(count <100)
    {
        items[count++]=item;
    }
    else{
        cout<<"Tracker is full!"<<endl;
    }
}

void Tracker:: displayAll()const
{
    cout<<"\nAll Items\n";
    for(int i=0; i<count ; i++)
    {
        items[i]->display();
    }
}
void Tracker::findMatches(const LostItem& lost)const{
    cout<<"\n Matching items\n";

    for(int i=0; i<count;i++)
    {
    FoundItem* found = dynamic_cast<FoundItem*>(items[i]);
    if(found !=nullptr)
    {
        if (lost.getName() == found->getName() && lost.getLocation() == found->getLocation())
        {
            cout<< "\nMatch Found\n";
            lost.display();
            found->display();

            if(found->hasImage())
            {
                char choice;
                cout<<"View image? (y/n):";
                cin>> choice;
                if(choice == 'y'|| choice == 'Y')
                {
                    found->openImage();
                }
            }
        }
    }
}
}
        

    

Tracker::~Tracker(){
for(int i=0; i< count; i++)
{
    delete items[i];
}

}
