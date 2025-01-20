class node
{
    public int data;
    public node next;

    public node(int x)
    {
        data = x;
        next = null;
    }
}

class Stack
{
    public node head;
    public int iCount;

    public Stack()
    {
        head = null;
        iCount = 0;
    }

    public void push(int no)
    {
        node newn = null;

        newn = new node(no);

        if(head == null)
        {
            head = newn;
        }
        else
        {
            newn.next = head;
            head = newn;
        }

        iCount++;
    }

    public int pop()
    {
        int no = 0;
        if(head == null)
        {
            System.out.println("Stack is empty!");
            return -1;
        }
        else if(head.next == null)
        {
            no = head.data;
            head = null;
            System.gc();
        }
        else
        {
            no = head.data;
            head = head.next;
            System.gc();
        }

        iCount--;

        return no;
    }

    public void Display()
    {
        node temp = head;

        System.out.println("Elements of the Stack are : ");

        while(temp != null)
        {
            System.out.println(temp.data);

            temp = temp.next;
        }
    }

    public int Count()
    {
        return iCount;
    }
}

class program512
{
    public static void main(String Arg[])
    {
        int iRet = 0;

        Stack sobj = new Stack();

        sobj.push(111);
        sobj.push(101);
        sobj.push(51);
        sobj.push(21);
        sobj.push(11);

        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of elements in the Stack are : "+iRet);

        iRet = sobj.pop();
        System.out.println("Poped element is : "+iRet);

        iRet = sobj.pop();
        System.out.println("Poped element is : "+iRet);

        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of elements in the Stack are : "+iRet);

    }
}