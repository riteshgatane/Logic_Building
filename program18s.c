#include<stdio.h>

int CalculateTicketPrice(int iAge)
{
    if(iAge >=0 && iAge <=5)    ///(True And True ) => True || (False And True ) => False 
    {
        return 0;
    }
    else if(iAge >=6 && iAge <=18)
    {
        return 500 ;
    }

    else if(iAge >=19 && iAge <= 50 )
    {
        return 900;
    }
    else
    {
        return 400;
    }



}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Please enter your Age to Calculate Ticket Price:");
    scanf("%d",&iValue);

    iRet = CalculateTicketPrice(iValue);
    printf("Your Ticket price will be %d Ruppes",iRet);

    return 0 ;
}