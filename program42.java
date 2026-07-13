// TYPE 2
///"cHECK WHELTHER" SHOULD BE "BOOL" 
//NAKED FUCTION IS NOT ALLOWED IN JAVA LIKE C N.A
//1.MAIN 2.ANOTHER FUCTION IN WHICH THEIR IS BUSINESS LOGIC 


import  java.util.Scanner;

class program42
{   /////
    public static void  CheckDivisible(int iNo )    // In c BOOL 
    {
        if((iNo % 3 == 0 )&& (iNo % 5 == 0))
        {
            System.out.println("Number is DIvision by 3 And 5");
        }
        else
        {
           System.out.println("Number is not  DIvision by 3 And 5");
        }
        

    }
    public static void main(String A[])
    {
        int iValue= 0 ;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        iValue = sobj.nextInt();

        CheckDivisible(iValue);    

        
    }
}

