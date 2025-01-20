#include<stdio.h>

int main()      // Dynamic Input Program
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iAns = 0;

    printf("Enter First Number : ");      
    scanf("%d",&iNo1);

    printf("Enter Second Number : ");
    scanf("%d",&iNo2);

    iAns = iNo1 + iNo2;

    printf("Addition is : %d",iAns);

    return 0;
} 

//   Format Specifiers :- 

/*
%d -  Integer  -   11
%f  - Float    -   11.89
%c  - Character -  'M'
%lf - Double   -  11.111111
*/

