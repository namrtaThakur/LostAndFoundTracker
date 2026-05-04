#include "Item.h"
using namespace std;

Item::Item(string n,string loc, string imgPath)
{
    name= n;
    location= loc;
    imagePath= imgPath;
}

string Item::getName() const{
    return name;
}

string Item::getLocation()const{
    return location;
}

void Item::setImagePath(const string& path){
    imagePath = path;
}

string Item::getImagePath() const{
    return imagePath;
}

bool Item::hasImage() const{
    return !imagePath.empty();
}

void Item::openImage() const
{
    if (!imagePath.empty())
{
    cout<<"Opening image: "<< imagePath << endl;
}
else 
{
    cout<<"No image available. \n"<<endl;
}
}
bool Item::operator==(const Item& other) const
{
    return (name == other.name &&
            location == other.location &&
            imagePath == other.imagePath);
}
bool Item::operator<(const Item& other) const
{
    return name < other.name;
}
ostream& operator<<(ostream& os, const Item& item)
{
    os << "Name: " << item.name << "\n"
       << "Location: " << item.location << "\n";

    if (!item.imagePath.empty())
        os << "Image: " << item.imagePath << "\n";
    else
        os << "Image: None\n";

    return os;
}