#include "./libdico.h"
#include <string.h>
Dictionnary load(char *path);
int save(Dictionnary d, char *path);
char *serialize(Dictionnary d);
