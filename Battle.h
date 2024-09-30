#ifndef BATTLE_H
#define BATTLE_H

#include "Player.h"
#include "Enemy.h"

class Battle
{
    public:
       void StartBattle(Player player, Enemy enemy);
       Battle(Player player, Enemy enemy);
       void Turn(int currentSQM);
       ~Battle();


    private:
        Player player;
        Enemy enemy;
};
#endif