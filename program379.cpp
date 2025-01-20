#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE;

class Stack
{
    public:
        PNODE head;
        int iCount;

        Stack()
        {
            head = NULL;
            iCount = 0;
        }

        void push(int no)
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

        int pop()
        {
            return 0;
        }

        void Display()
        {

        }

        int Count()
        {
            return iCount;
        }
};

int main()
{
    Stack sobj;

    sobj.push(101);
    sobj.push(51);
    sobj.push(21);
    sobj.push(11);

    return 0;
}