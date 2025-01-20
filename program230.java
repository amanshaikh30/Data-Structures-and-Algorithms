import java.util.*;

class program230
{
    public static int Addition(int A, int B)
    {
        int iResult = 0;
        iResult = A + B;
        return iResult;
    } 

    public static void main(String Arg[])
    {
        int No1 = 10, No2 = 11, Ans = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number : ");
        No1 = sobj.nextInt();

        System.out.println("Enter second number : ");
        No2 = sobj.nextInt();

        Ans = Addition(No1,No2); 

        System.out.println("Addition is : "+Ans);
    }
}
