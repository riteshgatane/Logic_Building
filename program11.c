/*ALGORITHM 
    START
        Acceptt number as No
        if No is Completely division by two2
           then print even 
        Otherwise 
            PRint odd
    STOP

    START 
        Acceptt number as No
        dIVIDE No by 2
        If remainder is 0 
            then print the No as Even 
        otherwise 
            print the No as Odd 

            STOP
*/


#include<stdio.h>
int main()
{
    int iValue = 0;
    int iRemainder = 0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);

    iRemainder = iValue % 2 ;

    if(iRemainder == 0)     ///  == Comparision operator
    {
        printf("Number is even \n");
    }
    else{
        printf("Number is ODD\n");
    }

    return 0 ;
}