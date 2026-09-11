#include <stdio.h>
//ERROR due to stdlib.h

int main()
{
    int *Brr = NULL ;
    int iLength = 0,iCnt = 0  ;
    ///Step1: Accept the number of elements
     printf("Emter the Number of elements:");
    scanf("%d",iLength);

     //Step 2:Allocate the memory 
    Brr = (int *) malloc(iLength * sizeof(int ));

    //Step 3 :Accept the Value from USer 
    for (iCnt = 0 ; iCnt < iLength ; iCnt ++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    //Step 4: USe the memory(logic)


    // Step 5: Deaalocate the memory 
    free(Brr);
    return 0 ;
}