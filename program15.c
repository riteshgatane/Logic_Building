#include<stdio.h>
#include<stdbool.h>   ///Header file for boolean 
/////////////////////////////////////////////////////////
//  
//   Function name: CheckEvenOdd
//   Input:         int
//   Output:        int 
//   Description:   Take the input and give even or odd
//   Date:          10/05/2026
//   Author:        Ritesh Changdeo Gatane
////////////////////////////////////////////////////////
bool CheckEvenOdd(int iNo)
{
    int iRemainder = 0;
    iRemainder = iNo % 2 ;

    if(iRemainder == 0)   //
    {
        return true;
    }
    else
    {
        return false ; 
    }

    return iRemainder;
}
    
int main()
{
    int iValue = 0;
    bool bRet = false;
   

    printf("Enter Number to check the umber is even or odd:");
    scanf("%d",&iValue);

    bRet =CheckEvenOdd(iValue);
    if(bRet == true) 
    {
        printf("%d is Even ",iValue);
    }
    else 
    {
        printf("%d is Odd",iValue);
    }

    return 0 ;
}