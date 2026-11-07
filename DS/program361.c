#include <stdio.h>//

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

    obj1.data =12 ;
    obj1.next = &obj2 ;

    obj2.data = 23 ;
    obj2.next = &obj3 ; 

    obj3.data = 55 ; 
    obj3.next = NULL ; 

    temp = head ; //100

    //SEQUENCE  
    printf("%d\n",temp -> data ); //12

    temp = temp -> next ;          //200
    printf("%d\n",temp -> data );  //23

    temp = temp -> next ;          //300
    printf("%d\n",temp -> data );  //55

    temp = temp -> next ;          //NULL

    return 0 ; 
}