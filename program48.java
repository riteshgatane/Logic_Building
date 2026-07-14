
import  java.util.Scanner;
import jdk.jshell.ImportSnippet;

class NumberX
{
    public  void SumFactors(int iNo)
    {  ///logic 
        int iCnt = 0 ;
        int iSum = 0 ;
        for (iCnt = 1; iCnt<= (iNo/2 ); iCnt++)    ///time complexity is reduced 
        { if ((iNo % iCnt) == 0)
            {
              iSum = iSum + iCnt;
            }
        }

            System.out.println("Summation of the factors :"+iSum);



     

        
    }
    

}

class program48
{  
    public static void main(String A[])
    {
        int iValue= 0 ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        iValue = sobj.nextInt();


        NumberX nobj = new NumberX();
        nobj.SumFactors(iValue);
       
        
    }
}

//TIme Complexity : O(N)
//Where N>= 0
