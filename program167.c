#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;

    while(*str != '\0') 
    {
        if(*str >= 'a' && *str <= 'z') 
        {
            iCnt++; 
        }
        str++; 
    }
    return iCnt; 
}

int main() 
{
    char Arr[30];
    int iRet = 0; 

    printf("Enter string : \n");   
    scanf("%[^'\n']s",Arr);                         

    iRet = CountSmall(Arr); 

    printf("Number of Small Letters are : %d\n",iRet); 

    return 0;    
} 