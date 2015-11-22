#include "libio.h"

int save(Dictionnary d, char *path){
  FILE *handler = fopen(path, "w");
  if(handler == NULL){
    return 1;
  }
  return 0;
  }

char *serialize(Dictionnary d){
  char array[6];
  char *pointr = malloc(sizeof(char) * 6);
  char dest[50];
  /*http://stackoverflow.com/questions/1335786/c-differences-between-char-pointer-and-array*/

  strncpy(array, "coucoucoucou", sizeof(array));
  strncpy(pointr, "coucoucoucou", sizeof(&pointr));

  printf("%s\n", array);
  printf("%s\n", pointr);
}
