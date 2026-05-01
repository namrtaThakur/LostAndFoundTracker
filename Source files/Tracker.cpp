#include "../Header files/Tracker.h"
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
void Tracker::findMatches()const{
    cout<<"\n Matching items\n";
    for(int i=0; i<count;i++){
    LostItem*lost = dynamic_cast<LostItem*>(items[i]);
    if(lost !=nullptr){
        for(int j=0; j<count; j++)
        {FoundItem* found = dynamic_cast<FoundItem*>(items[j]);
         
        if (found !=nullptr)
    {if(lost->getName() == found ->getName() &&
    lost->getLocation()==found->getLocation())
{cout<<"\nMatch found";
lost->display();
found->display();
}
}
}
    }
}
}
~Tracker(){
for(int i=0; i< count; i++)
{
    delete items[i];
}

}
