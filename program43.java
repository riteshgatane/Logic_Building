// TYPE 2
///"cHECK WHELTHER" SHOULD BE "BOOL" 
//NAKED FUCTION IS NOT ALLOWED IN JAVA LIKE C N.A
//1.MAIN 2.ANOTHER FUCTION IN WHICH THEIR IS BUSINESS LOGIC 


import  java.util.Scanner;

class program43
{   /////
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
    public static void main(String A[])
    {
        int iValue= 0 ;
        boolean bret = false ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        iValue = sobj.nextInt();

        bret = CheckDivisible(iValue);    
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

