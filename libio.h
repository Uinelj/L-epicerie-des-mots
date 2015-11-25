#ifndef LIBIO_H
#define LIBIO_H
#include "./libdico.h"
#include "./libstack.h"
#include <string.h>

Dictionnary load(Dictionnary d, char *path);
int save(Dictionnary d, char *path);
Dictionnary parseStr(Dictionnary d, char *str, Stack s);
char *serialize(Dictionnary d);
void readTree(Dictionnary d);
Dictionnary writeTree(Dictionnary d, char *str);
void saveDictionnary(Dictionnary d, FILE *fp);
Dictionnary loadDictionnary(Dictionnary d, FILE *fp);
#endif
