import  java.util.*;


class ArrayX   
{
    private
    int Arr[];
    int iSize;
    int iCnt=0;
    Scanner sobj = new Scanner(System.in);
    

    public
    ArrayX(int X)  
    {     
        iSize = X;            
        Arr = new int[iSize];  
    }


    void Accept()
    {
        System.out.println("Enter the Elements:");
        for(iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt(); 
        } 
    }
    
     void Display()
    {
        System.out.println("Elements of  the Array are :    ");
        for(iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            System.out.println (Arr[iCnt]) ; 
        } 
    }

    int Summation()
    {
        int iSum =0 ;
        for(iCnt =0 ; iCnt < iSize ; iCnt ++)
        {
            iSum = iSum + Arr[iCnt];
        }
        return iSum ;
    }
    public static void main(String A[])
   {
    Scanner sobj = new Scanner(System.in);   
    int iLength = 0;
    int iRet =0 ;

    System.out.println("Enter the number of the elements:");
    iLength = sobj.nextInt();

    ArrayX aobj = new ArrayX(iLength);

    aobj.Accept();
    aobj.Display();
    iRet = aobj.Summation() ;
    System.out.println("Summation is "+iRet);
    }
}