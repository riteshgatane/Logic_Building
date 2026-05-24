
#include<stdio.h>

int main()
{     ///variable creation with default values
    float fValue1 = 0.0f ;    ///to store first input
    float fValue2=0.0f ;     ///To store Second input
    float fResult= 0.0f ;  ///To store the result

    printf("Enter the first number:\n");
    scanf("%f",&fValue1);


    printf("Enter the SEcond number:\n");
    scanf("%f",&fValue2);

    fResult = fValue1+fValue2;   //Perform the Addition

    printf("Addition is:%f\n",fResult);


    return 0 ;
}