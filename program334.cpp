#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

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

        newn = new NODE;                 // newn = (PNODE)malloc(sizeof(NODE));
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
    {}
    void InsertAtPos(int no, int iPos)
    {}
    void DeleteFirst()
    {}
    void DeleteLast()
    {}
    void DeleteAtPos(int iPos)
    {} 
    void Display()
    {}
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

    iRet = sobj.Count();
    cout<<"Number of Elements are : "<<iRet<<"\n";

    return 0;
}