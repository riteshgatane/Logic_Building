 //input : 11
 //output :     *  *  *  # # # * *  * #  #
 //             1  2  3  4 5 6 7 8  9 10 11
import java.util.*;

class program188
{

    public static void Dispaly(int iNo)
    {
        int iCnt = 0 ;



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