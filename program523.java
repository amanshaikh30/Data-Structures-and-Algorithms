class node
{
    public int data;
    public node next;
    public node prev;

    public node(int x)
    {
        data = x;
        next = null;
        prev = null;
    }
}

class SinglyCL
{
    public node head;
    public node tail;
    public int iCount;

    public SinglyCL()
    {
        head = null;
        tail = null;
        iCount = 0;
    }

    public void InsertFirst(int no)
    {
        node newn = null;

        newn = new node(no);

        if((head == null) && (tail == null))
        {
            head = newn;
            tail = newn;
        }
        else
        {
            newn.next = head;
            head = newn;
        }

        tail.next = head;

        iCount++;
    }

    public void InsertLast(int no)
    {
        node newn = null;

        newn = new node(no);

        if((head == null) && (tail == null))
        {
            head = newn;
            tail = newn;
        }
        else
        {
            tail.next = newn;
            tail = tail.next;
        }

        tail.next = head;

        iCount++;
    }

    public void Display()
    {
        node temp = head;

        System.out.println("Elements of the LinkedList are : ");

        do
        {
            System.out.print("| "+temp.data+" |-> ");
            temp = temp.next;
        }while(temp != tail.next);

        System.out.println("null");
    }

    public int Count()
    {
        return iCount;
    }

    public void DeleteFirst()
    {
        if((head == null) && (tail == null))
        {
            return;
        }
        else if(head.next == null)
        {
            head = null;
            tail = null;
            System.gc();
        }
        else
        {
            head = head.next;
            System.gc();
        }

        tail.next = head;

        iCount--;
    }

    public void DeleteLast()
    {
        if((head == null) && (tail == null))
        {
            return;
        }
        else if(head.next == null)
        {
            head = null;
            tail = null;
            System.gc();
        }
        else
        {
            node temp = head;

            while(temp.next.next != null)
            {
                temp = temp.next;
            }

            tail = temp;
            tail.next = head;

            System.gc();
        }

        tail.next = head;

        iCount--;
    }

    public void InsertAtPos(int no, int ipos)
    {
        if((ipos < 1) || (ipos > iCount + 1))
        {
            System.out.println("Invalid Position!");
            return;
        }
        else if(ipos == 1)
        {
            InsertFirst(no);
        }
        else if(ipos == iCount + 1)
        {
            InsertLast(no);
        }
        else
        {
            node newn = new node(no);
            node temp = head;
            int i = 0;

            for(i = 1; i < ipos-1; i++)
            {
                temp = temp.next;
            }

            newn.next = temp.next;
            temp.next = newn;

            tail.next = head;

            iCount++;
        }
    }

    public void DeleteAtPos(int ipos)
    {
        if((ipos < 1) || (ipos > iCount))
        {
            System.out.println("Invalid Position!");
            return;
        }
        else if(ipos == 1)
        {
            DeleteFirst();
        }
        else if(ipos == iCount)
        {
            DeleteLast();
        }
        else
        {
            node temp = head;
            int i = 0;

            for(i = 1; i < ipos-1; i++)
            {
                temp = temp.next;
            }

            temp.next = temp.next.next;
            System.gc();

            tail.next = head;

            iCount--;
        }
    }
}

class program523
{
    public static void main(String Arg[])
    {
        int iRet = 0;

        SinglyCL sobj = new SinglyCL(); 

        sobj.InsertFirst(51);
        sobj.InsertFirst(21);
        sobj.InsertFirst(11);

        sobj.InsertLast(101);
        sobj.InsertLast(111);
        sobj.InsertLast(121);

        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of elements in the LinkedList are : "+iRet);

        sobj.InsertAtPos(75,4);

        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of elements in the LinkedList are : "+iRet);

        sobj.DeleteAtPos(4);

        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of elements in the LinkedList are : "+iRet);
    }
}