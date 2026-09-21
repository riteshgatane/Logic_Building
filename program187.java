 //input : 7
 //output :    A  b  C  d E f G
//             1  2  3  4 5 6 7

import java.util.*;

class program187
{

    public static void Dispaly(int iNo)
    {
        int iCnt = 0 ;
    
        char ach ='\0' ;   //default value
        char Ach = '\0';


        for(iCnt =1 ,ach = 'A',Ach = 'a' ;iCnt <= iNo;iCnt++ ,ach++ ,Ach++)    
        {
            if((iCnt%2) == 0)
            {
            System.out.print(Ach+"\t");

            }
            else
            {
                System.out.print(ach+"\t");
            }
        }

        
       



    }
    public static void main(String  A[] ) 
    {
        Scanner sobj = new Scanner(System.in);
        int iValue ;


        System.out.println("Enter the number of elements:");
        
        iValue = sobj.nextInt();

        Dispaly(iValue);
               
    }
}