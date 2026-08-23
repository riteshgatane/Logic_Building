import java.util.*;

class DigitX
{
    public void DisplayDigits(int iNo)
    {
        //int iDigit = 0 ;

        while(iNo != 0 )
        {
            
            System.out.println(iNo % 10);
            iNo = iNo/10;


        }

    }

}

class program80
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