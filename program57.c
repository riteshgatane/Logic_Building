///iNput : 5
//Output: 1 3  5


#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt=1 ; iCnt <=iNo ; iCnt +=2)    ///1 to 5
    
    {
       
        printf("%d\t",iCnt);
    }

    printf("\n");
    
}

int main()
{

    int iValue =0 ;
    printf("Enter the number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0 ;
}