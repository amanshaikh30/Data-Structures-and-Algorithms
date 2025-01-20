 #include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[], int iSize)
{
    int iSum = 0, iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, iRet = 0, iCnt = 0;

    // Step 1 : Accept the number of elements from user
    printf("Enter number of elements  : \n");
    scanf("%d",&iLength);

    // Step 2 : Allocate that memory dynamically
    ptr = (int *)malloc (iLength * sizeof(int));

    printf("Enter the elements : \n");

    // Step 3 : Accept the values and store into the dynamic memory
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]); 
    }

    // Step 4 : Perform the operations (Logic)
    iRet = Addition(ptr,iLength);

    printf("Addition is : %d\n",iRet);

    // Step 5 : Dealloacte that memory 
    free(ptr);

    return 0;
}
