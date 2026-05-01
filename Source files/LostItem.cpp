#include "LostItem.h"
using namespace std;

LostItem::LostItem(string n, string loc, string date)
: Item(n,loc),lostDate(date){}

void LostItem:: display() const
{
     cout<< "Lost Item:"<<name<<",Location:"<<location;
if(!lostDate.empty())
cout<<",Date:"<< lostDate;
cout<<endl;
}
string LostItem::getLostDate() const{  
    return lostDate;
}