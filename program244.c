#include <stdio.h>  

void Display(char str[] )
{
    printf("%c",str[0]);
    printf("%c",str[1]);
    printf("%c",str[2]);
}

int main()
{

    char Arr[50] = {'\0'};
    
    printf("Enter the String:\n");
    scanf("%[^'\n']s",Arr); 
    Display(Arr);

    return 0 ;
}