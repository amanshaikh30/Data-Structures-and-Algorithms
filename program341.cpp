#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE; 

class SinglyLL
{
    public:
    PNODE head;
    int iCount;

    SinglyLL()
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
        PNODE temp = head;

        newn = new NODE;                 
        newn->data = no;
        newn->next = NULL;

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
        }
        iCount++;
    }

    void DeleteFirst()
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

            head = head->next;
            delete temp;
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

    void InsertAtPos(int no, int iPos)
    {
        if((iPos < 1) || (iPos > iCount + 1))
        {
            cout<<"Invalid Input\n";
            return;
        }
        if(iPos == 1)
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
            PNODE newn = new NODE;

            newn->data = no;
            newn->next = NULL;

            for(i = 1; i < iPos-1; i++)
            {
                temp = temp->next;
            }
            newn->next = temp->next;
            temp->next = newn;

            iCount++;
        }
    }

    void DeleteAtPos(int iPos)
    {
        if((iPos < 1) || (iPos > iCount))
        {
            cout<<"Invalid Input\n";
            return;
        }
        if(iPos == 1)
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

            for(i = 1; i < iPos-1; i++)
            {
                temp = temp->next;
            }

            target = temp->next;
            temp->next = target->next;
            delete target;

            iCount--;
        }
    } 

    void Display()
    {
        PNODE temp = head;

        cout<<"Elements of LinkedList are : \n";

        while(temp != NULL)
        {
            cout<<"| "<<temp->data<<" | -> ";
            temp = temp->next;
        }
        cout<<"NULL\n";
    }

    int Count()
    {
        return iCount; 
    }
};

int main()
{
    int iRet = 0;
    SinglyLL sobj;

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of Elements are : "<<iRet<<"\n\n";

    sobj.InsertLast(101);
    sobj.InsertLast(111);
    sobj.InsertLast(121);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of Elements are : "<<iRet<<"\n\n";

    sobj.InsertAtPos(75,4);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of Elements are : "<<iRet<<"\n\n";

    sobj.DeleteAtPos(4);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of Elements are : "<<iRet<<"\n\n";

    return 0;
}  