#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/fonctions.h"

//Fonction pour effacer les buffer overflow
//PAR OPENCLASSROOMS
void viderBuffer()
{
    int c = 0;

    while (c != '\n' && c != EOF)
    {
        c = getchar();
    }
}