 //input : 7
 //output :  1  *  3  * 5 * 7
import java.util.*;

class program176
{

    public static void Dispaly(int iNo)
    {
        int iCnt = 0 ;

        for(iCnt =1 ;iCnt <= iNo ;iCnt= iCnt+2)
        {
            System.out.print(+iCnt+"*\t");
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