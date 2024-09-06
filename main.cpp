#include <iostream>
#include "AttackItem.h"
#include "AsciiMap.h"

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
    AttackItem sword("Sword", 10);
    std::cout << "Created an attack item: " << sword.name << " with damage: " << sword.damage << std::endl;
    AsciiMap map('#');
    map.printMap();
    std::cout << "⬜️⬜️⬜️⬜️⬜️\n";
    std::cout << "⬜️⬜️⬜️⬜️⬜️\n";
    std::cout << "⬜️⬜️⬛️⬜️⬜️\n";
    std::cout << "⬜️⬜️⬜️⬜️⬜️\n";
    std::cout << "⬜️⬜️⬜️⬜️⬜️\n";
    std::cout << "🎲🎬🌷\n";

    return 0;
}

void Start()
{
    cout << "Welcome to EscapeTheFelps" << endl;
    cout << "You are a prisoner in the Felps dungeon" << endl;
    cout << "You must escape the dungeon" << endl;
}

void Rules()
{
    cout << "The game has 10 sqms, to finish the game you must reach the 10th sqm" << endl;
    cout << "Each sqm can have a monster or an item" << endl;
}
