#include<stdio.h>

void Display(int iValue)
{
     int iCnt = 0;

    for(iCnt = iValue; iCnt >= 0; iCnt--)
    {
        printf("%d\n",iCnt);
    }
}

int main()
{
    int iNo = 0;
    printf("Enter the number : ");
    scanf("%d",&iNo);

   Display(iNo);

    return 0;
}  