#include <stdio.h>

#pragma pack(1)   //This  allocates memmory 1 by 1 byte and remove padding 

struct  node
{
   int data ;  
   struct  node *next ;  
};


int main()
{
    struct  node obj ;

    printf("%lu\n",sizeof(obj));   //16    //unsigned integer  
            //4(interger)  + 8(pointer)

    return 0 ; 
}