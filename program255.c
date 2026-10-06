#include <stdio.h> 
//Finding the Vowel Insensitive  

int CountSmall( const char  *str )  
{

    int iCount =0; 
    char ch = 'a';

    while(*str != '\0')
    {
        
        if(*str >= 'a'&& *str <= 'z' )
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

    iRet = CountSmall(Arr);
    printf("Small Character are is  is :%d",iRet);


    return 0 ;
}