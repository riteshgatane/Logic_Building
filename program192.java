
import java.util.*;

class program192
{

    public static void Dispaly(int iRow , int iCol)
    {
        int i,j = 0;

       for(i = 1 ; i <= iRow ; i ++ )
       {
            for(j = 1 ; j <= iCol ; j ++ )
                { 
                    System.out.print("*\t");
                }
            System.out.print("\n");
       }
      
    }
    public static void main(String  A[] ) 
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 ;
        int iValue2 ;

        System.out.println("Enter the number of Rows:");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the number of Columns:");
        iValue2 = sobj.nextInt();

        Dispaly(iValue1 ,iValue2);
               
    }
}