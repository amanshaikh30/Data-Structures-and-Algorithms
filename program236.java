import java.util.*;

class Arithematic
{
    public int Power(int A, int B)
    {
        int iResult = 1, iCnt = 0;

        for(iCnt = 1; iCnt <= B; iCnt++)
        {
            iResult = iResult * A;
        }
        
        return iResult;
    } 
} 

class program236
{
    public static void main(String Arg[]) 
    {
        int iNo1 = 0, iNo2 = 0;
        int iAns = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Base : ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter Index : ");
        iNo2 = sobj.nextInt();

        Arithematic aobj = new Arithematic();          

        iAns = aobj.Power(iNo1,iNo2); 

        System.out.println("Result is : "+iAns);
    }
}
