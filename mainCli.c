#include <stdio.h>
#include "./Functions/libdico.h"

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
