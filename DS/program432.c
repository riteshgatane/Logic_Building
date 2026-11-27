#include <stdio.h>
#include <stdlib.h>

#pragma(1)

struct node
{
    int data ;
    struct node *previous ;
    struct node *next ;
};

typedef struct  node NODE ;
typedef struct  node* PNODE ;
typedef struct  node** PPNODE ;

void Dispaly(PNODE head ,PNODE last)
{}

int Count(PNODE head ,PNODE last)
{return 0 ;}

void InsertFirst(PPNODE first ,PPNODE last ,int iNo)
{}

void InsertLast(PPNODE first ,PPNODE last ,int iNo)
{}

void InsertAtPos(PPNODE first ,PPNODE last ,int iNo ,int iPos)
{}

void DeleteFirst(PNODE head ,PNODE last)
{}

void DeleteLast(PNODE head ,PNODE last)
{}

void DeleteAtPos(PNODE head ,PNODE last , int iPos)
{}



int main()
{
    PNODE head = NULL ;
    PNODE last = NULL ;
    return 0 ;
}