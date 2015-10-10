#include "../dico.h"

/*DEBUG ONLY*/

void displayLeft(Dictionnary d){
  Dictionnary cur = d;
  int i=0;
  while(cur->right != NULL ){
    printf("Caractere no %d : %c\n", i, cur->car);
    cur = cur->right;
    i++;
  }
}
void prefix(Dictionnary d){
   printf("%c\n", d->car);
  if(d->left!=NULL){
    prefix(d->left);
  }
  if(d->right!=NULL){
    prefix(d->right);
  }

}
int getHeight(Dictionnary d){
  int i=0;
  Dictionnary cur = d;
  while(cur->left != NULL){
    i++;
    cur = cur->left;
  }
  return i;
}
