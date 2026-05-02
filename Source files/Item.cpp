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

void Item::setImagePath(const string& path)
{imagePath = path;
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
    string command = "start\"\"\"" + imagePath + "\"";
    system(command.c_str());
}
else 
{
    cout<<"No image available. \n"
}
}