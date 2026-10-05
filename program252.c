#include <stdio.h> 
//Finding the Vowel sensitive  

int Count( const char  * str )  
{

    int iCount =0; 

    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
        {
            iCount++;
           
        }
         str++;
    }

    return iCount ;
    
}

int main()
{

    char Arr[50] = {'\0'};
    int iRet = 0 ;
    
    printf("Enter the String:\n");
    scanf("%[^'\n']s",Arr); 

    iRet = Count(Arr);
    printf("Frequency is  is :%d",iRet);


    return 0 ;
}