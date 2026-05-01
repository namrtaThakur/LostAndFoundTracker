#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>
using namespace std;
class Item
{
protected:
std::string name;
std::string location;

public:
Item (std::string n,std:: string loc);

virtual void display() const=0;

std::string getName() const;
std::string getLocation() const;

virtual ~Item() = default;
};
#endif