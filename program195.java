/*
    iROw =4
    iCol =4

    *   *   *   *
    $   $   $   $
    *   *   *   *
    $   $   $   $


*/
import java.util.*;

class program195  //
{

    public static void Dispaly(int iRow , int iCol)
    {
        int i,j = 0;

       for(i = 1 ; i <= iRow ; i ++ )
       {
           { for(j = 1 ; j <= iCol ; j ++ )
           if((i% 2) == 0)
                { 
                    System.out.print("$\t");
                }
            ekse
                {
                    System.out.print("*\t");

                }
            
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