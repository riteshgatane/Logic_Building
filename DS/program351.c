#include <stdio.h>

struct  node
{
   int data ;            //4(int)
   struct  node *next ;  //8(pointer)
};

int main()
{
    struct  node obj ;
    printf("%lu\n",sizeof(obj));   //16    //unsigned integer  
            //4(interger) + 4(padding) + 8(pointer)
    return 0 ; 
}