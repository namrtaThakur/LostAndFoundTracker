#ifndef LOSTITEM_H
#define LOSTITEM_H

#include "Item.h"
#include<string>
#include <iostream>

class LostItem : public Item {
    private:
   std:: string lostDate;

    public:
    LostItem( std::string n,std::string loc,std::string date ="",std::string
        imgPath="");
        
     void display() const override;

     std:: string getLostDate() const;
};

#endif