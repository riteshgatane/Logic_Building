import  java.util.*; 

class StringX
{
    public String ToUpperX(String str)
    {
        int i = 0;
        char Arr[] = str.toCharArray();

        for(i = 0 ; i < Arr.length ; i++)
        {
            if(Arr[i] >= 'a' && Arr[i] <= 'z')
            {
                Arr[i] = (char)(Arr[i] -32) ;  
            }
        }
          return new String(Arr)  ;
    }

    public String ToLowerX(String str)
    {
        int i = 0;
        char Arr[] = str.toCharArray();

        for(i = 0 ; i < Arr.length ; i++)
        {
            if(Arr[i] >= 'A' && Arr[i] <= 'Z')
            {
                Arr[i] = (char)(Arr[i] + 32) ;  
            }
        }
          return new String(Arr)  ;
    }

    public String ToToggleX(String str)
    {
        int i = 0;
        char Arr[] = str.toCharArray();

        for(i = 0 ; i < Arr.length ; i++)
        {
            if(Arr[i] >= 'A' && Arr[i] <= 'Z')
            {
                Arr[i] = (char)(Arr[i] + 32) ;  
            }
            else{
                    Arr[i] = (char)(Arr[i] - 32) ;  //ISSUE DUE TO ASCII
            }
        }
          return new String(Arr)  ;
    }
}

class program288
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

        sRet = strobj.ToLowerX(data);
        System.out.println(" String in lower is:"+sRet);

        
        sRet = strobj.ToUpperX(data);
        System.out.println(" String in Upper Case:"+sRet);

        
        sRet = strobj.ToToggleX(data);
        System.out.println("To Toggle String is:"+sRet);
        
        

       
    }
}