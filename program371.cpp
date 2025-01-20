#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;

class DoublyCL
{
    public:
    PNODE head;
    PNODE tail;
    int iCount;

    DoublyCL()
    {
        head = NULL;
        tail = NULL;
        iCount = 0;
    }

    void InsertFirst(int no)
    {
        PNODE newn = NULL;

        newn = new NODE;
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

    void InsertLast(int no)
    {
        PNODE newn = NULL;

        newn = new NODE;
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

    void DeleteFirst()
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

    void DeleteLast()
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

    void Display()
    {
        PNODE temp = NULL;

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

    int Count()
    {
        return iCount;
    }

    void InsertAtPos(int no, int iPos)
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
            PNODE temp = head;

            PNODE newn = NULL;

            newn = new NODE;
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

    void DeleteAtPos(int iPos)
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
            PNODE temp = head;

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
};

int main()
{
    DoublyCL dobj;
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