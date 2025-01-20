#include<stdio.h>

int Reverse(int iNo)
{
    int iNum = 0,iRev = 0;

    if(iNo < 0)             // If input is negative
    {
        iNo = -iNo;         // Convert it to positive
    }

    while(iNo > 0)
    {
        iNum = iNo % 10; 
        iRev = (iRev * 10) + iNum;
        iNo = iNo / 10; 
        
    } 
        return iRev; 
}       

int main()            
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Reverse(iValue);

    printf("Reversed digits are : %d",iRet);
    
    return 0;
} 