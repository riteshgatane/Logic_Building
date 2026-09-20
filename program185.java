 //input : 7
 //output :    A  *  B  * C * D 
//             1  2  3  4 5 6 7

import java.util.*;

class program185  //
{

    public static void Dispaly(int iNo)
    {
        int iCnt = 0 ;
        char ch ='\0' ;   //default value

        for(iCnt =1 ,ch = 'A' ;iCnt <= iNo;iCnt++ ,ch++)    
        {
            if((iCnt%2) == 0)
            {
            System.out.print("*\t");
            }
            else
            {
                System.out.print(ch+"\t");
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