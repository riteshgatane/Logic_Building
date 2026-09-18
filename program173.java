 //input : 5
 //output : 1 * 2 * 3 * 4 * 5 *
import java.util.*;

class program173
{

    public static void Dispaly(int iNo)
    {
        int iCnt = 0 ;

        for(iCnt =1 ;iCnt <= iNo ;iCnt ++)
        {
            System.out.print(iCnt+"\t*\t");
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