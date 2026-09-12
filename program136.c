#include <stdio.h>
#include<stdlib.h>

// Searching the maximum Number
//Time Complexity : O(N)
int Minimum(int Arr[], int iSize  )
{
    int iCnt = 0;
    int iMin = 0;

    iMin = Arr[0];

    for (iCnt = 0 ; iCnt < iSize ; iCnt ++)
   { 
    if((Arr[iCnt]) < iMin )
    {
        iMin = Arr[iCnt]; 
    }
   }
   return iMin ;
    
}

int main()
{
    int *Brr = NULL ;
    int iLength = 0,iCnt = 0  ;
    int iRet = 0 ;
    
    printf("Enter the Number of elements:");
    scanf("%d",&iLength);
  
    Brr = (int *)malloc(iLength * sizeof(int ));

  
    printf("Enter the elements:\n");
    for (iCnt = 0 ; iCnt < iLength ; iCnt ++)
    {
        scanf("%d",&Brr[iCnt]);
    }


    iRet = Minimum(Brr , iLength  );
    printf("Maximum element is %d",iRet);
    
    free(Brr);

    return 0 ;
}



