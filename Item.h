#ifndef ITEM_H
#define ITEM_H

#include <string>

/*
 Every item will inherit from this class, meaning that every
 item will have a name and a description.
 
*/
class Item
{
   public:
    std::string name;
    std::string description;
    Item();
    ~Item();

    Item(std::string name,  std::string description);
};

#endif 