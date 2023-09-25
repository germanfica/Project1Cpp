#include "player.h"
#include <stdio.h>

void dealDamage(Player* player, Mob* mob) {
    takeDamage_Mob(mob, 20);
}

void takeDamage_Player(Player* player, int damage) {
    player->health -= damage;
    if (player->health < 0) player->health = 0;
    printf("Player now has %d health.\n", player->health);
}
