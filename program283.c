#include<stdio.h>

int SumDigitsR(int iNo)
{
    static int iCnt = 0;

    if(iNo != 0)
    {
        iCnt = iCnt + (iNo % 10);
        iNo = iNo / 10;
        SumDigitsR(iNo);
    } 
    return iCnt;
}

int main() 
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = SumDigitsR(iValue);

    printf("Count of Digits is : %d\n",iRet); 

    return 0; 
} 