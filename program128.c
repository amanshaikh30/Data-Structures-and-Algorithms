// Input : 5
// Output : A   B   C   D   E

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = '\0';

    for(iCnt = 1, ch = 'A'; iCnt <= iNo; iCnt++, ch++)                
    {       
        printf("%c\t",ch);
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