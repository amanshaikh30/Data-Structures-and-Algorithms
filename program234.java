import java.util.*;

class Rectangle
{
    public int CalculateArea(int A, int B)
    {
        int iResult = 0;
        iResult = A * B;
        return iResult;
    } 
}

class program234
{
    public static void main(String Arg[]) 
    {
        int iNo1 = 0, iNo2 = 0;
        int iAns = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Length : ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter Width : ");
        iNo2 = sobj.nextInt();

        Rectangle robj = new Rectangle();          

        iAns = robj.CalculateArea(iNo1,iNo2); 

        System.out.println("Area is : "+iAns);
    }
}
