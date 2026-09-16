#include <iostream>   
using namespace std ;
#pragma pack(1)


class ArrayX   
{
    private:
    int *Arr  ;
    int iSize ;

    public:   //NAKED   (Assecible for class )
     
    ArrayX(int X)
    {
        
        iSize = X ;            
        Arr = new int[iSize];  
    }

    //Destructor 
    ~ArrayX()
    {
    
        delete []Arr ;  
    } 

};

int main()
{
      

    ArrayX *aobj1 = new ArrayX(5);

    cout << aobj1->iSize << "\n";   //error 

    aobj1 -> iSize =0 ;   //error
    aobj1 -> Arr =NULL ; //error

    //Logic (Fucation Call)

    delete aobj1 ;
    
    return 0;
}