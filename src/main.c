#include <stdio.h>
#include <stdlib.h>
#include "../include/fonctions.h"

int main()
{
    char choix[5];
    do {
        printf("Choix du menu:\n\t1°) Coder une phrase\n\t2°) Décoder une phrase");
        printf("\n\nQue voulez vous faire: ");
        lire(choix, 5);
        if (choix[0] == '1') {
            codage();
        }
        else if (choix[0] == '2') {
            decodage();
        }
        else {
            printf("%s n'est pas dans les choix possibles; Veuillez recommencer\n\n", choix);
        }
    } while(choix[0] != '1' && choix[0] != '2');

    return 0;
}

//Liens pour codage http://villemin.gerard.free.fr/Crypto/RSA.htm#top
//http://villemin.gerard.free.fr/Crypto/ClasLett.htm