import  java.util.*; 


class program276
{
    public static void main(String A[])
    { 
        Scanner sobj = new Scanner(System.in);
        String data = null ;
        StringX strobj = new StringX();   //Error due to no class 
        int iRet = 0;

        System.out.println("Enter the String :");
        data = sobj.nextLine();

        iRet = strobj.CountCapital(data);
        System.out.println("Number of Capital Letter are:"+iRet);

        iRet = strobj.CountSmall(data);
        System.out.println("Number of small Letter are:"+iRet);

        iRet = strobj.CountDigits(data);
        System.out.println("Number of Digits are :"+iRet);

        iRet = strobj.CountSpace(data);
        System.out.println("Number of White Spaces are :"+iRet);

         iRet = strobj.CountSpecial(data);
        System.out.println("Number of Special Symbol are :"+iRet);

    }
}