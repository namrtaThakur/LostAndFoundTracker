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
std::string imagePath;

public:
Item (std::string n,std::string loc, std::string imgPath = "");

virtual void display() const=0;

std::string getName() const;
std::string getLocation() const;

void setImagePath(const std::string& path);
std::string getImagePath()const;
bool hasImage() const; 

void openImage() const;

bool operator==(const Item& other) const;
bool operator<(const Item& other) const;

friend ostream& operator<<(ostream& os, const Item& item);



virtual ~Item() = default;
};
#endif