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

    SinglyLL()
    {
        head = NULL;
    }

    void InsertFirst(int no)
    {}
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
        return 0;
    }
};

int main()
{
    SinglyLL sobj;

    return 0;
}