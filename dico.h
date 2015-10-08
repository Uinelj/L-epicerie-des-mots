/*PROJET Dictionnary : "L'épicerie des mots"*/
/*Prototype des fonctions, include et autres structures*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	char car;
	struct node *FLC, *FRC; //FirstLeftChild, FirstRightChild


}*Dictionnary;


//Prototypes des fonctions d'opérations sur le Dictionnary
Dictionnary createDictionnary();
Dictionnary addWord(Dictionnary, char*);
Dictionnary eraseWord(Dictionnary, char*);
int getMot(Dictionnary);
int dictionnaryEmpty(Dictionnary);


//Prototypes des autres fonctions relatives au Dictionnary
Dictionnary displayDictionnary(Dictionnary);
Dictionnary saveDictionnary(Dictionnary);
Dictionnary loadDictionnary(Dictionnary);
void leave();

//"L'Asie est un bretzel, la vie n'est pas un bretzel." - Arthur Rimbaud


