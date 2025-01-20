#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class Stack
{ 
    public:
        struct node<T> *head;
        int iCount;

        Stack();

        void push(T no);

        int pop();

        void Display();

        int Count();
};

template <class T>
Stack<T> :: Stack()
{
    head = NULL;
    iCount = 0;
}

template <class T>
void Stack<T> :: push(T no)
{
    struct node<T> *newn = NULL;

    newn = new node<T>;
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

template <class T>
<T> Stack<T> :: pop()
{
    int no = -1;
    struct node<T> *temp = NULL;

    if(head == NULL)
    {
        cout<<"Stack is empty!\n";
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
void Stack<T> :: Display()
{
    struct node<T> *temp = NULL;
    temp = head;

    cout<<"Elements of Stack are : \n";

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |"<<"\n";
        temp = temp->next;
    }
}

template <class T>
int Stack<T> :: Count()
{
    return iCount;
}

int main()
{
    Stack <int>sobj;
    int iRet = 0;

    sobj.push(101);
    sobj.push(51);
    sobj.push(21);
    sobj.push(11);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of Elements are : "<<iRet<<"\n";

    iRet = sobj.pop();
    cout<<"Poped Element is : "<<iRet<<"\n";

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of Elements are : "<<iRet<<"\n";

    return 0;
}