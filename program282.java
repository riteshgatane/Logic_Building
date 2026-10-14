import  java.util.*; 

class StringX
{
    public String ToUpperX(String str)
    {
        int i = 0;
        char Arr[] = str.toCharArray();

        for(i = 0 ; i < Arr.length ; i++)
        {
            if(Arr[i] == 'A'  || Arr[i] == 'a')
            {
                Arr[i] = '_';
            }
        }
          return new String(Arr)  ;
    }

  
   
}

class program282
{
   public static void main(String []A)
    {
        char ch1 = 'A';
        System.out.println(ch1);
        System.out.println(ch1+32); //97
       
   }
}