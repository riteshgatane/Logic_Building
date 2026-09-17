#include <iostream>   
using namespace std ;
#pragma pack(1)


class ArrayX   
{
    private:
    int *Arr  ;
    int iSize ;
    int iCnt =0;

    public:  
    //Parametrized Constructor with Default Argument  
    ArrayX(int X = 5 )  //Default Argument
    {
        
        iSize = X ;            
        Arr = new int[iSize];  
    }

  
    ~ArrayX()
    {
    
        delete []Arr ;  
    } 
    void Accept()
    {
        cout << "Enter the Elements: \n ";
        for(iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            cin >> Arr[iCnt ]; 
        } 

    }
    
     void Display()
    {
        cout << "Elements of  the Array are :\n";
        for(iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            cout <<  Arr[iCnt] << "\n" ; 
        } 

    }

};

int main()
{
   
    ArrayX *aobj = NULL ;
    int iLength = 0;

    cout << "Enter the number of the eleements:";
    cin >> iLength ;

    aobj = new ArrayX(iLength);

    aobj -> Accept();
    aobj -> Display();

    delete aobj ;
    return 0;
}