//Code by Lesys
extern int G_TOTAL_CARACTERE;

//Fonction pour coder un message
void codage(char);

//Fonction pour décoder un message déjà codé
void decodage(char);

//Fonction pour coder une lettre en numéro (façon "password")
int codageNumPassword(char);

//Fonction pour coder une lettre en numéro (façon phrase classique)
int codageNumSentence(char);

//Fonction pour coder un numéro en lettre (façon "password")
char codageLettrePassword(int);

//Fonction pour coder un numéro en lettre (façon phrase classique)
char codageLettreSentence(int);

//Fonction pour effacer les buffer overflow
//BY OPENCLASSROOMS
void viderBuffer();

//Fonction permettant de lire les saisies utilisateur sans buffer overflow et lisant les espaces
//BY OPENCLASSROOMS
int lire(char *, int);

//Fonction permettant de lire les saisies utilis



























