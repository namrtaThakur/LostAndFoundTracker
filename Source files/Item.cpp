#include "Item.h"
using namespace std;

Item::Item(string n,string loc)
{
    name= n;
    location= loc;
}

string Item::getName() const{
    return name;
}

string Item::getLocation()const{
    return location;
}