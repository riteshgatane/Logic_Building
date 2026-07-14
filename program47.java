
import  java.util.Scanner;

class NumberX
{
    public  void DisplayFactors(int iNo)
    {  ///logic 
        int iCnt = 0 ;
        for (iCnt = 1; iCnt<= (iNo/2 ); iCnt++)    ///time complexity is reduced 
        { if ((iNo % iCnt) == 0)
            {
                System.out.println(iCnt);
            }
        }
        
    }
    

}

class program47
{  
    public static void main(String A[])
    {
        int iValue= 0 ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        iValue = sobj.nextInt();


        NumberX nobj = new NumberX();
        nobj.DisplayFactors(iValue);
       
        
    }
}

//TIme Complexity : O(N)
//Where N>= 0
