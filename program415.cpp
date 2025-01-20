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
class DoublyLL
{
    public:
        struct node<T> *head;
        int iCount;

        DoublyLL();

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
DoublyLL<T> :: DoublyLL()
{
    head = NULL;
    iCount = 0;
}

template <class T>
void DoublyLL<T> :: InsertFirst(T no)
{
    struct node<T> *newn = NULL;

    newn = new node<T>;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(head == NULL)
    {
        head = newn;
    }
    else
    {
        newn->next = head;
        head->prev = newn;

        head = newn;
    }
    iCount++;
}

template <class T>
void DoublyLL<T> :: InsertLast(T no)
{
    struct node<T> *newn = NULL;
    struct node<T> *temp = NULL;

    newn = new node<T>;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(head == NULL)
    {
        head = newn;
    }
    else
    {
        temp = head;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;
    }
    iCount++;
}

template <class T>
void DoublyLL<T> :: DeleteFirst()
{
    if(head == NULL)
    {
        cout<<"LinkedList is Empty!\n";
        return;
    }
    else if(head->next == NULL)
    {
        delete head;
        head = NULL;
    }
    else
    {
        head = head->next;
        delete head->prev;
        head->prev = NULL;
    }
    iCount--;
}

template <class T>
void DoublyLL<T> :: DeleteLast()
{
    if(head == NULL)
    {
        cout<<"LinkedList is Empty!\n";
        return;
    }
    else if(head->next == NULL)
    {
        delete head;
        head = NULL;
    }
    else
    {
        struct node<T> *temp = NULL;
        temp = head;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    iCount--;
}

template <class T>
void DoublyLL<T> :: Display()
{
    struct node<T> *temp = NULL;
    temp = head;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" | <=> ";
        temp = temp->next;
    }
    cout<<"NULL\n";
}

template <class T>
int DoublyLL<T> :: Count()
{
    return iCount;
}

template <class T>
void DoublyLL<T> :: InsertAtPos(T no, int iPos)
{
    if(iPos < 1 || iPos > iCount + 1)
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
        struct node<T> *temp = NULL;
        struct node<T> *newn = NULL;
        int i = 0;

        newn = new node<T>;
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        temp = head;

        for(i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;

        temp->next = newn;
        newn->prev = temp;

        iCount++;
    }
}

template <class T>
void DoublyLL<T> :: DeleteAtPos(int iPos)
{
    if(iPos < 1 || iPos > iCount)
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
        struct node<T> *temp = NULL;
        int i = 0;

        temp = head;

        for(i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;

        iCount--;
    }
}

int main()
{
    int iRet = 0;

    DoublyLL <int>dobj;

    dobj.InsertFirst(30);
    dobj.InsertFirst(20);
    dobj.InsertFirst(10);

    dobj.InsertLast(40);
    dobj.InsertLast(50);
    dobj.InsertLast(60);

    dobj.InsertAtPos(15,2);

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of Elements are : "<<iRet<<"\n\n";

    dobj.DeleteAtPos(2);

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of Elements are : "<<iRet<<"\n";

    return 0;
}