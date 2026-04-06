#ifndef FOUNDITEM H
#define FOUNDITEM H
#include "Item.h"
#include <iostream>
using namespace std;
class FoundItem :public Item{
private:
string foundDate;
public:
FoundItem(string n, string loc, string date ="");
void display() override;
};
#endif