#include<stdio.h>

void DisplayDigits(int iNo) 
{
    int iNum = 0;

    while(iNo > 0)
    {
        iNum = iNo % 10;
        printf("%d\n",iNum);
        iNo = iNo / 10;
    } 
}

int main()
{
    int iValue = 0;
    
    printf("Enter number : \n");
    scanf("%d",iValue);

    DisplayDigits(iValue);
    
    return 0;
} 