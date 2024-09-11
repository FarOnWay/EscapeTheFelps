#include "LifeController.h"

void LifeController::takeDamage(int damage)
{
    if (isDead) return;

    life -= damage;
    if (life <= 0)
    {
        life = 0;
        die();
    }
}

void LifeController::heal(int health)
{
    if (isDead) return;

    life += health;
    if (life > maxLife)
    {
        life = maxLife;
    }
}

void LifeController::die()
{
    isDead = true;
    // do something when the player dies
}