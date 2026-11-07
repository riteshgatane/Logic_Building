#include <stdio.h>

#pragma pack(1)   

struct  node
{
   int data ; 
   struct  node *next ;  
};


typedef struct node NODE ;
typedef struct node * PNODE ;

int main()
{
    PNODE head = NULL ; 
    NODE obj1 , obj2 ,obj3  ;
    PNODE temp = NULL ; 


    head = &obj1 ; 

    obj1.data =11 ;
    obj1.next = &obj2 ;

    obj2.data = 21 ;
    obj2.next = &obj3 ; 

    obj3.data = 51 ; 
    obj3.next = NULL ; 

    temp = head ; //100

    //ITERATION
    while(temp != NULL)
    {
        printf("%d\n",temp -> data );
        temp = temp -> next ; 
    }
     
    printf("%d",temp);  //AFTER THE ITERATION IT WILL POINT TO NULL AT THE END 

    return 0 ; 
}