#include<stdio.h>

int CountCapital(char *str)
{
    static int iCnt = 0;
    if(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCnt++;
        }
        str++;
        CountCapital(str);
    }
    return iCnt;
}

int main() 
{
    char Arr[30];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountCapital(Arr);

    printf("Capital Count is : %d\n",iRet); 

    return 0; 
} 