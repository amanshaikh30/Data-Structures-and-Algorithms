#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE;

class Queue
{
    public:
        PNODE head;
        int iCount;

        Queue()
        {
            head = NULL;
            iCount = 0;
        }

        void enqueue(int no)
        {
            PNODE newn = NULL;
            PNODE temp = NULL;

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

        int dequeue()
        {
            int no = -1;
            PNODE temp = NULL;

            if(head == NULL)
            {
                cout<<"Queue is empty!\n";
                return -1;
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
            temp = head;

            cout<<"Elements of Queue are : \n";

            while(temp != NULL)
            {
                cout<<"| "<<temp->data<<" |"<<"\n";
                temp = temp->next;
            }
        }

        int Count()
        {
            return iCount;
        }
};

int main()
{
    Queue qobj;
    int iRet = 0;

    qobj.enqueue(101);
    qobj.enqueue(51);
    qobj.enqueue(21);
    qobj.enqueue(11);

    qobj.Display();
    iRet = qobj.Count();
    cout<<"Number of Elements are : "<<iRet<<"\n";

    iRet = qobj.dequeue();
    cout<<"Removed Element are : "<<iRet<<"\n";

    iRet = qobj.dequeue();
    cout<<"Removed Element are : "<<iRet<<"\n";

    qobj.Display();
    iRet = qobj.Count();
    cout<<"Number of Elements are : "<<iRet<<"\n";

    return 0;
} 