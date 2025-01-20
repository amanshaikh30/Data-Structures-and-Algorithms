#include<stdio.h>

// Functional Approach

void Display(int iValue)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        printf("Allahu Akbar...\n");
    }
}

int main()
{
    
    int iNum = 0;

    printf("Enter the number : \n");
    scanf("%d",&iNum);

    Display(iNum);
    
    return 0;
} 