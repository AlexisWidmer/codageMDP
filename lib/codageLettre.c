#include "../include/fonctions.h"

//Fonction pour coder un numéro en lettre
char codageLettre(int numACoder)
{
    char numCodee; //La lettre qui va correspondre au numéro
    switch (numACoder) //Pour tout le snuméro possibles (modulo 26)
    {
        case 0: numCodee = 'A';
            break;
        case 1: numCodee = 'B';
            break;
        case 2: numCodee = 'C';
            break;
        case 3: numCodee = 'D';
            break;
        case 4: numCodee = 'E';
            break;
        case 5: numCodee = 'F';
            break;
        case 6: numCodee = 'G';
            break;
        case 7: numCodee = 'H';
            break;
        case 8: numCodee = 'I';
            break;
        case 9: numCodee = 'J';
            break;
        case 10: numCodee = 'K';
            break;
        case 11: numCodee = 'L';
            break;
        case 12: numCodee = 'M';
            break;
        case 13: numCodee = 'N';
            break;
        case 14: numCodee = 'O';
            break;
        case 15: numCodee = 'P';
            break;
        case 16: numCodee = 'Q';
            break;
        case 17: numCodee = 'R';
            break;
        case 18: numCodee = 'S';
            break;
        case 19: numCodee = 'T';
            break;
        case 20: numCodee = 'U';
            break;
        case 21: numCodee = 'V';
            break;
        case 22: numCodee = 'W';
            break;
        case 23: numCodee = 'X';
            break;
        case 24: numCodee = 'Y';
            break;
        case 25: numCodee = 'Z';
            break;
        default: numCodee = 0;
            break;
    }
    return numCodee; //Retourne la lettre correspondante
}