 //input : 11
 //output :     *  *  *  # # # * *  * #  #
 //             1  2  3  4 5 6 7 8  9 10 11

import java.util.*;

class program191
{

    public static void Dispaly()
    {
        int i,j = 0;

       for(i = 1 ; i <= 4 ; i ++ )
       {
            for(j = 1 ; j <= 4  ; j ++ )
                { 
                System.out.print("*\t");
                
                }
            System.out.print("\n");
       }
      
       

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