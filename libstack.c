#include "libstack.h"

Stack createStack(){
  return NULL;
}
Stack push(Stack s, Dictionnary d){
  if(s->dict == NULL){
    s->dict = d;
    return s;
  }
  Stack newNode = createStack();
  newNode = malloc(sizeof(Stack));
  newNode->dict = d;
  newNode->nxt = s;
  return newNode;
}
Stack pop(Stack s){
  return s->nxt;
}
