//Code by Lesys


//Fonction pour coder un message
void codage();

//Fonction pour décoder un message déjà codé
void decodage();

//Fonction pour coder une lettre en numéro
int codageNum(char);

//Fonction pour coder un numéro en lettre
char codageLettre(int);

//Fonction pour effacer les buffer overflow
//BY OPENCLASSROOMS
void viderBuffer();

//Fonction permettant de lire les saisies utilisateur sans buffer overflow et lisant les espaces
//BY OPENCLASSROOMS
int lire(char *, int);