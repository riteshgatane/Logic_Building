#include <iostream>   
using namespace std ;
#pragma pack(1)


class ArrayX   
{
    private:
    int *Arr  ;
    int iSize ;

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

};

int main()
{
    ArrayX *aobj1 = new ArrayX();   //Parameterised Constructor
    ArrayX *aobj2 = new ArrayX(15);  //Parameterised Constructor



    //Logic (Fucation Call)

    delete aobj1 ;
    delete aobj2 ;
    
    return 0;
}