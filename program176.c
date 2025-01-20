#include<stdio.h>
#include<stdbool.h>

#define true 1
#define false 0

typedef int BOOL;

bool Count(char *str, char ch)             
{
    int iCnt = 0;
    bool bFlag = false;

    while(*str != '\0') 
    {
        if(*str == ch) 
        {
            bFlag = true;
            break; 
        }
        str++; 
    } 
    return bFlag;
} 

int main() 
{
    char Arr[30];
    bool bRet = false; 
    char cValue = '\0';

    printf("Enter string : \n");   
    scanf("%[^'\n']s",Arr);      

    printf("Enter the character : \n");          
    scanf(" %c",&cValue);                     

    bRet = Count(Arr,cValue); 

    if(bRet == true)
    {
        printf("Character is present \n");
    }
    else
    {
        printf("Character is not present \n");
    }

    return 0;    
} 