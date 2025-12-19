#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));

    int intelligence, stamina, charisma;
    int total = 20;

    intelligence = rand() % (total + 1);
    stamina = rand() % (total - intelligence + 1);
    charisma = total - intelligence - stamina;

    printf("intelligence: %d\nstamina: %d\ncharisma: %d\n", intelligence, stamina, charisma);

    if (intelligence >= stamina && intelligence >= charisma) {
        printf("class: mage\n");
    } else if (stamina >= intelligence && stamina >= charisma) {
        printf("class: knight\n");
    } else {
        printf("class: thief\n");
    }

    return 0;
}

