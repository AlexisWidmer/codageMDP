//Code by Lesys

#include "../include/fonctions.h"

//Fonction pour coder un numéro en lettre (façon "password")
char codageLettrePassword(int numACoder)
{
    char numCodee; //La lettre qui va correspondre au numéro
    switch (numACoder) //Pour tout les numéros possibles (modulo TOTAL_CARACTERE)
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
        case 26: numCodee = '0';
            break;
        case 27: numCodee = '1';
            break;
        case 28: numCodee = '2';
            break;
        case 29: numCodee = '3';
            break;
        case 30: numCodee = '4';
            break;
        case 31: numCodee = '5';
            break;
        case 32: numCodee = '6';
            break;
        case 33: numCodee = '7';
            break;
        case 34: numCodee = '8';
            break;
        case 35: numCodee = '9';
            break;
        case 36: numCodee = ' ';
            break;
        case 37: numCodee = '.';
            break;
        default: numCodee = 0;
            break;
    }

    return numCodee; //Retourne la lettre correspondante
}

//Fonction pour coder un numéro en lettre (façon phrase classique)
char codageLettreSentence(int numACoder)
{
    char numCodee; //La lettre qui va correspondre au numéro
    switch (numACoder) //Pour tout les numéros possibles (modulo TOTAL_CARACTERE)
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
        case 26: numCodee = '0';
            break;
        case 27: numCodee = '1';
            break;
        case 28: numCodee = '2';
            break;
        case 29: numCodee = '3';
            break;
        case 30: numCodee = '4';
            break;
        case 31: numCodee = '5';
            break;
        case 32: numCodee = '6';
            break;
        case 33: numCodee = '7';
            break;
        case 34: numCodee = '8';
            break;
        case 35: numCodee = '9';
            break;
        case 36: numCodee = ' ';
            break;
        case 37: numCodee = '.';
            break;
        case 38: numCodee = '+';
            break;
        case 39: numCodee = '\'';
            break;
        case 40: numCodee = '&';
            break;
        case 41: numCodee = '\"';
            break;
        case 42: numCodee = '(';
            break;
        case 43: numCodee = '-';
            break;
        case 44: numCodee = '_';
            break;
        case 45: numCodee = ')';
            break;
        case 46: numCodee = '=';
            break;
        case 47: numCodee = '#';
            break;
        case 48: numCodee = '{';
            break;
        case 49: numCodee = '[';
            break;
        case 50: numCodee = '|';
            break;
        case 51: numCodee = '\\';
            break;
        case 52: numCodee = '^';
            break;
        case 53: numCodee = '@';
            break;
        case 54: numCodee = ']';
            break;
        case 55: numCodee = '}';
            break;
        case 56: numCodee = '$';
            break;
        case 57: numCodee = '%';
            break;
        case 58: numCodee = ',';
            break;
        case 59: numCodee = '?';
            break;
        case 60: numCodee = ';';
            break;
        case 61: numCodee = ':';
            break;
        case 62: numCodee = '!';
            break;
        case 63: numCodee = '/';
            break;
        case 64: numCodee = '*';
            break;
        case 65: numCodee = '<';
            break;
        case 66: numCodee = '>';
            break;
        case 67: numCodee = '`';
            break;
        default: numCodee = 0;
            break;
    }

    return numCodee; //Retourne la lettre correspondante
}