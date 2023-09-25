#ifndef PLAYER_H
#define PLAYER_H

#include "mob.h"

typedef struct {
    int health;
} Player;

void dealDamage(Player* player, Mob* mob);
void takeDamage_Player(Player* player, int damage);

#endif // PLAYER_H
