#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class Queue 
{
    public:
        struct node<T> *head;
        int iCount;

        Queue();

        void enqueue(T no);

        int dequeue();

        void Display();

        int Count();
};

template <class T>
Queue<T> :: Queue()
{
    head = NULL;
    iCount = 0;
}

template <class T>
void Queue<T> :: enqueue(T no)
{
    struct node<T> *newn = NULL;
    struct node<T> *temp = NULL;

    newn = new node<T>;
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

template <class T>
<T> Queue<T> :: dequeue()
{
    int no = -1;
    struct node<T> *temp = NULL;

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

template <class T>
void Queue<T> :: Display()
{
    struct node<T> *temp = NULL;
    temp = head;

    cout<<"Elements of Queue are : \n";

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |"<<"\n";
        temp = temp->next;
    }
}

template <class T>
int Queue<T> :: Count()
{
    return iCount;
}

int main()
{
    Queue <int>qobj;
    int iRet = 0;

    qobj.enqueue(101);
    qobj.enqueue(51);
    qobj.enqueue(21);
    qobj.enqueue(11);

    qobj.Display();
    iRet = qobj.Count();
    cout<<"Number of Elements are : "<<iRet<<"\n";

    iRet = qobj.dequeue();
    cout<<"Removed Element is : "<<iRet<<"\n";

    iRet = qobj.dequeue();
    cout<<"Removed Element is : "<<iRet<<"\n";

    qobj.Display();
    iRet = qobj.Count();
    cout<<"Number of Elements are : "<<iRet<<"\n";

    return 0;
} 