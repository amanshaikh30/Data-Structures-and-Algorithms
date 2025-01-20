#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iSize) 
{
    int iCnt = 0, iMax = 0;
    iMax = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++) 
    {
        if(iMax < Arr[iCnt]) 
        {
            iMax = Arr[iCnt]; 
        }
    }
    return iMax;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0,iCnt = 0;
    int  iRet = 0; 

    printf("Enter number of elements  : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc (iLength * sizeof(int));

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Maximum(ptr,iLength);

    printf("Maximum is : %d\n",iRet); 

    free(ptr); 

    return 0; 
}
