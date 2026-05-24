#include<stdio.h>    ////type,high accuracy  or low accuracy ,negative 
                    // or positive

/////////////////////////////////////////////////////////
//  
//   Function name: AddTwoNumbers
//   Input:         integer
//   Output:        integer
//   Description:   Performs Addition of two floats
//   Date:          08/05/2026
//   Author:        Ritesh Changdeo Gatane
////////////////////////////////////////////////////////

int main()
{
    int i,j,k ;

    printf("Enter the first number:\n");
    scanf("%d",&i);

    printf("Enter the Second number:\n");
    scanf("%d",&j);

    k= i+j ;
    printf("Sum is:%d",k);

    return 0 ;
}