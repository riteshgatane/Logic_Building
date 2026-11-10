#include<stdio.h>
#include <stdlib.h>

#pragma pack(1)
struct node
{
    int data ;
    struct node *next ;
};

typedef struct node NODE ;
typedef struct node * PNODE ; 
typedef struct node** PPNODE ;

void InsertFirst(PPNODE first , int no )
{
    PNODE newn = NULL ; 

    newn = (PNODE) malloc (sizeof(NODE));

    newn ->data = no ;
    newn ->next = NULL ;

    if(*first == NULL)
    {
        *first = newn ;
    }
    else
    {
        newn -> next = *first ; 
        *first = newn ; 
    }
}

void InsertLast(PPNODE first ,int no )
{
    PNODE newn = NULL ; 
    PNODE temp = NULL ;

    newn = (PNODE) malloc (sizeof(NODE));

    newn ->data = no ;
    newn ->next = NULL ;

    if(*first  == NULL)
    {
        *first = newn ; 
    }

    else
    {
        temp = *first ; 
        while(temp ->next != NULL)
        {
            temp = temp -> next ;
        }
        temp -> next = newn ; 
    }
}

void DeleteFirst(PPNODE first)
{
    PNODE temp = NULL ;

    if(*first  == NULL)
    {
        return ; 
    }

    else
    {
        temp = *first ; 
        while(temp ->next != NULL)
        {
            temp = temp -> next ;
        }
    }  
    
}


int main()
{

    return 0 ;
}