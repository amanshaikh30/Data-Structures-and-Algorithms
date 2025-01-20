// Row : 4
// Column : 3

/*
    *   *   *
    *   *   *
    *   *   *
    *   *   *
*/

#include<stdio.h>

void Display()
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 1; iCnt <= 4; iCnt++)
    {
        for(iCount = 1; iCount <=3; iCount++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    Display(); 

    return 0; 
}  