#include "../dico.h"

Dictionnary createDictionnary(){
  Dictionnary d = malloc(sizeof(Dictionnary));
  d->left=d->right=NULL;
  return d;
}
