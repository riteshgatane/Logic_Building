#include<iostream>
using namespace std ;
#pragma pack (1)

struct  node
{
    int data ; 
    struct  node * next ;
};

typedef struct node NODE ;
typedef struct node * PNODE ;

class SinglyCLL
{
    private:
        PNODE first ;
        PNODE last ;
        int iCount ;
    
    public:
        SinglyCLL();

        void Display();
        int Count();
        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo ,int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos();

};

SinglyCLL :: SinglyCLL()
{
    cout << "Inside the Constructor ";
    this -> first = NULL ;
    this -> last =NULL ;
    this -> iCount = 0 ;
}


void SinglyCLL :: Display()
{
    PNODE temp = NULL ;
    if(first == NULL && last == NULL)
    {
        return ;
    }
    temp = first ;
    do 
    {
        cout << "| " << temp -> data << " |";
        temp = temp -> next ;
    }while(last -> next != temp );

    cout << "\n";
}
int  SinglyCLL :: Count()
{ return iCount ;}
void SinglyCLL :: InsertFirst(int iNo)
{
    PNODE newn = NULL ;
    newn = new NODE ;
    newn -> data = iNo ;
    newn -> next = NULL ;
    
    if(first == NULL && last == NULL )
    {
        first = newn ;
        last = newn ;
    }
    else
    {
        newn -> next = first ;
        first = newn ;
    }
    last -> next =first ;
    iCount++ ;
}
void SinglyCLL :: InsertLast(int iNo)
{
    PNODE newn = NULL ;
    newn = new NODE ;
    newn -> data = iNo ;
    newn -> next = NULL ;
    
    if(first == NULL && last == NULL )
    {
        first = newn ;
        last = newn ;
    }
    else
    {
        last -> next = first ;
        last = newn ;
    }
    last -> next = first ;
    iCount++ ;
}
void SinglyCLL :: InsertAtPos(int iNo ,int iPos)
{}

void SinglyCLL :: DeleteFirst()
{}
void SinglyCLL :: DeleteLast()
{}
void SinglyCLL ::DeleteAtPos()
{}



int main()
{
    int iRet = 0 ;
    SinglyCLL sobj ;

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.InsertLast(110);
    sobj.InsertLast(13);
    sobj.InsertLast(11230);

    sobj.Display();

    iRet = sobj.Count() ;
    
    cout << "Number of Node are :" << iRet ; 
    return 0 ;
}