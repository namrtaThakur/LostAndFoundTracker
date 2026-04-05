#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>
using namespace std;
class Item
{
protected:
string name;
string location;

public:
Item (string n, string loc);
virtual void display()=0;
virtual ~Item() {};
};