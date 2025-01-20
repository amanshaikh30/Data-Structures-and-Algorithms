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
typedef struct node** PPNODE;

class DoublyLL
{
    public:
    PNODE head;
    int iCount;

    DoublyLL()
    {
        head = NULL;
        iCount = 0;
    }

    void InsertFirst(int no)
    {
        PNODE newn = NULL;

        newn = new NODE;
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
            head = newn;
        }
        iCount++;
    }

    void InsertLast(int no)
    {
        PNODE newn = NULL;
        PNODE temp = NULL;

        newn = new NODE;
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

    void DeleteFirst()
    {
        if(head == NULL)
        {
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

    void DeleteLast()
    {
        PNODE temp = NULL;

        if(head == NULL)
        {
            return;
        }
        else if(head->next == NULL)
        {
            delete head;
            head = NULL;
        }
        else
        {
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

    void Display()
    {
        PNODE temp = head;

        while(temp != NULL)
        {
            cout<<"| "<<temp->data<<" | <=> ";
            temp = temp->next;
        }
        cout<<"NULL\n";
    }

    int Count()
    {
        return iCount;
    }

    void InsertAtPos(int no, int iPos)
    {
        int iCountNode = 0, i = 0;
        PNODE newn = NULL;
        PNODE temp = NULL; 

        iCountNode = Count();

        if(iPos < 1 || iPos > iCountNode + 1)
        {
            cout<<"Invalid Input!"<<"\n";
            return;
        }
        else if(iPos == 1)
        {
            InsertFirst(no);
        }
        else if(iPos == iCountNode + 1)
        {
            InsertLast(no);
        }
        else
        {
            temp = head;
              
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
            newn->prev= temp;

            iCount++;
        }
    }

    void DeleteAtPos(int iPos)
    {
        int iCountNode = 0, i = 0;
        PNODE temp = NULL; 
        PNODE target = NULL;

        iCountNode = Count();

        if(iPos < 1 || iPos > iCountNode)
        {
            cout<<"Invalid Input!"<<"\n";
            return;
        }
        else if(iPos == 1)
        {
            DeleteFirst();
        }
        else if(iPos == iCountNode)
        {
            DeleteLast();
        }
        else
        {
            temp = head;

            for(i = 1; i < iPos - 1; i++)
            {
                temp = temp->next;
            }
            target = temp->next;
            temp->next = target->next;
            target->next->prev = temp;
            delete target;

            iCount--;
        }
    }
};

int main() 
{
    DoublyLL dobj;
    int iRet = 0;

    dobj.InsertFirst(30);
    dobj.InsertFirst(20);
    dobj.InsertFirst(10);

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n\n";

    dobj.InsertLast(40);
    dobj.InsertLast(50);

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n\n";

    dobj.InsertAtPos(35,4);

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n\n";

    dobj.DeleteAtPos(4);

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n\n";

    dobj.DeleteFirst();
    dobj.DeleteLast();

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n\n";

    return 0;
}