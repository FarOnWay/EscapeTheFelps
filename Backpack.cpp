#include "Backpack.h"
#include "Item.h"

Backpack::Backpack() : items(nullptr), capacity(0), itemCount(0) {}

Backpack::~Backpack()
{
    delete[] items;
}

void Backpack::resize(int newCapacity)
{
    Item* newItems = new Item[newCapacity];
    if (items != nullptr)
    {
        std::copy(items, items + itemCount, newItems);
        delete[] items;
    }
    items = newItems;
    capacity = newCapacity;
}

void Backpack::addItem(const Item& item)
{
    if (itemCount == capacity)
    {
        resize(capacity == 0 ? 1 : capacity * 2);
    }
    items[itemCount++] = item;
}

Item Backpack::getItem(int index) const
{
    if (index < 0 || index >= itemCount)
    {
    }
    return items[index];
}

Item Backpack::removeItem()
{
    if (itemCount == 0)
    {
    }
    return items[--itemCount];
}

int Backpack::getItemCount() const
{
    return itemCount;
}