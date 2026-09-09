#include <stdio.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;
    printf("The elements are :\n");
    for(iCnt =0 ; iCnt <iSize ; iCnt ++)
    {
        printf("%d\n",Arr[iCnt]);
    }



}

int main()
{
    int iCnt =0 ;
    int iLength = 4;
    int Brr[iLength];
    printf("Enter the Elements:\n");
    for(iCnt = 0 ; iCnt < iLength ; iCnt++ )
    {
     
        scanf("%d",&Brr[iCnt]);
    }


    Display(Brr,iLength);

    return 0 ;

}