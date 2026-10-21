#include <stdio.h>

int main()
{
    unsigned int iMask = 4 ; //0 1 0 0
    unsigned int iAns = 0 , iNo = 0 ;

    printf("Enter NUmber:\n");
    scanf("%d",&iNo);

    iAns = iNo & iMask ;

    if(iAns == iMask)
    {
        printf("3rd Bit is ON");
    }
    else
    {
        printf("3rd bit is OFF");
    }

    return 0 ; 
}