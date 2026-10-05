#include <stdio.h>  

int StrLenX( const char  *str )  
{

    int iCount =0; 

    while(*str != '\0')
    {
        iCount++;
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

    iRet = StrLenX(Arr);
    printf("LEngth of the String is :%d",iRet);


    return 0 ;
}