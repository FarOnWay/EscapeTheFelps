#include "AttackController.h"
#include "LifeController.h" 

void AttackController::dealDamage(int damage)
{
    LifeController lifeController;
    lifeController.takeDamage(damage);
}