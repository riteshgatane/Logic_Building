// TYPE 3
//reusable code 

import  java.util.Scanner;

class NumberX
{
     public boolean  CheckDivisible(int iNo )    // In c BOOL 
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

class program45
{  
    public static void main(String A[])
    {
        int iValue= 0 ;
        boolean bret = false ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        iValue = sobj.nextInt();

        NumberX nobj = new NumberX();

        bret = nobj.CheckDivisible(iValue);    ///from the another class 
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

