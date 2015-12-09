#include <stdio.h>
#include "./libstack.h"
#include "./libdico.h"
#include "./libio.h"
int main(int argc, char const *argv[]) {
  Dictionnary d = createDictionnary();
  d = addWord(d, "bonjour");
  d = addWord(d, "bonsoir");
  d = addWord(d, "raloud");
  //printf("%c\n", d->car);
  //printf("%d", save(d, "./test"));
  // Dictionnary e = createDictionnary();
  // e = malloc(sizeof(Dictionnary));
  // e = load(e, "./test");
  // e = addWord(e, "gigagigot");
  // e = addWord(e, "caca");
  // prefix(e);
  //printf("%d\n", save(e, "./test"));
  printf("%d\n", belongs(d, "bonjoure*"));
  return 0;
}
