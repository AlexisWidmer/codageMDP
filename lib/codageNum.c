#include "../include/fonctions.h"

//Fonction pour coder une lettre en numéro
int codageNum(char lettreACoder)
{
    int lettreCodee; //Le numéro qui va prendre la valeur de la lettre
    switch (lettreACoder) //Pour toutes les lettres possibles
    {
        case 'a':
        case 'A': lettreCodee = 0;
            break;
        case 'b':
        case 'B': lettreCodee = 1;
            break;
        case 'c':
        case 'C': lettreCodee = 2;
            break;
        case 'd':
        case 'D': lettreCodee = 3;
            break;
        case 'e':
        case 'E': lettreCodee = 4;
            break;
        case 'f':
        case 'F': lettreCodee = 5;
            break;
        case 'g':
        case 'G': lettreCodee = 6;
            break;
        case 'h':
        case 'H': lettreCodee = 7;
            break;
        case 'i':
        case 'I': lettreCodee = 8;
            break;
        case 'j':
        case 'J': lettreCodee = 9;
            break;
        case 'k':
        case 'K': lettreCodee = 10;
            break;
        case 'l':
        case 'L': lettreCodee = 11;
            break;
        case 'm':
        case 'M': lettreCodee = 12;
            break;
        case 'n':
        case 'N': lettreCodee = 13;
            break;
        case 'o':
        case 'O': lettreCodee = 14;
            break;
        case 'p':
        case 'P': lettreCodee = 15;
            break;
        case 'q':
        case 'Q': lettreCodee = 16;
            break;
        case 'r':
        case 'R': lettreCodee = 17;
            break;
        case 's':
        case 'S': lettreCodee = 18;
            break;
        case 't':
        case 'T': lettreCodee = 19;
            break;
        case 'u':
        case 'U': lettreCodee = 20;
            break;
        case 'v':
        case 'V': lettreCodee = 21;
            break;
        case 'w':
        case 'W': lettreCodee = 22;
            break;
        case 'x':
        case 'X': lettreCodee = 23;
            break;
        case 'y':
        case 'Y': lettreCodee = 24;
            break;
        case 'z':
        case 'Z': lettreCodee = 25;
            break;
        default: lettreCodee = 0;
            break;
    }
    return lettreCodee; //Retourne le numéro de la lettre
}