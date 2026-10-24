#include <stdio.h>
typedef unsigned int UINT ;

int main()
{
    UINT iMask = 0X1 ;
    UINT iAns = 0 , iNo = 0 ;
    UINT iPos = 0 ;

    printf("Enter NUmber:\n");
    scanf("%d",&iNo);

    printf("Enter The Position");
    scanf("%d",&iPos);

    iMask = iMask << (iPos - 1);
    iAns = iNo & iMask ;

    if(iAns == iMask)
    {
        printf("%rd Bit is ON",iPos);
    }
    else
    {
        printf("%rd bit is OFF",iPos);
    }
    return 0 ; 
}