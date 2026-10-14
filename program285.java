import  java.util.*; 

class StringX
{
    public String ToUpperX(String str)
    {
        int i = 0;
        char Arr[] = str.toCharArray();

        for(i = 0 ; i < Arr.length ; i++)
        {
            Arr[i] = (char)(Arr[i] -32) ;   ///ISSUE

        }
          return new String(Arr)  ;
    }

  
   
}

class program285
{
    public static void main(String A[])
    { 
        Scanner sobj = new Scanner(System.in);
        String data = null ;
        StringX strobj = new StringX();
        int iRet = 0;
        String sRet = null ;

        System.out.println("Enter the String :");
        data = sobj.nextLine();

        sRet = strobj.ToUpperX(data);

        System.out.println("Updated String is:"+sRet);
        
        

       
    }
}