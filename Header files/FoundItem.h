#ifndef FOUNDITEM_H
#define FOUNDITEM H

#include "Item.h"
#include<string>

#include <iostream>


class FoundItem :public Item{
private:
 std::string foundDate;

public:
FoundItem(std::string n, std::string loc, std::string date ="", std:: string imgPath="");
void display() const override;

std:: string getFoundDate() const;
};
#endif