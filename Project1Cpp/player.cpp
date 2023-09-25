#include "player.h"
#include <iostream>

// Implementation of dealDamage method. Player deals damage to a mob.
void Player::dealDamage(Mob &m) {
    m.takeDamage(20);
}

// Implementation of takeDamage method for Player.
void Player::takeDamage(int damage) {
    health -= damage;
    if (health < 0) health = 0;
    std::cout << "Player now has " << health << " health.\n";
}
