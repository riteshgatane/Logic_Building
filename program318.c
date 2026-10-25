#include <stdio.h>
typedef unsigned int UINT ;

int main()
{
    UINT iMask = 0X1 ;
    int iCnt = 0 ;

    printf("%d\n",iMask);
    iMask = iMask << 1 ; //1

    printf("%d\n",iMask);
    iMask = iMask << 1 ; //2

    printf("%d\n",iMask);
    iMask = iMask << 1 ; //4

    printf("%d\n",iMask);
    iMask = iMask << 1 ; //8

    printf("%d\n",iMask);
    iMask = iMask << 1 ; //16

    printf("%d\n",iMask);
    iMask = iMask << 1 ; //32

    printf("%d\n",iMask);
    iMask = iMask << 1 ; //64

    printf("%d\n",iMask);
    iMask = iMask << 1 ; //128

    printf("%d\n",iMask);
    iMask = iMask << 1 ; //256r

    return 0 ; 
}