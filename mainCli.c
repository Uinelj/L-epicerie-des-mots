#include <stdio.h>
#include "dico.h"

int main(int argc, char const *argv[]) {
  Dictionnary d = createDictionnary();
  printf("%d", dictionnaryEmpty(d));
  return 0;
}
