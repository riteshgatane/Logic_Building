#include <stdio.h>
#include <stdlib.h>

#pragma pack(1)   

struct  node
{
   int data ; //4
   struct  node *next ;  //8
};

typedef struct node NODE ;
typedef struct node * PNODE ;

int main()
{
    struct node *  newn = NULL ;
            //void * to(typecasting)
    newn = (struct node *) malloc (sizeof(struct node)); //dynamic memory

    newn -> data =11;
    newn -> next == NULL ;

    printf ("%d",newn -> data); 
    return 0 ; 
}