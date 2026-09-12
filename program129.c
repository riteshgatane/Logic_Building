#include <stdio.h>
#include<stdlib.h>
#include <stdbool.h>


bool LinearSearch(int Arr[], int iSize)
{
    int iCnt = 0;
    bool bflag = false ;

    for (iCnt = 0 ; iCnt < iSize ; iCnt ++)
   { 
    if((Arr[iCnt]) == 11)
    {
        bflag = true ;
        break; 

    }
   }

   return bflag ;
    
}

int main()
{
    int *Brr = NULL ;
    int iLength = 0,iCnt = 0  ;
    bool bRet = false ;
    
    printf("Enter the Number of elements:");
    scanf("%d",&iLength);

  
    Brr = (int *)malloc(iLength * sizeof(int ));

  
    printf("Enter the elements:\n");
    for (iCnt = 0 ; iCnt < iLength ; iCnt ++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    bRet = LinearSearch(Brr , iLength);

    if(bRet == true)
    {
        printf("Element is Present ");
    }
    else
    {
        printf("Element is not present");
    }
    
    free(Brr);

    return 0 ;
}