/*
    Problem Statement :-
    Write a program which is used to perform ADDITION of two numbers.
*/

#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function Name  :    Addition
//  Description :       It is used to perfrom addition of 2 float values
//  Input :             Float, Float
//  Output :            Float
//  Author :            Aman Shaikh     (MC0000)
//  Date:               06/10/2024
// 
//////////////////////////////////////////////////////////////


float Addition(float fValue1, float fValue2)
{
    float fAdd = 0.0f;                               // Local Variable for result
    fAdd = fValue1 + fValue2;                        // Business Logic
    return fAdd;
}

//////////////////////////////////////////////////////////////
//
//   This application is uesd to perform addition of 2 numbers
//
//////////////////////////////////////////////////////////////

int main()
{
    float fNo1 = 0.0f, fNo2 = 0.0f, fAns = 0.0f;     // Local Variable for input

    printf("Enter first number : ");
    scanf("%f",&fNo1);

    printf("Enter second number : ");
    scanf("%f",&fNo2);

    fAns = Addition(fNo1,fNo2);

    printf("Addition is : %f", fAns);                // Function Call

    return 0; 
} 