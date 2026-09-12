#include <stdio.h>
#include<stdlib.h>
#include <stdbool.h>

bool LinearSearch(int Arr[], int iSize , int iNo )
{
    int iCnt = 0;
    int iCount = 0;

    for (iCnt = 0 ; iCnt < iSize ; iCnt ++)
   { 
    if((Arr[iCnt]) == iNo )
    {
        iCount++; 
        break;    //EARLY EXIT 
    }
   }
   if(iCount == 0)
   {
    return false ;
   }
   else
   {
    return true ;
   }
    
}

int main()
{
    int *Brr = NULL ;
    int iLength = 0,iCnt = 0  ;
    bool  bRet = false ;
    int iValue = 0 ;
    
    printf("Enter the Number of elements:");
    scanf("%d",&iLength);
  
    Brr = (int *)malloc(iLength * sizeof(int ));

  
    printf("Enter the elements:\n");
    for (iCnt = 0 ; iCnt < iLength ; iCnt ++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    
    printf("Enter The element that you want to Search:");
    scanf("%d",&iValue);

    bRet = LinearSearch(Brr , iLength ,iValue );

    if(bRet == true )
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



