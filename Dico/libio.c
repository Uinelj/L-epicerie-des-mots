#include "libio.h"
#define NULL_MARKER '#'
int save(Dictionnary d, char *path){
  FILE *fp = fopen(path, "w");
  if(fp == NULL){
    return 1;
  }
  saveDictionnary(d, fp);
  fclose(fp);
  return 0;
}

Dictionnary load(Dictionnary d, char *path){
  FILE *fp = fopen(path, "r");
  if(fp == NULL){
    return NULL;
  }
  loadDictionnary(d, fp);
  fclose(fp);
  return d;
}

Dictionnary loadDictionnary(Dictionnary d, FILE *fp){
  char buf;
  if(d == NULL){
    d=createDictionnary();
    d=malloc(sizeof(Dictionnary));
  }
  if(!fscanf(fp, "%c", &buf) || buf == '#'){
    return NULL;
  }else{
    d->car = buf;
    printf("SV: %c\n", d->car);
    d->left = loadDictionnary(d->left, fp);
    d->right = loadDictionnary(d->right, fp);
    return d;
  }
}

void saveDictionnary(Dictionnary d, FILE *fp){
  if(d==NULL){
    fprintf(fp, "#");
  }else{
    fprintf(fp, "%c", d->car);
    saveDictionnary(d->left, fp);
    saveDictionnary(d->right, fp);
  }
}

//"Quand une femme change de coiffure, elle change de coiffure." - Aristide Dupont
