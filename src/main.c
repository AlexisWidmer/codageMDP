//Code by Lesys

#include <stdio.h>
#include <stdlib.h>
#include "../include/fonctions.h"

int main()
{
    char choix[5];
    do {
        printf("Menu choice:\n\t1°) Coding a message\n\t2°) Decoding a message");
        printf("\n\nWhat do you want: ");
        lire(choix, 4);
        if (choix[0] == '1') {
            codage();
        }
        else if (choix[0] == '2') {
            decodage();
        }
        else {
            printf("%s Is not a possible choice; Try again please\n\n", choix);
        }
    } while(choix[0] != '1' && choix[0] != '2');

    return 0;
}

//Liens pour codage http://villemin.gerard.free.fr/Crypto/RSA.htm#top
//http://villemin.gerard.free.fr/Crypto/ClasLett.htm