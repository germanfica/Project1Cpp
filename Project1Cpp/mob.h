#ifndef MOB_H
#define MOB_H

typedef struct {
    int health;
} Mob;

void takeDamage_Mob(Mob* mob, int damage);

#endif // MOB_H
