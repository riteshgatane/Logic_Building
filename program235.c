#include <stdio.h>  
#include<string.h> 

int main()
{
    char str[] = "Jay Ganesh";
    
    int iRet = 0 ;
    iRet = strlen(str);

    printf("Length of string is :%d\n",strlen(str));

    iRet = sizeof(str);
    printf("Size of String :%d\n",iRet);  //Count  the \0 at the last of the Arr

    return 0 ;
}