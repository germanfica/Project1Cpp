#include <iostream>
#include "player.h"
#include "mob.h"

int main() {
    Player player;  // Create a new player.
    Mob mob;        // Create a new mob.

    player.dealDamage(mob); // Player deals damage to mob.
    mob.takeDamage(30);     // Mob takes damage.

    return 0;
}
