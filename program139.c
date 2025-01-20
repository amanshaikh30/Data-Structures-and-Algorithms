// Input : Row = 4 , Col = 4
// Output :  

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    if(iRow != iCol)
    {
        printf("Invalid Input\n"); 
        return; 
    } 

    for(i = 1; i <= iRow; i++)                
    {     
        for(j = 1; j <= iCol; j++) 
        { 
            if(i == j)                    // Diagonal
            {
                printf("@\t");
            }
            if(i > j)                     // Lower Part 
            {
                printf("*\t");
            }
            else                          // Upper Part 
            {
                printf("\t"); 
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