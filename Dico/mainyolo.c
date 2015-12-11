#include <stdio.h>
#include "libdico.h"
#include "libio.h"

int main(){
	Dictionnary d = createDictionnary();
	d = malloc(sizeof(Dictionnary));
	//d = addWord(d, "vomi");
	//d = addWord(d, "relent");
	//prefix(d);
	while(1){
		char word[20];
		int choice;
		printf("1Ajouter mot\n2Afficher contenu du dico\n3Testerl'appartenance d'un mot\n4Vider le dico\n5Sauvegarder contenu dico dans un fichier\n6Charger un dico à partir d'un fichier\n7QUITTER\n");

		scanf("%d", &choice);
		switch(choice){
			case 1:
				scanf("%s", word);
				d = addWord(d, word);
				printf("cbon\n");
				break;
			case 2:
				if((d==NULL) || (d->car=='*')){
					printf("le tableau il est vide\n");
				}else{
				prefix(d);}
				break;
			case 3:
				scanf("%s", word);
				//strcpy(word, "*");
				printf("%d", belongs(d, word));
				break; 
			case 4:
				d->car='*';
				d->left = d->right = NULL;
			case 5:
				//scanf("%s", word);
				save(d, "./test");
				printf("Le dico est save ++\n");
				//return 0;
				break;
			case 6:
				load(d, "./test");
				break;
			case 7:
				return 0;
			default:
				return 0;		
		} 
		
	}
}
