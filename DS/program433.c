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
{
    PNODE newn = NULL ;
    newn = (PNODE) malloc (sizeof(NODE));

    newn -> data = iNo ;
    newn -> previous = NULL ;
    newn -> next = NULL ;

    if((*first == NULL) && (*last == NULL))
    {
        *first = newn ;
        *last = newn ;
    }
    else
    {
        newn -> next = *first ;
        (*first) -> previous = newn ;
        *first = newn ;
    }
    (*last) -> next = *first ;
    (*first) -> previous = *last ;
}

void InsertLast(PPNODE first ,PPNODE last ,int iNo)
{
    PNODE newn = NULL ;
    newn = (PNODE) malloc (sizeof(NODE));

    newn -> data = iNo ;
    newn -> previous = NULL ;
    newn -> next = NULL ;

    if((*first == NULL) && (*last == NULL))
    {
        *first = newn ;
        *last = newn ;
    }
    else
    {
       


    }
    (*last) -> next = *first ;
    (*first) -> previous = *last ;
}

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
    PNODE tail = NULL ;

    InsertFirst(&head ,&tail , 11) ;
    InsertFirst(&head ,&tail , 21) ;
    InsertFirst(&head ,&tail , 21) ;

    return 0 ;
}