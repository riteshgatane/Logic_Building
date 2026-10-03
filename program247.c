#include <stdio.h>  

void StrLenX(char *str )  
{

        *str = 'A';
}

int main()
{

    char Arr[50] = {'\0'};
    
    
    printf("Enter the String:\n");
    scanf("%[^'\n']s",Arr); 

    StrLenX(Arr);
    printf("String id :%s\n",Arr);


    return 0 ;
}