#include <stdio.h> 
typedef unsigned int UINT ;

int main()
{   //POSITION 23
    UINT iMask = 0XFFBFFFFFF;
    UINT iNo = 0 ;

    printf("Enter the number :\n");
    scanf("%d",&iNo);
    
    iNo = iNo & iMask  ;

    printf("updated number is : %d",iNo);

    return 0 ; 
}