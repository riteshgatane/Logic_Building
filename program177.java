 //input : 7
 //output :  1  *  2 *  3 * 4
import java.util.*;

class program177
{

    public static void Dispaly(int iNo)
    {
        int iCnt = 0 ;
        int iCount=0 ;

        for(iCnt =1 ;iCnt <= iNo ;iCnt++)
        {
            if((iCnt % 2) == 0)
            {
            System.out.print("*");
            }
            else
            {
                System.out.print(iCount+"\t");
                iCount++
            }
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