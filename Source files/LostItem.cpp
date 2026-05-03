#include "LostItem.h"
using namespace std;

LostItem::LostItem(string n, string loc, string date,string imgPath)
: Item(n,loc,imagePath), lostDate(date){}

void LostItem:: display() const
{
     cout<< "Lost Item:"<<name<<",Location:"<<location;
if(!lostDate.empty())
cout<<",Date:"<< lostDate;

if(!imagePath.empty())
cout<<",Image:"<<imagePath;
else
cout<<",No Image",
cout<<endl;
}
string LostItem::getLostDate() const
{  
    return lostDate;
}