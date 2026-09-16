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
        cout << "Inside Constructor" << endl ;
        iSize = X ;            //Characteristics Initialization
        Arr = new int[iSize];  //Resource Allocation  
    }

    //Destructor 
    ~ArrayX()
    {
        cout << "Inside Destructor" << endl;
        delete []Arr ;    ///Resource Deallocation
    }

};

int main()
{
      

    ArrayX *aobj1 = new ArrayX(5);

    //Logic (Fucation Call)

    delete aobj1 ;
    
    return 0;
}