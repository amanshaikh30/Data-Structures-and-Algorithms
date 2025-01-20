import java.util.*;

class Numbers
{
    public int EvenFactors(int iNo)
    {
        int iCnt = 0, iResult = 0;

        if(iNo % 2 != 0)
        {
            return 0;
        }

        for(iCnt = 2; iCnt <= iNo/2; iCnt=iCnt+2)          // iCnt+=2
        {
            if((iNo%iCnt == 0)) 
            {
                iResult = iResult + iCnt; 
            }
        } 
        return iResult;
    }
}

class program240
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0, iRet = 0; 

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        Numbers nobj = new Numbers();
        iRet = nobj.EvenFactors(iValue);

        System.out.println("Addition of even factors : "+iRet);
    }
}