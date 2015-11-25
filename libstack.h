#ifndef LIBSTACK_H
#define LIBSTACK_H

#include "libdico.h"
typedef struct nodestack{
  Dictionnary dict;
  struct nodestack *nxt;
} *Stack;

Stack createStack();
Stack push(Stack s, Dictionnary d);
Stack pop(Stack s);

#endif
