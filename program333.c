//TOGGLE USING XOR
#include <stdio.h> ///
typedef unsigned int UINT ;

int main()
{
    UINT iMask = 0 ;
    UINT iNo = 0 ;
    UINT ipos = 0X1 ;

    printf("Enter the Bit position:");
    scanf("%d",&ipos);
    iMask = iMask << (ipos - 1);


    printf("Enter the number :\n");
    scanf("%d",&iNo);
    
    iNo = iNo ^ iMask  ;

    printf("updated number is : %d",iNo);

    return 0 ; 
}