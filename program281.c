#include<stdio.h>

int CountDigitsR(int iNo)
{
    static int iCnt = 0;

    if(iNo != 0)
    {
        iCnt++;
        iNo = iNo / 10;
        CountDigitsR(iNo);
    } 
    return iCnt;
}

int main() 
{  
    int iValue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue); 

    iRet = CountDigitsR(iValue); 

    printf("Count of Digits is : %d\n",iRet); 

    return 0; 
} 