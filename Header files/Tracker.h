#ifndef TRACKER_H
#define TRACKER_H
#include "FoundItem.h"
class Tracker{
private:
Item*items[100];
int count;

public: 
Tracker();
void addItem(Item* item);
void displayAll() const;
~Tracker();
};
#endif
