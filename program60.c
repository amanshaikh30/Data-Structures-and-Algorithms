#include<stdio.h>

int CountDigits(int iNo)
{
    int iNum = 0;
    int iSum = 0;

    if(iNo < 0)             // If input is negative
    {
        iNo = -iNo;         // Convert it to positive
    }

    while(iNo > 0)
    {
        iNum = iNo % 10; 
        if((iNum % 2) == 0)
        {
            iSum = iSum + iNum;
        }
        iNo = iNo / 10; 
        
    } 
        return iSum; 
} 

int main()            
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("Summation of even digits are : %d",iRet);
    
    return 0;
} 