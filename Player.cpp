#include "Player.h"

Player::Player(std::string name, LifeController lifeController) {
    this->name = name;
    this->lifeController = lifeController;
}

void Player::set_lifeController(LifeController lifeController) {
    this->lifeController = lifeController;
}

int Player::get_health() {
    return lifeController.life; 
}