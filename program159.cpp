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
        cout << "Inside Constructor\n";
        iSize = X ;            //Characteristics Initialization
        Arr = new int[iSize];  //Resource Allocation  
    }

    //Destructor 
    ~ArrayX()
    {
        cout << "Inside Destructor";
        delete []Arr ;    ///Resource Deallocation
    }

};

int main()
{
    //Static memory Allocation of Object 
    //ArrayX aobj1(5);   

    ArrayX *aobj1 = new ArrayX(5);
    
    return 0;
}