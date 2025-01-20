import java.util.*;

class Digits
{
    public void CountDigits(int iNo)
    {
        int iCount[] = {0,0,0,0,0,0,0,0,0,0}; 
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10; 
            iCount[iDigit]++; 
            iNo = iNo / 10;
        }
        for(int i = 0; i<= 9; i++)
        {
            System.out.println("Frequency of "+i+" is : "+iCount[i]);
        }
    }
} 

class program251
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0; 

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        Digits dobj = new Digits();
        dobj.CountDigits(iValue);

    }
}