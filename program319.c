#include <stdio.h>
typedef unsigned int UINT ;

int main()
{
    UINT iMask = 0X1 ;
    int iCnt = 0 ;

    printf("%X\n",iMask);
    iMask = iMask << 1 ; //1

    printf("%X\n",iMask);
    iMask = iMask << 1 ; //2

    printf("%X\n",iMask);
    iMask = iMask << 1 ; //4

    printf("%X\n",iMask);
    iMask = iMask << 1 ; //8

    printf("%X\n",iMask);
    iMask = iMask << 1 ; //16

    printf("%X\n",iMask);
    iMask = iMask << 1 ; //32

    printf("%X\n",iMask);
    iMask = iMask << 1 ; //64

    printf("%X\n",iMask);
    iMask = iMask << 1 ; //128

    printf("%X\n",iMask);
    iMask = iMask << 1 ; //256r

    printf("%X\n",iMask);
    iMask = iMask << 1 ;

    printf("%X\n",iMask);
    iMask = iMask << 1 ;

    printf("%X\n",iMask);
    iMask = iMask << 1 ;

    printf("%X\n",iMask);
    iMask = iMask << 1 ;
    return 0 ; 
}