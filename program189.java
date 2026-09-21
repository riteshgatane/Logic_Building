

  //input : 
 //output:    *     *   *  *
 //           *     *   *  *


import java.util.*;

class program189
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