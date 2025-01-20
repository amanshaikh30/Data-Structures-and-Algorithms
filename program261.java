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

    public int Summation()
    {
        int iSum = 0, iCnt = 0;
        for(iCnt = 0; iCnt < iNo; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }
        return iSum;
    }
}

class program261
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iLocation = 0, iRet = 0;

        System.out.println("Enter the number of elements : ");
        iLocation = sobj.nextInt();

        ArrayX aobj = new ArrayX(iLocation);

        aobj.Accept();
        aobj.Display();

        iRet = aobj.Summation();

        System.out.println("Summation of elements is : "+iRet);
    }
} 