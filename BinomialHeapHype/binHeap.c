#include "binHeap.h"

binHeap heapHop = NULL;
binHeap Hr = NULL;

struct node* createBinHeap() {
    binHeap np;
    np = NULL;
    return np;
}

int linkBinHeap(binHeap y, binHeap z) {
    y -> parent = z;
    y -> sibling = z -> child;
    z -> child = y;
    z -> degree=z -> degree+1;
}


binHeap createNode(int k) {
    binHeap p; //MAKING A NEW NODE
    p=(binHeap)malloc(sizeof(struct node));
    p -> key = k;
    return p;
}

binHeap unionOfBinHeap(binHeap H1, binHeap H2) {
     binHeap previousX;
     binHeap nextX;
     binHeap x;
     binHeap heapHop = createBinHeap();
     heapHop = mergeBinHeap(H1, H2);
     if(heapHop == NULL) {
        return heapHop;
     }
     previousX = NULL;
     x = heapHop;
     nextX = x -> sibling;
     while(nextX != NULL) {
        if((x -> degree!=nextX -> degree)||((nextX -> sibling!=NULL)&&(nextX -> sibling)->degree==x -> degree)) {
            previousX = x;
            x = nextX;
        }

        else {
         if(x -> key<=nextX -> key) {
             x -> sibling = nextX -> sibling;
             linkBinHeap(nextX, x);
         }

         else {
             if(previousX == NULL){
                 heapHop = nextX;
             }
             else {
                 previousX -> sibling = nextX;
             }
             linkBinHeap(x, nextX);
             x = nextX;
         }
        }
        nextX = x -> sibling;
    }
 return heapHop;
}


binHeap insertIntoBinHeap(binHeap heapHop, binHeap x) {
   binHeap H1 = createBinHeap();
   x -> parent = NULL;
   x -> child = NULL;
   x -> sibling = NULL;
   x -> degree = 0;
   H1=x;
   heapHop = unionOfBinHeap(heapHop,H1);
   return heapHop;
}

//Problem at this level because of an infinite loop :(
binHeap mergeBinHeap(binHeap H1, binHeap H2) {
  binHeap heapHop = createBinHeap();
  binHeap y;
  binHeap z;
  binHeap a;
  binHeap b;
  y = H1;
  z = H2;
  if(y != NULL) {
    if(z != NULL && y -> degree <= z -> degree) {
      heapHop = y;
    }
    else if(z != NULL && y -> degree > z -> degree) {
/* need some modifications here;the first and the else conditions can be merged together!!!!*/
      heapHop = z;
    }
    else {
      heapHop = y;
    }
  }
  else {
   heapHop = z;
  }

while(y != NULL && z != NULL) {
   if(y -> degree < z -> degree) {
      y = y -> sibling;
   }
   else if(y -> degree == z -> degree) {
        a = y -> sibling;
        y -> sibling = z;
        y = a;
   }
   else {
        b = z -> sibling;
        z -> sibling = y;
        z = b;
   }
}
  return heapHop;
}

int displayBinHeap(binHeap heapHop) {
    binHeap p;
    if(heapHop == NULL) {
        printf("\nEmpty heap");
        return 0;
      }
    printf("\nThe root nodes are : \n");
    p = heapHop;
    while(p != NULL) {
        printf("%d", p -> key);
        if(p -> sibling != NULL) {
            printf("-->");
        }
            p = p -> sibling;
    }
    printf("\n");
 }

 binHeap extractMinimumKey(binHeap H1) {
     int min;
     binHeap t = NULL;
     binHeap x = H1;
     binHeap Hr;
     binHeap p;
     Hr = NULL;
     if(x == NULL) {
         printf("\nNothing to extract");
         return x;
      }

   p = x;
   while(p -> sibling != NULL) {
     if((p -> sibling)->key < min) {
        min = (p -> sibling)->key;
        t = p;
        x = p -> sibling;
      }
    p = p -> sibling;
   }

  if(t == NULL && x -> sibling == NULL) {
      H1 = NULL;
  }

  else if(t == NULL) {
      H1 = x -> sibling;
  }

  else if(t -> sibling == NULL) {
      t = NULL;
  }
  else {
      t -> sibling = x -> sibling;
  }

  if(x -> child != NULL) {
    revertList(x -> child);
    (x -> child) -> sibling = NULL;
   }
   heapHop = unionOfBinHeap(H1, Hr);
   return x;
}

int revertList(binHeap y) {
    if(y -> sibling != NULL) {
        revertList(y -> sibling);
        (y -> sibling)->sibling = y;
    }
    else {
        Hr = y;
    }
}

int decreaseTheKey(binHeap heapHop, int i, int k) {
    int temp;
    binHeap p;
    binHeap y;
    binHeap z;
    p = findNode(heapHop, i);
    if(p == NULL)
      {
       printf("\nInvalid choice :/");
       return 0;
      }
 if(k > p -> key) {
      printf("\nNew key bigger than current one :/");
      return 0;
 }
 p -> key = k;
 y = p;
 z = p -> parent;
 while(z != NULL && y -> key < z -> key) {
    temp = y -> key;
    y -> key = z -> key;
    z -> key = temp;
    y = z;
    z = z -> parent;
  }
  printf("\nKey reduced successfully");
}

int deleteFromBinHeap(binHeap heapHop, int k) {
    binHeap np;
    if(heapHop == NULL) {
        printf("\nEmpty head");
        return 0;
    }

    decreaseTheKey(heapHop, k, -1000);
    np = extractMinimumKey(heapHop);
    if(np != NULL)
    printf("\nNode deleted successfully");
}

binHeap findNode(binHeap heapHop, int k) {

    binHeap x = heapHop;
    binHeap p = NULL;

    if(x -> key == k) {
        p = x;
        return p;
    }

    if(x -> child != NULL && p == NULL) {
        p = findNode(x -> child, k);
    }

    if(x -> sibling != NULL && p == NULL) {
        p = findNode(x -> sibling, k);
    }

return p;
}

// "Le 'master theorem' de la vie c'est mon climatiseur" -Freud
