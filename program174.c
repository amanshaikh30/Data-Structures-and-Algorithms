#include<stdio.h>

int Count(char *str, char ch)              
{
    int iCnt = 0;

    while(*str != '\0') 
    {
        if(*str == ch)
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
    char cValue = '\0';

    printf("Enter string : \n");   
    scanf("%[^'\n']s",Arr);      

    printf("Enter the character : \n");          
    scanf("%c",&cValue);                        // Problem in this code 
                                                // Solution on program175.c
    iRet = Count(Arr,cValue); 

    printf("Number of character are : %d\n",iRet);  

    return 0;    
} 