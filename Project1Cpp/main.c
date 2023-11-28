#include <stdio.h>
#include <stdlib.h>
#include "player.h"
#include "mob.h"

int main() {
    int num = 15;
    int* numPtr = &num;
    Player player = { 100 };  // Create a new player.
    //Mob mobInstance = { 100 };  // Create a new mob directly, not a pointer.
    Mob* mob1 = malloc(sizeof(Mob));  // Allocate memory dynamically for mob1
    if (mob1 == NULL) {
        perror("Error asignando memoria para mob1");
        exit(1);
    }
    mob1->health = 200;

    Mob* mob2 = mob1;  // Just point mob2 to the same memory as mob1
    mob2->health -= 90;

    //Mob* mob3 = { 500 };
    //mob3->health = 100;

    printf("Mob1 health %d\n", mob1->health);
    printf("Mob2 health %d\n", mob2->health);


    //dealDamage(&player, &mobInstance);  // Passing address of the mob instance
    //takeDamage_Mob(&mobInstance, 30);

    free(mob1);
    // Do NOT free mob2 because it points to the same memory as mob1

    return 0;
}
