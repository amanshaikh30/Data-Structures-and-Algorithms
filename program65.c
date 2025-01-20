#include<stdio.h>

int main()
{
    int Arr[4]; 
    int iCnt = 0;

    printf("Please enter the values  : \n");

    for(iCnt = 0; iCnt < 4;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    printf("Values from the Array are : \n");
    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }        

    return 0; 
} 
