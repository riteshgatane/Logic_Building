#include <stdio.h>  

void Display(char *str )
{
    printf("Input String is:%s",str);
}

int main()
{

    char Arr[50] = {'\0'};
    
    printf("Enter the String:\n");
    scanf("%[^'\n']s",Arr); // ^  : Regular expression (regx)

    Display(Arr);

    return 0 ;
}