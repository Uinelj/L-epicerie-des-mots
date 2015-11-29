#include <stdio.h>
#include <stdlib.h>

typedef struct node
       {
         int key;
         int degree;
         struct node *parent, *child, *sibling;
     }*binHeap;

binHeap createBinHeap();
binHeap createNode(int);
int linkBinHeap(binHeap, binHeap);
binHeap unionOfBinHeap(binHeap, binHeap);
binHeap insertIntoBinHeap(binHeap, binHeap);
int displayBinHeap(binHeap);
int deleteFromBinHeap(binHeap, int);
binHeap mergeBinHeap(binHeap, binHeap);
int decreaseTheKey(binHeap, int, int);
binHeap extractMinimumKey(binHeap);
int revertList(binHeap);
binHeap findNode(binHeap, int);

// "Nous étions 300, ils étaient 10, le père Noel est bleu la nuit" - Erestas 
