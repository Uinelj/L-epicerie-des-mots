#include "../dico.h"

int dictionnaryEmpty(Dictionnary d){
  return d->car=='*' || d==NULL;
}
