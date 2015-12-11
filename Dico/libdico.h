/*PROJET Dictionnary : "L'épicerie des mots"*/
/*Prototype des fonctions, include et autres structures*/
#ifndef LIBDICO_H
#define LIBDICO_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	char car;
	struct node *left, *right; //fuckThePolice


}*Dictionnary;

/*debug*/
void prefix(Dictionnary);
void displayLeft(Dictionnary);
//Prototypes des fonctions d'opérations sur le Dictionnary
Dictionnary createDictionnary();
Dictionnary addWord(Dictionnary, char*);
Dictionnary eraseWord(Dictionnary, char*);
int getMot(Dictionnary);
int dictionnaryEmpty(Dictionnary);
int getHeight(Dictionnary);
int belongs(Dictionnary, char*);

//Prototypes des autres fonctions relatives au Dictionnary
Dictionnary displayDictionnary(Dictionnary);
void leave();

//"L'Asie est un bretzel, la vie n'est pas un bretzel." - Arthur Rimbaud

#endif
