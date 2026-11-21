#include <iostream>
using namespace std ; 

#pragma pack(1)

struct node
{
    int data ; 
    struct node * next ;
    struct node * previous ; //$
};

typedef struct node NODE ; 
typedef struct node * PNODE ;

class DoublyLL
{
    private:
        PNODE first ; 
        int iCount ;  

    public:
        DoublyLL() ;
        void Display();
        int  Count();
        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo ,int iPos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};


DoublyLL::DoublyLL()  //Constructor
{ 
    this -> first = NULL ;
    this -> iCount = 0 ;
}

void DoublyLL:: Display() 
{
    PNODE temp =  NULL ; 
    temp = this -> first ; 
    cout << "NULL <=>" ;
    while (temp != NULL)
    {
        cout << "| " << temp -> data << "|  <=>" ; 
        temp = temp -> next ;
    }
    cout << "NULL \n";
}

int DoublyLL :: Count()
{
    return this -> iCount ;
}

void  DoublyLL :: InsertFirst(int iNo)
{ 
    PNODE newn = NULL ;
    newn = new NODE ; 

    newn -> data = iNo; 
    newn -> previous = NULL ;
    newn -> next = NULL ; 

    if(this -> first == NULL)
    {
        this -> first = newn ;
    }
    else
    {
        newn -> next = this -> first  ;
        first -> previous = newn ;
        this -> first = newn ;
    }
    this -> iCount++ ;
}
void  DoublyLL :: InsertLast(int iNo)
{
    PNODE temp = NULL ;
    PNODE newn = NULL ;

    newn = new NODE ; 
    newn -> data = iNo ;
    newn -> next = NULL ;
    newn -> previous = NULL ;

    
    temp = this -> first ;
    if(this -> first == NULL)
    {
        this -> first = newn ;
    }
    else
    {
        while (temp -> next != NULL )
        {
            temp = temp -> next ;
        }
        temp -> next = newn ;
        newn -> previous = temp ;
    }
    this -> iCount++ ;
}
void  DoublyLL :: InsertAtPos(int iNo ,int iPos)
{
    PNODE newn = NULL ;
    PNODE temp = NULL ;

    int iCount = 0 ;
    int i = 0 ; 


    iCount = Count() ;
    
    if( iPos < 1 || (iPos > iCount+1))
    {
        cout << "Invalid Position "; 
    }

    else if( iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if (iPos == iCount+1)
    {
        InsertLast(iNo);
    }
    else
    {
        temp = this  -> first ;
        newn = new NODE ;

        newn -> data = iNo ;
        newn -> next =NULL ;
        newn -> previous = NULL ;

        for(i = 1 ; i < iPos-1 ; i++)
        {
            temp = temp -> next ;
        }
        newn -> next = temp -> next ;  
        temp -> next -> previous =  newn ;
        temp -> next = newn ;
        newn -> previous = temp ;
        
        this -> iCount++ ;
    }

    
}
void  DoublyLL :: DeleteFirst()
{
    PNODE temp = NULL ;

    temp = this -> first ;
    if(this -> first == NULL)
    {
        return ;
    }
    else if(this -> first -> next  == NULL)
    {
        delete temp ;
        this -> first = NULL ;
    }
    else 
    {
        first = temp -> next ;
        delete this -> first -> previous  ; 
        temp -> previous = NULL ; 
        
    }
    this -> iCount-- ;
    
}
void  DoublyLL :: DeleteLast()
{
    PNODE temp = NULL ;

    temp = this -> first ;

    if(this -> first == NULL)
    {
        return ;
    }
    else if(this -> first -> next == NULL)
    {
        delete temp ;
        this -> first = NULL ;
    }
    else 
    {
        while (temp -> next -> next != NULL)
        {
            temp = temp -> next ;
        }
        delete temp -> next ;
        temp -> next = NULL ;        
    }
    this -> iCount-- ;
}
void  DoublyLL :: DeleteAtPos(int iPos)
{
    PNODE newn = NULL ;
    PNODE temp = NULL ;
    

    int iCount = 0 ;
    int i = 0 ; 

    iCount = Count() ;
    temp = this -> first ;
    if( iPos < 1 || (iPos > iCount))
    {
        cout << "Invalid Position "; 
    }

    else if( iPos == 1)
    {
        DeleteFirst();
    }
    else if (iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        for(i = 1 ; i < iPos-1 ; i++)
        {
            temp = temp -> next ;
        }
        temp -> next = temp -> next -> next ;
        delete temp -> next -> previous ; 
        temp -> next -> next -> previous = temp ;
    }
}


int main()
{
    DoublyLL sobj ;

    int iChoice = 0 ;
    int iValue = 0 ;
    int iRet = 0 ;
    int iPosition =0 ;

    while(iChoice != 9 )  
    {   cout << "--------------------------------------------\n" ;
        cout << "            Enter YOur Choice               \n" ;
        cout << "--------------------------------------------\n" ;

        cout << "1 : Insert node at First Position\n" ;
        cout << "2 : Insert node at Last Position\n" ;
        cout << "3 : Insert node at given Position\n" ;

        cout << "4 : Delete node at First Position\n" ;
        cout << "5 : Delete node at Last Position\n" ;
        cout << "6 : Delete node at Given Position\n" ;

        cout << "7 : Display the ELement\n" ;
        cout << "8 : Count the Number of Elements\n" ;
        cout << "9 : Terminate the application\n" ;

        cout << "-------------------------------------------\n" ;
        cin >> iChoice ;

        switch(iChoice)
        {
            case 1:
                cout << "Enter the Value:\n";
                cin >> iValue ; 
                sobj.InsertFirst(iValue);
                break;
            
            case 2:
                cout << "Enter the Value:\n";
                cin >> iValue ; 
                sobj.InsertLast(iValue);
                break;

            case 3:
                cout << "Enter the Value:\n";
                cin >> iValue ; 
                cout << "Enter the position:\n" ;
                cin >> iPosition ; 
                sobj.InsertAtPos(iValue, iPosition);
                break;

            case 4: 
                sobj.DeleteFirst();
                break;
            
            case 5:
                sobj.DeleteLast();
                break;

            case 6:
                cout << "Enter the Position:\n";
                cin >> iPosition ; 
                sobj.DeleteAtPos(iPosition);
                break;

            case 7 :
                cout << "Elements of Linked List are\n" ; 
                sobj.Display();
                break; 
            
            case 8 :
                iRet = sobj.Count();
                cout <<"Number of Elements are :" << iRet << "\n" ;
                break; 

            case 9 :
                cout << "Thank You For Using the Singly Linked List Application" ; 
                break;
            
            default :
                cout << "Invalide Choice" ;
                
        }
    }
    return 0  ;
}