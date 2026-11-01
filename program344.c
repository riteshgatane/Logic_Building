#include <stdio.h> 
typedef unsigned int UINT ;

int main()
{   //position 9 and 17
    UINT iMask = 0X10100;
    UINT iNo =0 ;
    UINT iResult = 0 ;

    printf("enter the number : ");
    scanf("%d",&iNo);

    iResult = iNo ^ iMask ;
    printf ("updated number : %d",iResult);
       

    return 0 ; 
}