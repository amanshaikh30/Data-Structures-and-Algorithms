#include<stdio.h>

int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt=1; iCnt <= iNo/2; iCnt++)           // O(N/2)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        } 
    }
    return iSum;
} 

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue); 

    iRet = SumFactors(iValue);
    printf("Sum of factors : %d\n",iRet);

    return 0;
} 