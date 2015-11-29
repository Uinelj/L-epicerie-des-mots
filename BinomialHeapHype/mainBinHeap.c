#include "binHeap.h"

int main (int argc, char *argv[]) {
    int i,key,m,l;
    struct node* p;
    struct node* np;
    char ch;
    printf("\nEnter the number of elements:");
    scanf("%d", &key);
    printf("\nEnter the elements:\n");

    binHeap heapHop = NULL;

    for(i = 1; i <= key; i++) {
        scanf("%d",&m);
        np = createNode(m);
        heapHop = insertIntoBinHeap(heapHop, np);
    }
    displayBinHeap(heapHop);

    do {
        printf("\nMenu: \n");
        printf("\n1)Insert an element\n2)Extract the minimum key node\n3)Decrease a node key\n4)Delete a node\n5)Leave\n");
        scanf("%d", &l);
        switch(l)
    {
        case 1:do {
            printf("\nEnter the element to be inserted:");
            scanf("%d", &m);
            p = createNode(m);
            heapHop = insertIntoBinHeap(heapHop, p);
            printf("\nNow the heap is :\n");
            displayBinHeap(heapHop);
            printf("\nInsert more(y/Y)= \n");
            fflush(stdin);
            scanf("%c", &ch);
            }while(ch == 'Y' || ch == 'y');
         break;

        case 2:do {
            printf("\nExtracting the minimum key node");
            p=extractMinimumKey(heapHop);
            if(p!=NULL)
            printf("\nThe extracted node is %d",p -> key);
            printf("\nNow the heap is:\n");
            displayBinHeap(heapHop);
            printf("\nExtract more(y/Y)\n");
            fflush(stdin);
            scanf("%c", &ch);
            }while(ch == 'Y' || ch == 'y');
        break;

        case 3:do {
            printf("\nEnter the key of the node to be decreased: ");
            scanf("%d", &m);
            printf("\nEnter the new key : ");
            scanf("%d", &l);
            decreaseTheKey(heapHop,m,l);
            printf("\nNow the heap is:\n");
            displayBinHeap(heapHop);
            printf("\nDecrease more(y/Y)\n");
            fflush(stdin);
            scanf("%c", &ch);
             }while(ch == 'Y' || ch == 'y');
        break;

        case 4:do {
            printf("\nEnter the key to be deleted: ");
            scanf("%d", &m);
            deleteFromBinHeap(heapHop, m);
            printf("\nDelete more(y/Y)\n");
            fflush(stdin);
            scanf("%c", &ch);
            }while(ch == 'y' || ch == 'Y');
        break;

        case 5:printf("\nFin du game\n");break;
        default :printf("\nInvalid entry :/ Try again please\n");
      }
  }while(l!=5);
}

// "Toi, tu sens bon le savon toi" -Anonyme
