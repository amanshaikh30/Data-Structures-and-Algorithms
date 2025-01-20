#include<stdio.h>

int strlenX(char *str)
{
    static int iCnt = 0;
    if(*str != '\0')
    {
        iCnt++;
        str++;
        strlenX(str);
    }
    return iCnt;
}

int main() 
{
    char Arr[30];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenX(Arr);

    printf("String length is : %d\n",iRet); 

    return 0; 
} 