#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/fonctions.h"

//Fonction permettant de lire les saisies utilisateur sans buffer overflow et lisant les espaces
//PAR OPENCLASSROOMS
int lire(char *chaine, int longueur)
{
    char *positionEntree = NULL; //Définition d'un pointeur de char

    //On lit le texte saisi au clavier
    if (fgets(chaine, longueur, stdin) != NULL)  //Pas d'erreur de saisie ?
    {
        positionEntree = strchr(chaine, '\n'); //On recherche l'"Entrée"

        if (positionEntree != NULL) { //Si on a trouvé le retour à la ligne
            *positionEntree = '\0'; //On remplace ce caractère par \0
        }
        else {
            viderBuffer();
        }

        return 1; //On renvoie 1 si la fonction s'est déroulée sans erreur
    }

    else
    {
        viderBuffer();
        return 0; //On renvoie 0 s'il y a eu une erreur
    }
}