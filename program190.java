 //input : 11
 //output :     *  *  *  # # # * *  * #  #
 //             1  2  3  4 5 6 7 8  9 10 11

import java.util.*;

class program190
{

    public static void Dispaly()
    {
       int iCnt= 0 ;

       for(iCnt = 1 ; iCnt <= 4  ; iCnt ++ )
       {
        System.out.print("*\t");
       }
       System.out.println();
       
       for(iCnt = 1 ; iCnt <= 4  ; iCnt ++ )
       {
        System.out.print("*\t");
       }
       System.out.println();

          for(iCnt = 1 ; iCnt <= 4  ; iCnt ++ )
       {
        System.out.print("*\t");
       }
       System.out.println();

    }
    public static void main(String  A[] ) 
    {
        Scanner sobj = new Scanner(System.in);
        int iValue ;

        //System.out.println("Enter the number of elements:");
        //iValue = sobj.nextInt();

        Dispaly();
               
    }
}