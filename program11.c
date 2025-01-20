#include<stdio.h>

int main()
{
    float fRadius = 0.0f;
    float fArea = 0.0f;

    printf("Enter the radius of circle : ");
    scanf("%f",&fRadius);

    fArea = 3.14 * fRadius * fRadius;

    printf("Area of circle is : %f",fArea);

    return 0;
} 

