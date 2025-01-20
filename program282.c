#include<stdio.h>

int SumDigitsI(int iNo)
{
    int iCnt = 0;

    while(iNo != 0)
    {
        iCnt = iCnt + (iNo % 10);
        iNo = iNo / 10;
    } 
    return iCnt;
}

int main() 
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = SumDigitsI(iValue);

    printf("Count of Digits is : %d\n",iRet); 

    return 0; 
} 