#include <stdio.h> 
typedef unsigned int UINT ;

UINT OffBit(UINT iNo ,UINT ipos)
{   //position 4 
    UINT iMask = 0XFFFFFFF7 ;  //LSB    00000001
    UINT iResult = 0 ;

    if (ipos <1 || ipos > 32)
    {
        printf("Invalid Bit position\n");
        
    }
    iMask = iMask << (ipos - 1 );  //Shiftes the Bit to left

    iResult = iNo & iMask ; //toggle 

    return iResult ;

}

int main()
{
    UINT iValue = 0 , iRet = 0 ,iLocation = 0 ;

    printf("Enter the Bit position:");
    scanf("%d",&iLocation);

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = OffBit(iValue ,iLocation);
    printf("updated value :%d",iRet);
   

    return 0 ; 
}