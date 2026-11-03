#include <stdio.h> 
typedef unsigned int UINT ;

int main()
{   //position 3 and 8
    UINT iMask1 = 0X00000004;
    UINT iMask2 = 0X00000080 ; 
    UINT iMask = 0 ;
    UINT iNo =0;
    UINT iResult = 0;
    iMask = iMask1 | iMask2 ;

    printf("enter the number : ");
    scanf("%d",&iNo);

    iResult = iNo ^ iMask ;
    printf ("updated number : %d",iResult);
    
    return 0 ; 
}