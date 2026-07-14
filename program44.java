// TYPE 3



import  java.util.Scanner;

class NumberX
{
     public static boolean  CheckDivisible(int iNo )    // In c BOOL 
    {
        if((iNo % 3 == 0 )&& (iNo % 5 == 0))
        {
                return  true ;
        }
        else
        {
                return  false ;
        }
        

    }


}

class program44
{  
    public static void main(String A[])
    {
        int iValue= 0 ;
        boolean bret = false ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        iValue = sobj.nextInt();


        bret = NumberX.CheckDivisible(iValue);    ///from the another class 
        if (bret == true )
        {
            System.out.println("Number is Divisble by 3 and 5");
        }
        else
        {
            System.out.println("Number is not Divisble by 3 and 5");
        }
       
        
    }
}

