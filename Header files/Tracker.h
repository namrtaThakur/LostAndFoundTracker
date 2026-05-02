#ifndef TRACKER_H
#define TRACKER_H

#include"item.h"
#include "FoundItem.h"
#include<string>
class Tracker{
private:
Item*items[100];
int count;

public: 
Tracker();
void addItem(Item* item);
void displayAll() const;
void findMatches() const;
template<typenameT>
void searchByName(T key)const;
~Tracker();
};
#endif
