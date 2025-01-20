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
    {}

    void InsertLast(int no)
    {}

    void DeleteFirst()
    {}

    void DeleteLast()
    {}

    void Display()
    {}

    int Count()
    {
        return iCount;
    }

    void InsertAtPos(int no, int iPos)
    {}

    void DeleteAtPos(int iPos)
    {}
}

int main()
{
    DoublyCL dobj;

    return 0;
}