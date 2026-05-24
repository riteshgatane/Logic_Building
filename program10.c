//////////////////////////////////////////////////////
//
// Include required Header Files
//
//////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////
//  
//   Function name: AddTwoNumbers
//   Input:         float,float
//   Output:        float
//   Description:   Performs Addition of two floats
//   Date:          08/05/2026
//   Author:        Ritesh Changdeo Gatane
////////////////////////////////////////////////////////
float AddTwoNumbers(
                        float fNo1,  //First input
                        float fNo2  ///Second input 
                    )
{
    float fAns= 0.0f ; ///Varaible to Store Result 
    fAns = fNo1 + fNo2  ;    //PErform Addition
    return fAns;
}

//////////////////////////////////////////////////////
//
// Application to PErfom Addition of Two float Values
//
//////////////////////////////////////////////////////

int main()
{     ///variable creation with default values
    float fValue1 = 0.0f ;    ///to store first input
    float fValue2=0.0f ;     ///To store Second input
    float fResult= 0.0f ;  ///To store the result

    printf("Enter the first number:\n");
    scanf("%f",&fValue1);


    printf("Enter the SEcond number:\n");
    scanf("%f",&fValue2);

     fResult = AddTwoNumbers(fValue1, fValue2);  

    printf("Addition is:%f\n",fResult);


    return 0 ;
}

//////////////////////////////////////////////////////
//
// Input : 10.0     11.0
// Output: 21.0
//
//////////////////////////////////////////////////////