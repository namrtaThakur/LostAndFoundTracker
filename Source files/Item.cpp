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