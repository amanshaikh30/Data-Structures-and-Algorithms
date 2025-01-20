// Input : 5
// Output : a   b   c   d   e

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = 'a';

    for(iCnt = 1; iCnt <= iNo; iCnt++)                
    {       
        printf("%c\t",ch);
        ch++;
        
    }
    printf("\n");
}

int main() 
{
    int iValue1 = 0;

    printf("Enter number of Rows : ");
    scanf("%d",&iValue1);

    Display(iValue1); 

    return 0; 
}  