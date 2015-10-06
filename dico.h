/*PROJET DICTIONNAIRE : "L'épicerie des mots"*/
/*Prototype des fonctions, include et autres structures*/

#include <stdio.h>
#include <stdlib.h>

typedef struct noeud{
	char car;
	struct noeud *PFG, *PFD;


}*Dictionnaire;


//Prototypes des fonctions d'opérations sur le dictionnaire
Dictionnaire creer_Dictionnaire();
Dictionnaire ajouter_Mot(Dictionnaire, char*);
Dictionnaire supprimer_Mot(Dictionnaire, char*);
int appartient_Mot(Dictionnaire);
int dictionnaire_Vide(Dictionnaire);


//Prototypes des autres fonctions relatives au dictionnaire
Dictionnaire afficher_Dictionnaire(Dictionnaire);
Dictionnaire sauvegarde_Dictionnaire(Dictionnaire);
Dictionnaire charger_Dictionnaire(Dictionnaire);
void quitter();

//"L'Asie est un bretzel, la vie n'est pas un bretzel." - Arthur Rimbaud


