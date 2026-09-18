 //input : 5
 //output :  * # * # * # * # * #
import java.util.*;

class program174
{

    public static void Dispaly(int iNo)
    {
        int iCnt = 0 ;

        for(iCnt =1 ;iCnt <= iNo ;iCnt ++)
        {
            System.out.print("*\t#\t");
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