#include <stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iSize)
{
    int iCount = 0;
    int iCnt = 0;
  for (iCnt = 0 ; iCnt < iSize ; iCnt ++)
    {if ((Arr[iCnt]% 2) == 0)
    {
        iCount++ ;
    }}
    

    return iCount ;
    
}

int main()
{
    int *Brr = NULL ;
    int iLength = 0,iCnt = 0  ;
    int iRet = 0 ;
    
    ///Step1: Accept the number of elements
     printf("Enter the Number of elements:");
    scanf("%d",&iLength);

     //Step 2:Allocate the memory 
    Brr = (int *)malloc(iLength * sizeof(int ));

    //Step 3 :Accept the Value from USer 
    printf("Enter the elements:\n");
    for (iCnt = 0 ; iCnt < iLength ; iCnt ++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    //Step 4: USe the memory(logic)
    iRet = CountEven(Brr , iLength);
    printf("NUmber of Even elements :%d",iRet);


    // Step 5: Deaalocate the memory 
    free(Brr);
    return 0 ;
}