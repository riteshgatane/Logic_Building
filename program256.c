#include <stdio.h> 

int CountCapital( const char  *str )  
{

    int iCount =0; 
    char ch = 'a';

    while(*str != '\0')
    {
        
        if(*str >= 'A' && *str <= 'Z'  )
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

    iRet = CountCapital(Arr);
    printf("Small Character are is  is :%d",iRet);


    return 0 ;
}