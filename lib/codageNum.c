//Code by Lesys

#include "../include/fonctions.h"

//Fonction pour coder une lettre en numéro (façon "password")
int codageNumPassword(char lettreACoder)
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
        case '0': lettreCodee = 26;
            break;
        case '1': lettreCodee = 27;
            break;
        case '2': lettreCodee = 28;
            break;
        case '3': lettreCodee = 29;
            break;
        case '4': lettreCodee = 30;
            break;
        case '5': lettreCodee = 31;
            break;
        case '6': lettreCodee = 32;
            break;
        case '7': lettreCodee = 33;
            break;
        case '8': lettreCodee = 34;
            break;
        case '9': lettreCodee = 35;
            break;
        case ' ': lettreCodee = 36;
            break;
        case '.': lettreCodee = 37;
            break;
        default: lettreCodee = 0;
            break;
    }

    return lettreCodee; //Retourne le numéro de la lettre
}


//Fonction pour coder une lettre en numéro (façon phrase classique)
int codageNumSentence(char lettreACoder)
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
        case '0': lettreCodee = 26;
            break;
        case '1': lettreCodee = 27;
            break;
        case '2': lettreCodee = 28;
            break;
        case '3': lettreCodee = 29;
            break;
        case '4': lettreCodee = 30;
            break;
        case '5': lettreCodee = 31;
            break;
        case '6': lettreCodee = 32;
            break;
        case '7': lettreCodee = 33;
            break;
        case '8': lettreCodee = 34;
            break;
        case '9': lettreCodee = 35;
            break;
        case ' ': lettreCodee = 36;
            break;
        case '.': lettreCodee = 37;
            break;
        case '+': lettreCodee = 38;
            break;
        case '\'': lettreCodee = 39;
            break;
        case '&': lettreCodee = 40;
            break;
        case '\"': lettreCodee = 41;
            break;
        case '(': lettreCodee = 42;
            break;
        case '-': lettreCodee = 43;
            break;
        case '_': lettreCodee = 44;
            break;
        case ')': lettreCodee = 45;
            break;
        case '=': lettreCodee = 46;
            break;
        case '#': lettreCodee = 47;
            break;
        case '{': lettreCodee = 48;
            break;
        case '[': lettreCodee = 49;
            break;
        case '|': lettreCodee = 50;
            break;
        case '\\': lettreCodee = 51;
            break;
        case '^': lettreCodee = 52;
            break;
        case '@': lettreCodee = 53;
            break;
        case ']': lettreCodee = 54;
            break;
        case '}': lettreCodee = 55;
            break;
        case '$': lettreCodee = 56;
            break;
        case '%': lettreCodee = 57;
            break;
        case ',': lettreCodee = 58;
            break;
        case '?': lettreCodee = 59;
            break;
        case ';': lettreCodee = 60;
            break;
        case ':': lettreCodee = 61;
            break;
        case '!': lettreCodee = 62;
            break;
        case '/': lettreCodee = 63;
            break;
        case '*': lettreCodee = 64;
            break;
        case '<': lettreCodee = 65;
            break;
        case '>': lettreCodee = 66;
            break;
        case '`': lettreCodee = 67;
            break;
        default: lettreCodee = 0;
            break;
    }

    return lettreCodee; //Retourne le numéro de la lettre
}