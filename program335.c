//TOGGLE USING XOR
#include <stdio.h> ///
typedef unsigned int UINT ;

UINT ToggleBit(UINT iNo ,UINT ipos)
{
    UINT iMask = 0X1 ;  //LSB    00000001
    UINT iResult = 0 ;

    if (ipos <1 || ipos > 32)
    {
        printf("Invalid Bit position\n");
        
    }
    iMask = iMask << (ipos -1 );  //Shiftes the Bit to left

    iResult = iNo ^ iMask ; //toggle 

    return iResult ;

}

int main()
{
    UINT iValue = 0 , iRet = 0 ,iLocation = 0 ;

    printf("Enter the Bit position:");
    scanf("%d",&iLocation);

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = ToggleBit(iValue ,iLocation);
    printf("updated value :%d",iRet);
   

    return 0 ; 
}