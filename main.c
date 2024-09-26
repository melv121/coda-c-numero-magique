#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main () {
int nombre_mystere, proposition, essais = 0;
srand(time(NULL));

 nombre_mystere = rand() % 100 + 1;

printf("Bienvenue dans le jeu du nombre magique !\n");

    do {
        printf("Entrez votre proposition (entre 1 et 100) : ");
        scanf("%d", &proposition);
        essais++;

        if (proposition < 1 || proposition > 100) {
            printf("Veuillez entrer un nombre entre 1 et 100.\n");
            continue; 
        }

        if (proposition < nombre_mystere) {
            printf("Raté ,c'est plus !\n");
        } else if (proposition > nombre_mystere) {
            printf("Et non c'est moins !\n");
        } else {
            printf("Bravo ! Vous avez trouvé le nombre en %d essais.\n", essais);
        }
    } while (proposition != nombre_mystere);

    return 0;
}

/* bonus */
/*
if (proposition < 1 || proposition > 100) {
            printf("Veuillez entrer un nombre entre 1 et 100.\n");
            continue; }
*/