#ifndef ENEMY_H
#define ENEMY_H

#include <string>
#include "LifeController.h" 
#include "Player.h"

class Enemy : public Player
{
public:
    Enemy(std::string name, LifeController lifeController) : Player(name, lifeController) {}
};

#endif