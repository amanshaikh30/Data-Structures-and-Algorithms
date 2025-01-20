#include<stdio.h>

void Display(int iCnt)
{
    int iNo = 0;
    for(iNo=1;iNo<=iCnt;iNo++)
    {
        printf("%d\n",iNo);
    }
}

int main()
{
    int iNum = 0;

    printf("Enter number : ");
    scanf("%d",&iNum);

    Display(iNum);

    return 0;
} 