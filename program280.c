#include<stdio.h>

int CountDigitsI(int iNo)
{
    int iCnt = 0;

    while(iNo != 0)
    {
        iCnt++;
        iNo = iNo / 10;
    } 
    return iCnt;
}

int main() 
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = CountDigitsI(iValue);

    printf("Count of Digits is : %d\n",iRet); 

    return 0; 
} 