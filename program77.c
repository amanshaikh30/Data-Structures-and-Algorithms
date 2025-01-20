#include<stdio.h>
#include<stdlib.h>

void Function(int Arr[],  int iSize)
{
    // Logic 
}

int main()
{
    int iLength = 0, iCnt = 0;
    int *ptr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n"); 

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Function(ptr,iLength);
    free(ptr); 

    return 0;
}

