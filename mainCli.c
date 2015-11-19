#include <stdio.h>
#include "./libdico.h"

int main(int argc, char const *argv[]) {
  Dictionnary d = createDictionnary();
  d = addWord(d, "raloud");
  //prefix(d);
  d= addWord(d, "raloubad");
  d = addWord(d, "raladal");
  prefix(d);
  //prefix(d);
  return 0;
}
