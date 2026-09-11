#include <stdio.h>
#include <stdlib.h>

int Summation(int Arr[],int size)
{
    int iCnt = 0 ;
    int iSum =0 ;

    for(iCnt = 0 ; iCnt < size ; iCnt ++)
    {
        iSum = Arr[iCnt] + iSum ;
    }
    return iSum ;


}

int main()
{
    int *Brr = NULL ;
    int iLength = 0;
    int iCnt = 0;
    int iRet =0;

    printf("Emter the Number of elements:");
    scanf("%d",&iLength);

    Brr = (int * )malloc( sizeof(int)* iLength );

    printf("Enter the Elements:");
    for(iCnt =1 ; iCnt < iLength ; iCnt++ )
    {
        scanf("%d",&Brr[iCnt]);

    }

    iRet = Summation(Brr , iLength);
    printf("Summation is :%d",iRet);
    
    free(Brr);

    return 0 ;
}