#include <stdio.h>

#pragma pack(1)   //This is allocated 1 by 1 byte and remove padding 

struct  node
{
   int data ;  //4
   struct  node *next ;  //8

};


int main()
{
    struct  node obj ;

    obj.data =11 ;
    obj.next = NULL ;

    printf("%d\n",obj.data);  // . referencing operator 
    

    return 0 ; 
}