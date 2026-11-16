#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)

struct node 
{
    int data ;  //4
    struct node * next ; //8
    struct  node * previous ;  //8     //$
};

typedef struct node NODE ;
typedef struct node*  PNODE ;
typedef struct node** PPNODE;
int main()
{
    printf("%d",sizeof(NODE));  //20
    return 0  ;
}