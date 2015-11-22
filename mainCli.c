#include <stdio.h>
#include "./libio.h"
int main(int argc, char const *argv[]) {
  Dictionnary d = createDictionnary();
  d = addWord(d, "raloud");
  //prefix(d);
  d= addWord(d, "raloubad");
  d = addWord(d, "raladal");
  prefix(d);
  printf("%d\n", getHeight(d));
  printf("%s\n", serialize(d));
  //prefix(d);
  return 0;
}
