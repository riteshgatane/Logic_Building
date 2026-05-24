/* ALGORITHM 
START
        Accept first number as NO1    ///which type
        Accept Second number as NO2
        Perform Addition of NO1 and NO2
        Display the result

STOP

*/

#include<stdio.h>

int main()
{     ///variable creation with default values
    float i = 0.0f ,j =0.0f ,k= 0.0f ;

    printf("Enter the first number:\n");
    scanf("%f",&i);


    printf("Enter the SEcond number:\n");
    scanf("%f",&j);

    k = i+j;
    printf("Addition is:%f\n",k);


    return 0 ;
}