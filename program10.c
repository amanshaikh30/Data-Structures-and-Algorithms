/*
    Problem Statement :-
    Write a program which is used to perform ADDITION of two numbers.
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Addition
//  Description :       It is used to perfrom addition of 2 float values
//  Input :             Float, Float
//  Output :            Float
//  Author :            Aman Shaikh     (My Id)
//  Date:               06/10/2024
// 
//////////////////////////////////////////////////////////////////////////////////////////////


float Addition(float fValue1, float fValue2)
{
    float fAdd = 0.0f;                               // Local Variable for result
    // Updator
    if(fValue1< 0.0f)
    {
        fValue1 = -fValue1;
    } 
    if(fValue2< 0.0f)
    {  
        fValue2 = -fValue2;
    } 

    fAdd = fValue1 + fValue2;                        // Business Logic
    return fAdd;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//   This application is uesd to perform addition of 2 numbers
//
//////////////////////////////////////////////////////////////////////////////////////////////

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

/*
    Step 5 : Test the code

TestCase 1 :-
    Enter first number : 10.0
    Enter second number : 20.0
    Addition is : 30.000000

TestCase 2 :-
    Enter first number : -10.0
    Enter second number : 20.0
    Addition is : 30.000000

TestCase 3 :-
    Enter first number : 10.0 
    Enter second number : -20.0
    Addition is : 30.000000

TestCase 4 :-
    Enter first number : -20.0
    Enter second number : -10.0
    Addition is : 30.000000
    
*/