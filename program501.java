class node
{
    public int data;
    public node next;
}

class program501
{
    public static void main(String Arg[])
    {
        node obj1 = new node();
        node obj2 = new node();
        node obj3 = new node();

        node first = null;

        first = obj1;
        
        obj1.data = 11;
        obj1.next = obj2;

        obj2.data = 21;
        obj2.next = obj3;

        obj3.data = 51;
        obj3.next = null; 
    }
}