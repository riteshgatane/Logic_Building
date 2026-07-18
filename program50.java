
import  java.util.Scanner;


class NumberX
{
    public  boolean  CheckPerfect(int iNo)
    {  ///logic 
        int iCnt = 0 ;
        int iSum = 0 ;
        for (iCnt = 1; iCnt<= (iNo/2 ); iCnt++)    ///time complexity is reduced 
        { if ((iNo % iCnt) == 0)
            {
              iSum = iSum + iCnt;
            }
        }

        if(iSum == iNo)
        {
            return true ;
        }
        else {
            return false ;
        }

    }
    

}

class program50
{  
    public static void main(String A[])
    {
        int iValue= 0 ;
        boolean bRet = false ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        iValue = sobj.nextInt();


        NumberX nobj = new NumberX();
        bRet = nobj.CheckPerfect(iValue);  

        if (bRet == true)
        {
            System.out.println("IT is the Perfect ");

        }
        else 
        {
            System.out.println("It is not perfect ");
        }

        
        
    }
}

//TIme Complexity : O(N)
//Where N>= 0
