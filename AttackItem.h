#ifndef ATTACKITEM_H
#define ATTACKITEM_H

#include <string>
#include "Item.h" 

class AttackItem : public Item 
{
public:
    int damage;

    AttackItem(std::string name, int damage, std::string description);
};

#endif