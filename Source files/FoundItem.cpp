#include "FoundItem.h"
using namespac std;

FoundItem::FoundItem(string n, string loc, string date)
 :Item(n, loc),foundDate(date){}

void FoundItem:: display() const{
 cout <<"Found Item:"<< name <<",Location:"<< location;
if(!foundDate.empty())
 cout << ",Date:"<< foundDate;
cout << endl;
}
string FoundItem::getFoundDate() const{
    return foundDate;
}