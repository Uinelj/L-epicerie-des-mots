#include <stdio.h>
#include <stdlib.h>

#define DEGRE 2

enum boolean{TRUE, FALSE};

typedef struct noeud{
	int clef[2*DEGRE+1];
	int nbClef, nbFils;
	enum boolean feuille;
	struct noeud *fils[2*DEGRE+1];
}*Barbe;

Barbe creerBarbe();
Barbe ajouterClef(Barbe, int);
Barbe supprimerClef(Barbe, int);
Barbe appartientClef(Barbe, int);
Barbe rechercher(Barbe, int);
Barbe allouerNoeud();
Barbe sauvegardeClefs();
Barbe construBarbeFichier();
void eclaterNoeud(Barbe, Barbe, Barbe);
int leave();
int barbeVide(Barbe);

//On considère B_Arbre comme une barbe, c'est plus simple ainsi.
//(VOIR MASTER THEOREME)
//"Le ciel était bleu, pas de queue." -Verlaine
