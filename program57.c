#include<stdio.h>

int CountDigits(int iNo)
{
    int iNum = 0;
    int iSum = 0;

    if(iNo < 0)          // Updator
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iNum = iNo % 10; 
        if((iNum % 2) == 0)
        {
            iSum++;
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

    printf("Number of even digits are : %d",iRet);
    
    return 0;
} 