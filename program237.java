import java.util.*;

class Arithematic
{
    public long Power(int A, int B)
    {
        long iResult = 1;
        int iCnt = 0;

        for(iCnt = 1; iCnt <= B; iCnt++)
        {
            iResult = iResult * A;
        }
        
        return iResult;
    } 
} 

class program237 
{
    public static void main(String Arg[]) 
    {
        int iNo1 = 0, iNo2 = 0; 
        long iAns = 0;

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
