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

class DoublyLL
{
    public node head;
    public node tail;
    public int iCount;

    public DoublyLL()
    {
        head = null;
        iCount = 0;
    }

    public void InsertFirst(int no)
    {
        node newn = new node(no);

        if((head == null))
        {
            head = newn;
        }
        else
        {
            newn.next = head;
            head.prev = newn;
            head = newn;
        }

        iCount++;
    }

    public void InsertLast(int no)
    {
        node newn = new node(no);

        if((head == null))
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
            newn.prev = temp;
        }

        iCount++;
    }

    public void Display()
    {
        node temp = head;

        if(head != null)
        {
            System.out.println("Elements of the LinkedList are : ");

            while(temp != null)
            {
                System.out.print("| "+temp.data+" | <=> ");
                temp = temp.next;
            }

            System.out.println("REPEAT");
        }
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
        }
        else
        {
            head = head.next;
            head.prev = null;
        }

        System.gc();
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
        }
        else
        {
            node temp = head;

            while(temp.next.next != null)
            {
                temp = temp.next;
            }

            temp.next = null;
        }
        
        System.gc();
        iCount--;
    }

    public void InsertAtPos(int no, int ipos)
    {
        if(ipos < 1 || ipos > iCount + 1)
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
            int i = 0;
            node temp = head;

            for(i = 1; i < ipos-1; i++)
            {
                temp = temp.next;
            }

            newn.next = temp.next;
            temp.next.prev = newn;

            temp.next = newn;
            newn.prev = temp;

            iCount++;
        }
    }

    public void DeleteAtPos( int ipos)
    {
        if(ipos < 1 || ipos > iCount)
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
            int i = 0;
            node temp = head;

            for(i = 1; i < ipos-1; i++)
            {
                temp = temp.next;
            }

            temp.next = temp.next.next;
            temp.next.prev = temp;

            System.gc();

            iCount--;
        }
    }
}

class program522
{
    public static void main(String Arg[])
    {
        int iRet = 0;
        DoublyLL dobj = new DoublyLL();

        dobj.InsertFirst(51);
        dobj.InsertFirst(21);
        dobj.InsertFirst(11);

        dobj.InsertLast(101);
        dobj.InsertLast(111);
        dobj.InsertLast(121);

        dobj.Display();
        iRet = dobj.Count();
        System.out.println("Number of elements are : "+iRet);

        dobj.InsertAtPos(75,4);

        dobj.Display();
        iRet = dobj.Count();
        System.out.println("Number of elements are : "+iRet);

        dobj.DeleteAtPos(4);

        dobj.Display();
        iRet = dobj.Count();
        System.out.println("Number of elements are : "+iRet);
    }
} 