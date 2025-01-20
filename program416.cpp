#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class SinglyCL
{ 
    public:
    struct node<T> *head;
    struct node<T> *tail;
    int iCount;

    SinglyCL();

    void InsertFirst(T no);

    void InsertLast(T no);

    void DeleteFirst();

    void DeleteLast();

    void Display();

    int Count();

    void InsertAtPos(T no, int iPos);

    void DeleteAtPos(int iPos);
};

template <class T>
SinglyCL<T> :: SinglyCL()
{
    head = NULL;
    tail = NULL;
    iCount = 0;
}

template <class T>
void SinglyCL<T> :: InsertFirst(T no) 
{
    struct node<T> *newn = NULL;

    newn = new node<T>;
    newn->data = no;
    newn->next = NULL;

    if(head == NULL && tail == NULL)
    {
        head = newn;
        tail = newn;
    }
    else
    {
        newn->next = head;
        head = newn;
    }
    tail->next = head;

    iCount++;
}

template <class T>
void SinglyCL<T> :: InsertLast(T no)
{
    struct node<T> *newn = NULL;

    newn = new node<T>;
    newn->data = no;
    newn->next = NULL;

    if(head == NULL && tail == NULL)
    {
        head = newn;
        tail = newn;
    }
    else
    {
        tail->next = newn;

        tail = newn;
    }
    tail->next = head;

    iCount++;
}

template <class T>
void SinglyCL<T> :: DeleteFirst()
{
    if(head == NULL && tail == NULL)
    {
        return;
    }
    else if(head == tail)
    {
        delete head;
        head = NULL;
        tail = NULL;
        
    }
    else
    {
        struct node<T> *temp = head;

        head = head->next;
        delete temp;

        tail->next = head;
    }
    iCount--;
}

template <class T>
void SinglyCL<T> :: DeleteLast()
{
    if(head == NULL && tail == NULL)
    {
        return;
    }
    else if(head == tail)
    {
        delete head;
        head = NULL;
        tail = NULL;
    }
    else
    {
        struct node<T> *temp = head;

        while(temp->next != tail)
        {
            temp = temp->next;
        }

        tail = temp;
        delete tail->next;

        tail->next = head;
    }
    iCount--;
}

template <class T>
void SinglyCL<T> :: Display()
{
    struct node<T> *temp = NULL;

    temp = head;

    if(head == NULL && tail == NULL)
    {
        cout<<"LinkedList is Empty\n";
        return;
    }

    do
    {
        cout<<"| "<<temp->data<<" | -> ";
        temp = temp->next;
    }while(temp != tail->next);

    cout<<"REPEAT\n";
}

template <class T>
int SinglyCL<T> :: Count()
{
    return iCount;
}

template <class T>
void SinglyCL<T> :: InsertAtPos(T no, int iPos)
{
    if((iPos < 1) || (iPos > iCount + 1))
    {
        cout<<"Invalid Input!\n";
        return;
    }
    else if(iPos == 1)
    {
        InsertFirst(no);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(no);
    }
    else
    {
        int i = 0;
        struct node<T> *temp = head;

        struct node<T> *newn = NULL;

        newn = new node<T>;
        newn->data = no;
        newn->next = NULL;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;

        tail->next = head;

        iCount++;
    }
}

template <class T>
void SinglyCL<T> :: DeleteAtPos(int iPos)
{
    if((iPos < 1) || (iPos > iCount))
    {
        cout<<"Invalid Input!\n";
        return;
    }
    else if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        int i = 0;
        struct node<T> *temp = head;
        struct node<T> *target = NULL;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        target = temp->next;
        temp->next = target->next;
        delete target;

        tail->next = head;

        iCount--;
    }
}

int main()
{
    SinglyCL <int>sobj;
    int iRet = 0;

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.InsertLast(101);
    sobj.InsertLast(111);
    sobj.InsertLast(121);

    sobj.InsertAtPos(105,5);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of Elements are : "<<iRet<<"\n\n";

    sobj.DeleteAtPos(5);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of Elements are : "<<iRet<<"\n\n";

    sobj.DeleteFirst();

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of Elements are : "<<iRet<<"\n\n";

    sobj.DeleteLast();

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of Elements are : "<<iRet<<"\n\n"; 

    return 0;
}