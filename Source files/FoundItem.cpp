#include "FoundItem.h"
using namespace std;

FoundItem::FoundItem(string n, string loc, string date, string imgPath)
 :Item(n, loc,imgPath),
 foundDate(date){}

void FoundItem::display() const{
 cout <<"Found Item:"<< name <<",Location:"<< location;
if(!foundDate.empty())
 cout << ",Date:"<< foundDate;

 if(!imagePath.empty())
cout<<",Image:"<< imagePath;
else
cout<<",No image Provided";
cout << endl;
}
string FoundItem::getFoundDate() const{
    return foundDate;
}