#include <stdio.h>/////
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;
    printf("Elements of the Array are:\n");
     for (iCnt = 0 ; iCnt < iSize ; iCnt ++)
    {
        printf("%d",Arr[iCnt]);
    }
    
}

int main()
{
    int *Brr = NULL ;
    int iLength = 0;
    int iCnt = 0  ;
    ///Step1: Accept the number of elements

     printf("Enter the Number of elements:");
    scanf("%d",&iLength);

     //Step 2:Allocate the memory 
    Brr = (int *) malloc(iLength * sizeof(int ));

    //Step 3 :Accept the Value from USer 
    printf("Enter the elements:\n");
    for (iCnt = 0 ; iCnt < iLength ; iCnt ++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    //Step 4: USe the memory(logic)
    Display(Brr , iLength);


    // Step 5: Deaalocate the memory 
    free(Brr);
    return 0 ;
}