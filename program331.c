//TOGGLE USING XOR
#include <stdio.h>
typedef unsigned int UINT ;

int main()
{
    UINT iMask = 0 ;
    UINT iNo = 0 ;

    printf("Enter the number :\n");
    scanf("%d",&iNo);

            //position 11
    iMask = 0X400 ;
    
    iNo = iNo ^ iMask  ;

    printf("updated number is : %d",iNo);

    return 0 ; 
}