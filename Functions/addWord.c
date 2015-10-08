#include "../dico.h"
/*
Algo grossier :

Check lettre par lettre :
Si left->car = word[c], c++ et currentNode = currentNode->left;
Si left-car après currentNode->left, currentNode=currentNode->right;
Si left->car avant currentNode->left, 'faut foutre leftNode->left dans ->right et mettre le caractere actuel en tant que nouveau left
*/
Dictionnary addWord(Dictionnary d, char* word){
  char c = 0;
  Dictionnaire currentNode = d;
  while(c!='\0'){

  }
}
