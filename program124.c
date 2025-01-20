// Row : 4
// Column : 4

/*
    0   2   3   4
    1   0   3   4
    1   2   0   4
    1   2   3   0   
*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 1; iCnt <= iRow; iCnt++)                       // Outer loop (Rows)
    {       
        for(iCount = 1; iCount <= iCol; iCount++)             // Inner loop (Columns)
        {
            if(iCnt == iCount)                                // i == j
            {
                printf("0\t");
            } 
            else
            {
                printf("%d\t",iCount); 
            }
        }
        printf("\n");
    }
}

int main() 
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of Rows : ");
    scanf("%d",&iValue1);

    printf("Enter number of Columns : ");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2); 

    return 0; 
}  