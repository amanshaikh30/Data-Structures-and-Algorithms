import java.util.*;

class ArrayX
{
    public int Arr[];
    public int iNo;

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
        iNo = iSize;
    }
    public void Accept()
    {
        int iCnt = 0; 

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elements : ");
        for(iCnt = 0; iCnt < iNo; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt(); 
        }
    }
    public void Display()
    {
        int iCnt = 0;
        
        System.out.println("Elements are : ");
        for(iCnt = 0; iCnt < iNo; iCnt++)
        {
            System.out.println(Arr[iCnt]); 
        }
    }

    protected void finalize()                        // Works as Destructor 
    {
        Arr = null;
        System.out.println("Inside finalize");
    }
}

class program259
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iLocation = 0, i = 0;

        System.out.println("Enter the number of elements : ");
        iLocation = sobj.nextInt();

        ArrayX aobj = new ArrayX(iLocation);

        aobj.Accept();
        aobj.Display();
    }
} 