//CHECK THE 7 BIT  
#include <stdio.h>
typedef unsigned int UINT ;

int main()
{
    UINT iMask = 0X40 ;
    UINT iAns = 0 , iNo = 0 ;

    printf("Enter NUmber:\n");
    scanf("%d",&iNo);

    iAns = iNo & iMask ;

    if(iAns == iMask)
    {
        printf("7rd Bit is ON");
    }
    else
    {
        printf("7rd bit is OFF");
    }
    return 0 ; 
}