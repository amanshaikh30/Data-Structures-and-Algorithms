/*
    START

    Accept the total marks
    Accept the obtained marks
    Calculate the percentage as (obtained / total) * 100
    Display the calculated percentage

    STOP 
*/

#include<stdio.h>

float Percentage(int iA, int iB)
{
    float iC = 0;
    iC = ((float)iA/(float)iB) * 100;
    return iC;
}

int main()
{
    int iValue = 0, iMarks = 0;
    float fMyMarks = 0.0f;

    
    printf("Enter the obtained marks : ");
    scanf("%d",&iValue);

    printf("Enter the Total marks : ");
    scanf("%d",&iMarks);

   fMyMarks = Percentage(iValue,iMarks);

    printf("Percentage is : %f",fMyMarks);

    return 0;
}

