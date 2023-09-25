#include "mob.h"
#include <stdio.h>

void takeDamage_Mob(Mob* mob, int damage) {
    mob->health -= damage;
    if (mob->health < 0) mob->health = 0;
    printf("Mob now has %d health.\n", mob->health);
}
