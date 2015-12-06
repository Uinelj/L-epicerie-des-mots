#include "Barbe.c"

int main(int argc, char* argv[]){
    int fonctionnement = 0;


    while(fonctionnement!=4){
        printf("Veuillez choisir une action à effectuer :-)\n");

        printf("2.Ajouter clef\n");
        printf("3.Supprimer clef\n");
        printf("4.Quitter\n");

        scanf("%d", &fonctionnement);

        switch(fonctionnement){

            case 2 :
                //ajouter une clef
            case 3 :
                //supprimer une clef
            case 4 :
                fonctionnement = leave();
            default :
                //recommencer
        }


    }

    return 0;
}
