#include<stdio.h>

int main()
{
    float fValue = 0.0f;
    float fResult = 0.0f;
    

    printf("Enter the radius of circle : ");
    scanf("%f",&fValue);

    fResult = CircleArea(fValue);

    printf("Area of circle is : %f",fResult);

    return 0;
} 

float CircleArea(float fRadius)
{
    float fArea = 0.0f;
    fArea = 3.14f * fRadius * fRadius;
    return fArea; 
} 