#include<stdio.h>
void Display(int iNo1)
{
    int iCnt = 0; 
    if (iCnt < 0)
    {
        printf("INvalid INput ");
    }
    else
    { 
        for(iCnt=iNo1; iCnt >= 0 ;iCnt--)
        {
            printf("%d\n",iCnt);
        }


    }

    
}

int main()
{
    int ivlaue = 0 ;

    printf("Enter the Number of time you want to Display:");
    scanf("%d",&ivlaue);
    
    Display(ivlaue);
    return 0 ;
}