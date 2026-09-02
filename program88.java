import java.util.*;

class DigitX
{
    public void CountOddEvenDigits(int iNo)
    {
        int iDigit = 0 ;
        int iCountEven = 0 ;
        int iCountOdd = 0 ;
        while(iNo != 0 )
        {
          iDigit = iNo % 10 ;

          if(iDigit % 2 == 0)
          {                   
            iCountEven++ ; 
           
          }
          else
          {          
            iCountOdd++ ; 
            
          }

          iNo = iNo/10 ;
        }
        System.out.println("Even Numbers :"+iCountEven);
        System.out.println("Odd  Numbers :"+iCountOdd);
       
    }
}

class program88
{
    public static void main(String A[])
    {
        int iValue= 0 ;
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        System.out.println("Enter the Number :");

        iValue = sobj.nextInt();

        dobj.CountOddEvenDigits(iValue);
    
    }
}