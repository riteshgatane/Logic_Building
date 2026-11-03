#include <stdio.h>    ///
typedef unsigned int UINT ;

UINT ToggleBits(UINT iNo , UINT ipos1 ,UINT ipos2)
{
    UINT iMask = 0 ;
    UINT iMask1 = 0X1 ;
    UINT iMask2 = 0X1 ;
    UINT iResult = 0 ; 

    iMask1 = iMask << (ipos1 -1) ; 
    iMask2 = iMask << (ipos1 -1) ; 

    iMask = iMask1 | iMask2 ;

    iResult = iNo ^ iMask ;

    return iResult ;
    
}
int main()
{   
    UINT iValue = 0 ;
    UINT iLocation1 =  0;
    UINT iLocation2 = 0 ;
    UINT iRet = 0 ;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    printf("Enter First Bit Position : \n ");
    scanf("%d",iLocation1);

    printf("Enter Second Bit Position : \n");
    scanf("%d",iLocation2);

    iRet = ToggleBits(iValue , iLocation1 , iLocation2);

    printf("Updated Number :%d\n",iRet);
    return 0 ; 
}