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
  int cur = 0; //curseur vers les lettres du mot
  Dictionnary currentNode = d; //Pour se deplacer dans l'arbre
  Dictionnary returnNode = currentNode; //Racine de l'arbre, qu'on return.
  #if DEBUG>0
    printf("Mot : %s\n", word);
  #endif
  while(word[cur]!='\0'){
    if(currentNode->left == NULL){
        #if DEBUG>0
          printf("left est NULL, on ajoute %c\n", word[cur]);
        #endif
        currentNode->car=word[cur];
        currentNode->left=createDictionnary();
        currentNode=currentNode->left;
        cur++;
    }else{
      if(word[cur]<currentNode->car){//+petit
        #if DEBUG>0
          printf("Le char est plus proche que l'arbre, '%c' nouveau fils gauche", word[cur]);
        #endif
        Dictionnary tmp = currentNode;
        currentNode->car = word[cur];
        currentNode->left = NULL;
        currentNode->right = tmp;
      }
      // if(word[cur]>currentNode->car){ //lettre plus loin dans l'alphabet
      //   #if DEBUG>0
      //     printf("Lettre du mot '%c' plus grande que lettre du noeud '%c', on va voir right.\n", word[cur], currentNode->car);
      //   #endif
      //   if(currentNode->right==NULL){
      //     #if DEBUG>0
      //       printf("Right est vide, la lettre devient le nouveau right.\n");
      //     #endif
      //     currentNode->right = createDictionnary();
      //     currentNode->right->car = word[cur];
      //     currentNode = currentNode->right;
      //   }else{
      //     #if DEBUG>0
      //       printf("Right est pas vide et vaut '%c'\n. On va voir le right suivant.", currentNode->car);
      //     #endif
      //       currentNode = currentNode->right;
      //   }
      //
      // }
      // if(word[cur]<currentNode->car){//+petit
      //   #if DEBUG>0
      //     printf("Lettre du mot '%c' plus petite que lettre du noeud '%c', on va creer un nouveau left.\n", word[cur], currentNode->car);
      //   #endif
      //   Dictionnary newRight = currentNode;//on sauvegarde currentNode
      //   currentNode->car=word[cur];
      //   currentNode->left=createDictionnary();
      //   currentNode->right=newRight;
      //   currentNode = currentNode->left;
      //   cur++;
      // }
      // if(word[cur]==currentNode->car){ //Si les deux lettres sont egales
      //   #if DEBUG>0
      //   printf("Letres identiques, on va dans left.\n");
      //   #endif
      //   currentNode = currentNode->left;
      //   cur++;
      // }
    }
  }
  currentNode->left=createDictionnary();//fin de mot
  currentNode->car = '*';
  return returnNode;
}
