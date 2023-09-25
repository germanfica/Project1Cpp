#include "mob.h"
#include <iostream>

// Implementation of takeDamage method for Mob.
void Mob::takeDamage(int damage) {
    health -= damage;
    if (health < 0) health = 0;
    std::cout << "Mob now has " << health << " health.\n";
}
