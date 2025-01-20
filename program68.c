#include<stdio.h>

void Display(int *ptr)
{
    int iCnt = 0;
    
   for(iCnt = 0; iCnt < 4; iCnt++)
   {
        printf("%d\n",*ptr);
        ptr++;
   }
   
}

int main()
{
    int Arr[4]; 
    int iCnt = 0; 

    printf("Please enter the values  : \n");

    for(iCnt = 0; iCnt < 4;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    printf("Values of the Array are : \n");

    Display(Arr);                         // Display(100);

    return 0; 
} 
