/////////////////////////////
// Summation of the NUmbers
////////////////////////////

#include <stdio.h>

int Summation(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0 ;
    printf("The elements are :\n");
    for(iCnt =0 ; iCnt <iSize ; iCnt ++)
    {
       
        iSum = iSum + Arr[iCnt];
    }
   return iSum ;



}

int main()
{
    int iCnt =0 ;
    int iLength = 4;
    int iRet = 0;
    int Brr[iLength];
   
    for(iCnt = 0 ; iCnt < iLength ; iCnt++ )
    {
     
        scanf("%d",&Brr[iCnt]);
    }


    iRet = Summation(Brr,iLength);
    printf("Addition of all elements:%d",iRet);

    return 0 ;

}