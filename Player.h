#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "LifeController.h" // Include the LifeController header

class Player
{
public:
    Player(std::string name, LifeController lifeController); 
    ~Player();
    void set_name(std::string name);
    void set_lifeController(LifeController lifeController); 
    int get_health();
    std::string name;


    LifeController lifeController; 
};

#endif