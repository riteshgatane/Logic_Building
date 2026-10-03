#include <stdio.h>  

int main()
{

    char Arr[50] = {'\0'};
    
    printf("Enter the String:\n");
    scanf("%[^'\n']s",Arr); // ^  : Regular expression (regx)

    printf("Enterted String is:%s\n",Arr);   

    return 0 ;
}