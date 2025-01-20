import java.util.*;

class Arithematic
{
    public int iValue1;
    public int iValue2;

    Arithematic(int A, int B)
    {
        iValue1 = A;
        iValue2 = B;
    }

    public int Addition()
    {
        int iResult = 0;
        iResult = iValue1 + iValue2;
        return iResult;
    } 
} 

class program232
{ 
    public static void main(String Arg[])
    {
        int iNo1 = 10, iNo2 = 11, iAns = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number : ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter second number : ");
        iNo2 = sobj.nextInt();

        Arithematic aobj = new Arithematic(iNo1,iNo2);          

        iAns = aobj.Addition(); 

        System.out.println("Addition is : "+iAns);
    }
}
