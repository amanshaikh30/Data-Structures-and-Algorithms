#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class SinglyCL
{
    public:
    PNODE head;
    PNODE tail;
    int iCount;

    SinglyCL()
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

    void InsertLast(int no)
    {
        PNODE newn = NULL;

        newn = new NODE;
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
            PNODE temp = head;

            head = head->next;
            delete temp;

            tail->next = head;
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
            PNODE temp = head;
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
            cout<<"| "<<temp->data<<" | => ";
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
            PNODE target = NULL;

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
};

int main()
{
    SinglyCL sobj;
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