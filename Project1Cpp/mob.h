#pragma once

// Mob class represents an enemy in the game.
class Mob {
public:
    int health = 100;  // Health of the mob.

    // Method to receive damage.
    void takeDamage(int damage);
};
