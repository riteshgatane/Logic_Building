#include <stdio.h> 
typedef unsigned int UINT ;

int main()
{   //position 3 and 7
    UINT iMask = 0X00000044;
    UINT iNo =0 ;
    UINT iResult = 0 ;

    printf("enter the number : ");
    scanf("%d",&iNo);

    iResult = iNo ^ iMask ;
    printf ("updated number : %d",iResult);
       

    return 0 ; 
}