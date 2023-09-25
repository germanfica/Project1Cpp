#include <stdio.h>
#include "player.h"
#include "mob.h"

int main() {
    Player player = { 100 };  // Create a new player.
    Mob mob = { 100 };        // Create a new mob.

    dealDamage(&player, &mob);  // Player deals damage to mob.
    takeDamage_Mob(&mob, 30);  // Mob takes damage.

    return 0;
}
