#include "LostItem.h"
LostItem::LostItem(string n, string loc, string date): Item(n,loc),lostDate(date){}

void LostItem:: display()
{ cout<< "Lost Item:"<<name<<",Location:"<<location;
if(!lostDate.empty())
cout<<",Date:"<< lostDate;
cout<<endl;
}