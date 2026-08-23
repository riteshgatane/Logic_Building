import java.util.*;

class DigitX
{
    public void DisplayDigits(int iNo)
    {
        int iDigit = 0 ;

        while(iNo != 0 )
        {
            iDigit = iNo % 10 ;
            System.out.println(+iDigit);
            iNo = iNo/10;


        }

    }

}

class program79
{
    public static void main(String A[])
    {
        int iValue= 0 ;
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        System.out.println("Enter the Number :");

        iValue = sobj.nextInt();

        dobj.DisplayDigits(iValue);
    
    }
}