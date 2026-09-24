/*
    iRow = 4
    iCol = 4

    $   @   @   @
    @   $   @   @
    @   @   $   @
    @   @   @   $


*/

import java.util.* ;   ///

class Pattern
{
    public void Display(int iRow ,int iCol)
    {
        int i = 0 ;
        int j =0 ;
        int iCnt =0 ;
        int iCount = 0;

      for(i = 1,iCount = iRow ;i <= iRow ; i ++ ,iCount-- )
        {
            
            for(j = 1 ; j <= iCol ; j++ )
            {
                if(iRow ==)
                System.out.print(iCount+"\t");
            }
            System.out.println();
        }
         
    }
}


class program209
{
    public static void main(String A[])
    {
        int iValue1 =0 ;
        int iValue2 =0 ;

        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number of Rows");
        iValue1 = sobj.nextInt();

        System.out.println("Enter number of Columns");
        iValue2 = sobj.nextInt() ;

        Pattern pobj = new Pattern();

        pobj.Display(iValue1 ,iValue2);
    }
}
