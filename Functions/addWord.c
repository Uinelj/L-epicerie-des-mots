#include "../dico.h"
#define DEBUG 1
/*
Algo grossier :

Check lettre par lettre :
Si left->car = word[c], c++ et currentNode = currentNode->left;
Si left-car après currentNode->left, currentNode=currentNode->right;
Si left->car avant currentNode->left, 'faut foutre leftNode->left dans ->right et mettre le caractere actuel en tant que nouveau left
*/
Dictionnary addWord(Dictionnary d, char* word){
  //TODO Ajouter * a la fin du mot.
  if(word[0] != '\0'){
    if(NULL == d){
      d = malloc(sizeof(Dictionnary)); //On alloue la memoire a d.
      d->car = word[0]; //On y met le premier caractere de la chaine
      word++; //on enlève le premier caractere de la chaine
      d->left = addWord(d->left, word); //On fait la meme chose sur le fils droit.
    }else
    if(word[0] < d->car){
      //TODO
      //printf("W %c T %c", word[0], d->car);
      char tmp = d->car;
      d->car = word[0];

      Dictionnary newNode = createDictionnary(); //New 'old' node
      newNode = malloc(sizeof(Dictionnary));
      newNode->car = tmp;
      newNode->left = d->left;
      newNode->right = d->right;
      word++;
      d->right = newNode;
      d->left = NULL;
      d->left = addWord(d->left, word);
      // d->left = addWord(d->left, word) sa marsh pa je c pa pk :/

    }else
    if(word[0] > d->car){
      d->right = addWord(d->right, word);
    }else
    if(word[0] == d->car){

      word++;
      d->left = addWord(d->left, word);
    }
  }
  return d;
}
