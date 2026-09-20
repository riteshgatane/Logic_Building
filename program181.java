 //input : 7
 //output :    A  B  C    D   E   F   G
    //         1  2  3    4   5   6   7

import java.util.*;

class program181
{

    public static void Dispaly(int iNo)
    {
        int iCnt = 0 ;
        char ch ='\0' ;   //default value

        for(iCnt =1 ,ch = 97 ;iCnt <= iNo;iCnt++ ,ch++)
        {
           
            System.out.print(ch+"\t");
        }

        System.out.println();



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