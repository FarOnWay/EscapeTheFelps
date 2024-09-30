#include "Battle.h"
#include <iostream>
#include "Map.h"

Battle::Battle(Player player, Enemy enemy) : player(player), enemy(enemy) {}

void Battle::Turn(int currentSQM)
{
    // the player starts at the 0 SQM

}

void Battle::StartBattle(Player player, Enemy enemy)
{
    while (player.lifeController.isDead == false && enemy.lifeController.isDead == false)
    {
        std::cout << "Player: " << player.name << " Health: " << player.get_health() << '\n';
        std::cout << "Enemy: " << enemy.name << " Health: " << enemy.get_health() << '\n';

        player.lifeController.takeDamage(10);
        enemy.lifeController.takeDamage(10);

    }
}