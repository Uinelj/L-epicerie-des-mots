#include <stdio.h>
#include "./libdico.h"

int main(int argc, char const *argv[]) {
  Dictionnary d = createDictionnary();
  d = addWord(d, "raloud");
  //prefix(d);
  d= addWord(d, "aloud");
  d = addWord(d, "moulay");
  prefix(d);
  //prefix(d);
  return 0;
}
