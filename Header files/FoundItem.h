#ifndef FOUNDITEM H
#define FOUNDITEM H
#include "Item.h"
#include <iostream>
using namespace std;
class Foundtem :public Item{
private:
string foundDate;
public:
Founditem(string n, string loc, string date ="");
void display() override;
};
#endif