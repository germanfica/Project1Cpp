#pragma once
#include "mob.h"

// Player class represents the main character in the game.
class Player {
public:
    int health = 100;  // Health of the player.

    // Method to inflict damage on a mob.
    void dealDamage(Mob& m);

    // Method to receive damage.
    void takeDamage(int damage);
};
