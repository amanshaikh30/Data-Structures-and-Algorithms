/*
    START
        Accept the percentage from user
        If percentage are less than 40 then display FAIL
        And if it is greater than orequal to 40 then display PASS
    STOP
*/

#include<stdio.h>

void DisplayResult(float fPercentage)
{
    if(fPercentage < 0.0f || fPercentage > 100.00f)
    {
        printf("Invalid percentage. Please enter in the value in range 0 to 100!");
        return;
    }
    if(fPercentage >= 40.00f)
    {
        printf("You are PASS!");
    }
    else
    {
        printf("You are FAIL!");
    }
}

int main() 
{
    float fValue = 0.0f;

    printf("Enter the percentage : ");
    scanf("%f",&fValue);

    DisplayResult(fValue); 

    return 0; 
}

