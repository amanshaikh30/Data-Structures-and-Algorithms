#include<stdio.h>

int CountEvenDigits(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    } 
    return iCnt;
}

int main() 
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = CountEvenDigits(iValue);

    printf("Count of Even Digits is : %d\n",iRet); 

    return 0; 
} 