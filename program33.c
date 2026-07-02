 #include<stdio.h>  

void Display(int iNo)
{
   int iCnt = 0 ;
   
   if(iNo < 0)
   {  //Filter
      iNo = -iNo;
      printf("Invalid input ");
      return ;
   }
        
    for(iCnt=0;iCnt<=iNo; iCnt++)
      {
         printf("%d\n",iCnt);
      }

}
int main()
{

   
   int iValue = 0;
   printf("Enter the Frequnecy:");
   scanf("%d",&iValue);

   Display(iValue);
  

   return 0 ;
}