#include<stdio.h>

int main()
{
    int Arr[4]; 
    int iCnt = 0, iNo = 0;

    printf("Please enter the values  : \n");

    for(iCnt = 0; iCnt < 4;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    for(iCnt = 0;iCnt < 4;iCnt++)
    {
        iNo = iNo + Arr[iCnt];
    } 

    printf("Addition of the values is : %d",iNo);

    return 0; 
} 
