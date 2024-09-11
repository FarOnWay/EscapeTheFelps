#ifndef ENTITY_H
#define ENTITY_H

#include <string>
#include "LifeController.h"

/// @brief The base class for every living entity in the game.
/// Every creature, player, and monsters will inherit from this class.
class Entity
{
  std::string name;
  LifeController lifeController;
};

#endif