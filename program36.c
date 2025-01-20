#include<stdio.h>

void Display(int iValue)
{
    int iCnt = 0;
    
    iCnt = 1;
     while(iCnt<=iValue)
    {
        printf("%d Allahu Akbar...\n",iCnt);
        iCnt++;
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


