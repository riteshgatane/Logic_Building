#include <stdio.h> 
typedef unsigned int UINT ;

int main()
{   
    UINT iMask = 0XFFFFFFbF;

    printf("BEFORE : %X\n",iMask);

    iMask = ~(iMask);

    printf("After : %x",iMask);
       

    return 0 ; 
}