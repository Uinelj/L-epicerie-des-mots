#include "Barbe.h"

Barbe creerBarbe(){

}

Barbe ajouterClef(Barbe B, int key){

    return 0;
}

Barbe supprimerClef(Barbe B, int key){

    return 0;
}

Barbe rechercher(Barbe B, int key){

    return 0;
}

Barbe allouerNoeud(){


    return 0;
}

//Fonction présente dans la fonction ajouterClef
void eclaterNoeud(Barbe x, Barbe y, Barbe z){
    int d = 2; //degres ???
    int j = 0; //juste une variable de boucle
    int i = 0; //j'avoue ne pas savoir

    z = allouerNoeud();
    z->feuille = y->feuille;
    z->nbFils = d;

        for(j = 1; j < d; j++){
            z->clef[j] = y->clef[j+1];
        }

        if (!y->feuille){
            for(j = 1; j < d; j++){
                z->fils[j] = y->fils[j+d];
            }
        }

    y->nbFils = d;

        for(j = x->nbFils+1; i+1; j++){
            x->fils[j+1] = x->fils[j];
        }

    x->fils[i+1] = z;

        for(j = x->nbFils+1; i; j++){
            x->clef[j+1] = x->clef[j];
        }

    x->clef[i] = y->clef[d];
    x->nbFils = x->nbFils+1;

}

Barbe appartientClef(Barbe B, int key){

    return 0;
}

int barbeVide(Barbe B){

    return 0;
}

int leave(){
    printf("Au revoir\n");
    return 4;
}

//"Il avait deux trous violets du côté boule." -Jean H.
