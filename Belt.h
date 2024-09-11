#ifndef BELT_H
#define BELT_H

#include "Item.h"
class Belt
{
  public:
   Item selectItem();

   private:
    /// @brief This is the number of items currently on the belt
    int itemCount;
    /// @brief This is the maximum number of items that the belt can hold
      static const int beltSize = 5; 
    /// @brief This is the array of items that the belt can hold
      Item items[beltSize];
};
#endif