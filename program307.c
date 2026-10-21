//Accept Number and Count number oF 1's
#include <stdio.h>

int main()
{
 
    int No = 0  , iCount = 0 , iDigit = 0 ;
    

    printf("Enter NUmber:\n");
    scanf("%d",&No);

    while ( No != 0)
    {
        iDigit = No % 2  ;
        iCount = iDigit + iCount;
        No = No / 2 ;
    }
    printf("No of 1's :%d",iCount);
    


    return 0 ; 
}