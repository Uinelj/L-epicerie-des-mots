#include <stdio.h>
#include "dico.h"

int main(int argc, char const *argv[]) {
  Dictionnary d = createDictionnary();
  d = addWord(d, "raloud");
  displayLeft(d);
  //d= addWord(d, "aloud");
  //d = addWord(d, "moulay");
  displayLeft(d);
  //prefix(d);
  return 0;
}
