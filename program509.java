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

class SinglyLL
{
    public node head;
    public int iCount;

    public SinglyLL()
    {
        head = null;
        iCount = 0;
    }

    public void InsertFirst(int no)
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

    public void InsertLast(int no)
    {
        node newn = null;

        newn = new node(no);

        if(head == null)
        {
            head = newn;
        }
        else
        {
            node temp = head;

            while(temp.next != null)
            {
                temp = temp.next;
            }

            temp.next = newn;
        }

        iCount++;
    }

    public void Display()
    {
        node temp = head;

        System.out.println("Elements of the LinkedList are : ");

        while(temp != null)
        {
            System.out.print("| "+temp.data+" |-> ");

            temp = temp.next;
        }

        System.out.println("null");
    }

    public int Count()
    {
        return iCount;
    }

    public void DeleteFirst()
    {
        if(head == null)
        {
            return;
        }
        else if(head.next == null)
        {
            head = null;
            System.gc();
        }
        else
        {
            head = head.next;
            System.gc();
        }

        iCount--;
    }

    public void DeleteLast()
    {
        if(head == null)
        {
            return;
        }
        else if(head.next == null)
        {
            head = null;
            System.gc();
        }
        else
        {
            node temp = head;

            while(temp.next.next != null)
            {
                temp = temp.next;
            }
            
            temp.next = null;
            System.gc();
        }

        iCount--;
    }
}

class program509
{
    public static void main(String Arg[])
    {
        int iRet = 0;

        SinglyLL sobj = new SinglyLL();

        sobj.InsertFirst(51);
        sobj.InsertFirst(21);
        sobj.InsertFirst(11);

        sobj.InsertLast(101);
        sobj.InsertLast(111);
        sobj.InsertLast(121);

        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of elements in the LinkedList are : "+iRet);

        sobj.DeleteFirst();

        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of elements in the LinkedList are : "+iRet);

        sobj.DeleteLast();

        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of elements in the LinkedList are : "+iRet);
    }
}