#include "Enemy.h"
#include "LifeController.h"
#include "Player.h"

Enemy::Enemy(std::string name, LifeController lifeController) : Player(name, lifeController) {}

