//Code by Lesys

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "../include/fonctions.h"

void decodage()
{
    char phraseCodee[255] = ""; //Initialisation d'un tableau de 255 caractères "phraseCodee"
    char phraseDecodee[255] = ""; //Initialisation d'un tableau de 255 caractères "phraseDecodee"
    char lettreDecodee; //Initialisation d'un caractère "lettreDecodee"

    char lettreCle, lettreCodee; //Initialisation de caractères "lettreCle" et "lettreCodee"
    char cle[64]; //Initialisation d'un tableau de 64 caractères "cle"
    int nombreLettres = 0, nombreCle = 0, lettreDecodeeNum = 0, i = 0, j = 0; //Initialisation de "nombreLettres", "nombreCle", "lettreDecodeeNum", "i" et "j"

    printf("You can put MAJ or min words as you want, but the output is with MAJ.\nBe carefull to not enter a number!"); //Indications

    printf("\n\nEnter your key word: "); //Demande la clé pour coder la phrase
    lire(cle, 64); //Prends la saisie et la met dans "cle"
    nombreCle = strlen(cle); //Taille de la clé saisie

    printf("Enter the full message: "); //Demande la phrase à décoder
    lire(phraseCodee, 255); //Saisie de la phrase a coder dans "phraseCodee"
    nombreLettres = strlen(phraseCodee); //Taille de la phrase

    do //Pour toutes les lettres de "phraseCodee"
    {
        i %= nombreCle; //i modulo "nombreCle" pour avoir toujours un nombre entre 0 et le maximum de "nombreCle"
        lettreCle = cle[i]; //Sélectionne la lettre à l'emplacement [i] de "cle"
        int lettreCodageNum = codageNum(lettreCle); //Code la lettre de la clé en numéro

        lettreCodee = phraseCodee[j]; //Sélectionne la lettre à l'emplacement [j] de "phraseCodee"

        if (lettreCodee != ' ') { //Si "lettreCodee" n'est pas un espace

            int lettreCodeeNum = codageNum(lettreCodee); //Code la lettre de la phrase à coder en numéro

            lettreDecodeeNum = lettreCodeeNum + 26 - lettreCodageNum; //Ajoute la lettre de "cle" et celle de "phraseCodee"
            lettreDecodeeNum %= 26; //Si l'addition est >= 26 (donc plus que "z"), remet a 0 (modulo 26)

            lettreDecodee = codageLettre(lettreDecodeeNum); //Décode le numéro qui a été codé plus haut, en lettre
        }

        else { //Si la lettre n'est pas une lettre mais un espace
            lettreDecodee = ' '; //La lettre n'est pas a coder et prend directement la valeur espace ' '
        }
        phraseDecodee[j] += lettreDecodee; //Ajoute la lettre codée (ou l'espace) à la phrase décodée en entière

        i++; //+1 sur i
        j++; //+1 sur j
    }
    while (j < nombreLettres); //Tant que le nombre de lettre traitée n'a pas atteind le nombre de lettre de la "phraseEntiere"

    printf("\n\nYour crytped message was: %s.", phraseCodee); //Affiche "phraseCodee" en entière
    printf("\n\nNow, you can read it as: %s", phraseDecodee); //Affiche "phraseDecodee" en entière
}