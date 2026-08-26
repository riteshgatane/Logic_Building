import java.util.*;

class DigitX
{
    public int CountDigits(int iNo)
    {
        int iDigit = 0 ;
        int iCount = 0 ;

        while(iNo != 0 )
        {
          iDigit = iNo % 10 ;
          iCount++ ; 
          iNo = iNo/10 ;
        }
        return  iCount ;
    }
}

class program83
{
    public static void main(String A[])
    {
        int iValue= 0 ;
        int iRet = 0 ;
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        System.out.println("Enter the Number :");

        iValue = sobj.nextInt();

        iRet = dobj.CountDigits(iValue);
        System.out.println("Number of Digits are:"+iRet);
    
    }
}