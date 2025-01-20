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
            int no = -1;
            PNODE temp = NULL;

            if(head == NULL)
            {
                cout<<"Stack is empty!\n";
            }
            else if(head->next == NULL)
            {
                no = head->data;
                delete head;
                head = NULL;
            }
            else
            {
                temp = head;

                no = head->data;
                head = head->next;
                delete temp;
            }
            iCount--;
            return no;
        }

        void Display()
        {
            PNODE temp = NULL;

            while(temp != NULL)
            {
                cout<<"| "<<temp->data<<" |"<<"\n";
                temp = temp->next;
            }
            cout<<"\n";
        }

        int Count()
        {
            return iCount;
        }
};

int main()
{
    Stack sobj;
    int iRet = 0;

    sobj.push(101);
    sobj.push(51);
    sobj.push(21);
    sobj.push(11);

    return 0;
}