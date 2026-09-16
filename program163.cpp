#include <iostream>   
using namespace std ;
#pragma pack(1)


class ArrayX   
{
    public:
    int *Arr  ;
    int iSize ;


    //Parameterized Constructor 
    ArrayX(int X)
    {
        
        iSize = X ;            //Characteristics Initialization
        Arr = new int[iSize];  //Resource Allocation  
    }

    //Destructor 
    ~ArrayX()
    {
    
        delete []Arr ;    ///Resource Deallocation
    }

};

int main()
{
      

    ArrayX *aobj1 = new ArrayX(5);

    cout << aobj1->iSize << "\n";  

    aobj1 -> iSize =0 ;   //iSSSUE
    aobj1 -> Arr =NULL ; //ISSUE

    //Logic (Fucation Call)

    delete aobj1 ;
    
    return 0;
}