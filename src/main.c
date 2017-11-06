//Code by Lesys

#include <stdio.h>
#include <stdlib.h>
#include "../include/fonctions.h"

int G_TOTAL_CARACTERE = 38;

int main()
{
    char choix[3];
    char choixCode[3];

    // L'utilisateur fait un choix entre le codage, le décodage et quitter l'application
    do {
        printf("Menu choice:\n\t1°) Coding a message\n\t2°) Decoding a message\n\t3°) Leave the app");
        printf("\n\nWhat do you want: ");
        lire(choix, 2);

        // Si l'utilisateur veut coder ou décoder, il peut choisir la méthode pour coder un mot de passe ou pour coder une phrase (ou pour revenir en arrière)
        if (choix[0] == '1' || choix[0] == '2') {
            printf("Are you there to code password or sentence?\n\t1°) Password\n\t2°) Sentence\n\t3°) NOR, I want to go back\n\nYour choice: ");
            lire(choixCode, 2);

            // Si l'utilisateur s'est trompé et veut revenir au menu:
            if (choixCode[0] == '3') {
                main();
                // Just leave the app
                //printf("\nThanks for coming and hope to see you soon");
            }
            // Si l'utilisateur a fait son choix:
            else {

                // Ajuste le nombre de caractères disponibles pour les phrases
                if (choixCode[0] == '2')
                    G_TOTAL_CARACTERE = 68;

                if (choix[0] == '1') {
                    codage(choixCode[0]);
                }
                else if (choix[0] == '2') {
                    decodage(choixCode[0]);
                }
            }
        }
/*
        if (choix[0] == '1') {
            codage();
        }
        else if (choix[0] == '2') {
            decodage();
        }*/
        else if (choix[0] == '3') {
            // Just leave the app
            printf("\nThanks for coming and hope to see you soon");
        }
        else {
            printf("%s Is not a possible choice; Try again please\n\n", choix);
        }
    } while(choix[0] != '1' && choix[0] != '2' && choix[0] != '3');

    return 0;
}

//Liens pour codage http://villemin.gerard.free.fr/Crypto/RSA.htm#top
//http://villemin.gerard.free.fr/Crypto/ClasLett.htm