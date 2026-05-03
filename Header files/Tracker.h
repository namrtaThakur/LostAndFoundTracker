#ifndef TRACKER_H
#define TRACKER_H

#include "Item.h"
#include "FoundItem.h"
#include "LostItem.h"
#include<string>
class Tracker{
private:
Item* items[100];
int count;

public: 
Tracker();
void addItem(Item* item);
void displayAll() const;
void findMatches(const LostItem& lost) const;
template <typename T>
void searchByName(T key)const;

~Tracker();
};
#endif
