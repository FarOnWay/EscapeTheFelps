#include <iostream>
#include "AttackItem.h"
#include "Player.h"
#include "LifeController.h"
#include "Map.h"
#include "Battle.h"
#include "Enemy.h"

using namespace std;

#pragma region Components of the game
/*
 This game is a turn based game where the player has to escape the dungeon, going through sqm by sqm
 each sqm can have a monster, a trap or a tresoure, like an item
the player can attack the monster, disarm the trap or pick up the item
if the player kills the monster, it advance to the next sqm
if the player dies to the monsters, the game restarts from the beginning
*/

#pragma endregion

int main()
{
    // AttackItem sword("Sword", 10);
    // std::cout << "Created an attack item: " << sword.name << " with damage: " << sword.damage << std::endl;
    // Player test = Player("Test", LifeController());
    // cout << test.name << endl;
    // cout << test.get_health() << endl;
    Map map = Map();
    map.GenerateMap(10);
    cout << map.size << endl;
    Start();
    Rules();
    CreateEnemies();
    Battle battle = Battle(Player("Player", LifeController()), Enemy("Goblin", LifeController()));
    

    return 0;
}

void Start()
{
    cout << "Welcome to EscapeTheFelps" << endl;
    cout << "You are a prisoner in the Felps dungeon" << endl;
    cout << "You must escape the dungeon" << endl;
}

void CreateEnemies()
{
    Enemy goblin = Enemy("Goblin", LifeController());
    goblin.lifeController.maxLife = 100;

    Enemy orc = Enemy("Orc", LifeController());
    orc.lifeController.maxLife = 150;

    Enemy troll = Enemy("Troll", LifeController());
    troll.lifeController.maxLife = 200;

    Enemy dragon = Enemy("Dragon", LifeController());
    dragon.lifeController.maxLife = 300;

    Enemy ghost = Enemy("Ghost", LifeController());
    ghost.lifeController.maxLife = 350;

    Enemy skeleton = Enemy("Skeleton", LifeController());
    skeleton.lifeController.maxLife = 375;

    Enemy zombie = Enemy("Zombie", LifeController());
    zombie.lifeController.maxLife = 450;

    Enemy vampire = Enemy("Vampire", LifeController());
    vampire.lifeController.maxLife = 500;

    Enemy werewolf = Enemy("Werewolf", LifeController());
    werewolf.lifeController.maxLife = 550;

    Enemy Felipe = Enemy("Felipe", LifeController());
    Felipe.lifeController.maxLife = 1000000;
}

void Rules()
{
    cout << "The game has 10 sqms, to finish the game you must reach the 10th sqm" << endl;
    cout << "Each sqm can have a monster or an item" << endl;
}

void End()
{
    cout << "You have reached the end of the dungeon" << endl;
    cout << "You have escaped the Felps dungeon" << endl;
}
