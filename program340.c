#include <stdio.h> 
typedef unsigned int UINT ;

UINT OffBit(UINT iNo ,UINT ipos)
{   //position 4 
    UINT iMask = 0X1 ;  
    UINT iResult = 0 ;

    if (ipos <1 || ipos > 32)  //filter
    {
        printf("Invalid Bit position\n");
        
    }
    iMask = iMask << (ipos - 1 );  
    iMask = ~(iMask) ;

    iResult = iNo & iMask ;
    return iResult ;

}

int main()
{
    UINT iValue = 0 , iRet = 0 ,iLocation = 0 ;


    printf("Enter the number :\n");
    scanf("%d",&iValue);

    
    printf("Enter the Bit position:");
    scanf("%d",&iLocation);

    iRet = OffBit(iValue ,iLocation);
    printf("updated value :%d",iRet);
   

    return 0 ; 
}