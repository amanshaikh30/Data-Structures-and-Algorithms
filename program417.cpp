#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
    struct node *prev;
};

template <class T>
class DoublyCL
{
    public:
    struct node<T> *head; 
    struct node<T> *tail;
    int iCount;

    DoublyCL();

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
DoublyCL<T> :: DoublyCL()
{
    head = NULL;
    tail = NULL;
    iCount = 0;
}

template <class T>
void DoublyCL<T> :: InsertFirst(T no)
{
    struct node<T> *newn = NULL;

    newn = new node<T>;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(head == NULL && tail == NULL)
    {
        head = newn;
        tail = newn;
    }
    else
    {
        newn->next = head;
        head->prev = newn;

        head = newn;
    }
    tail->next = head;
    head->prev = tail;

    iCount++;
}

template <class T>
void DoublyCL<T> :: InsertLast(T no)
{
    struct node<T> *newn = NULL;

    newn = new node<T>;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(head == NULL && tail == NULL)
    {
        head = newn;
        tail = newn;
    }
    else
    {
        tail->next = newn;
        newn->prev = tail;

        tail = newn;
    }
    tail->next = head;
    head->prev = tail;

    iCount++;
}

template <class T>
void DoublyCL<T> :: DeleteFirst()
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
        head = head->next;
        delete head->prev;

        tail->next = head;
        head->prev = tail;
    }
    iCount--;
}

template <class T>
void DoublyCL<T> :: DeleteLast()
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
        tail = tail->prev;
        delete tail->next;

        tail->next = head;
        head->prev = tail;
    }
    iCount--;
}

template <class T>
void DoublyCL<T> :: Display()
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
        cout<<"| "<<temp->data<<" | <=> ";
        temp = temp->next;
    }while(temp != tail->next);

    cout<<"REPEAT\n";
}

template <class T>
int DoublyCL<T> :: Count()
{
    return iCount;
}

template <class T>
void DoublyCL<T> :: InsertAtPos(T no, int iPos)
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
        newn->prev = NULL;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;

        temp->next = newn;
        newn->prev = temp;

        tail->next = head;
        head->prev = tail;

        iCount++;
    }
}

template <class T>
void DoublyCL<T> :: DeleteAtPos(int iPos)
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

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;

        tail->next = head;
        head->prev = tail;

        iCount--;
    }
}

int main()
{
    DoublyCL <int>dobj;
    int iRet = 0;

    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);

    dobj.InsertLast(101);
    dobj.InsertLast(111);
    dobj.InsertLast(121);

    dobj.InsertAtPos(75,4);

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of Elements are : "<<iRet<<"\n\n";

    dobj.DeleteAtPos(4);

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of Elements are : "<<iRet<<"\n\n";

    dobj.DeleteFirst();

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of Elements are : "<<iRet<<"\n\n";

    dobj.DeleteLast();

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of Elements are : "<<iRet<<"\n\n";

    return 0;
}