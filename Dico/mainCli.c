#include <stdio.h>
#include "./libstack.h"
#include "./libdico.h"
#include "./libio.h"
int main(int argc, char const *argv[]) {
  /*printf("\nL'epicerie des mots\n");
  printf("Choisir une operation");
  printf("1 > Ajouter mot\n");
  printf("2 > Supprimer mot\n");
  printf("3 > Afficher dictionnaire\n");
  printf("4 > Tester l'appartenance \n");
  printf("5 > Vider le dictionnaire\n");
  printf("6 > Sauvegarder\n");
  printf("7 > Charger\n");
  printf("8 > Salut\n");
  Dictionnary d = createDictionnary();
  int rep;
  scanf("%d", &rep);
  switch(rep){
    case 1:
      char word[20];
      printf("Entrer mot\n");
      scanf("%s", &word);
      d = addWord(d, word);
      break;	
  }*/
  //d = addWord(d, "bonjour");
  //d = addWord(d, "bonsoir");
  //d = addWord(d, "raloud");
  //printf("%c\n", d->car);
  //printf("%d", save(d->left, "./test"));
   Dictionnary e = createDictionnary();
   e = malloc(sizeof(Dictionnary));
   //e = load(e, "./test");
   e = addWord(e, "gigagigot");
   e = addWord(e, "caca");
  // prefix(e);
  printf("%d\n", save(e, "./test"));
  //printf("%d\n", belongs(d, "bonjoure*"));
  return 0;
}
