#include "AttackItem.h"

AttackItem::AttackItem(std::string name, int damage, std::string description)
    : Item(name, description), damage(damage) 
{

}
