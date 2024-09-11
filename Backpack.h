#ifndef BACKPACK_H
#define BACKPACK_H

#include "Item.h"

class Backpack
{
  private:
    Item* items;
    int capacity;
    int itemCount;

    void resize(int newCapacity);

  public:
    Backpack();
    ~Backpack();

    void addItem(const Item& item);

    /// @brief Returns the last item in the backpack to the player
    /// @param index 
    /// @return 
    Item getItem(int index) const;
    Item removeItem();
    int getItemCount() const;
};

#endif