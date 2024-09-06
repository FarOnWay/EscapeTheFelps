#ifndef ATTACKITEM_H
#define ATTACKITEM_H

#include <string>

class AttackItem {
public:
    std::string name;
    int damage;

    AttackItem(std::string name, int damage);
};

#endif 