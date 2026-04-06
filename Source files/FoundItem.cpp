#include "FoundItem.h"
FoundItem::FoundItem(string n, string loc, string date)
:Item(n, loc),foundDate(date){}
void FoundItem:: display(){
cout <<"Found Item:"<< name <<",Location:"<< location;
if(!foundDate.empty())
cout << ",Date:"<< foundDate;
cout << endl;
}