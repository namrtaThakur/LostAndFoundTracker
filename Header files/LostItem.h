#ifndef LOSTITEM_H
#define LOSTITEM_H
#include "Item.h"
#include <iostream>
using namespace std;
class LostItem : public Item {
    private:
    string lostDate;

    public:
    LostItem(string n,string loc,string date ="");
     void display() override;
};

