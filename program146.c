#include<stdio.h>

int main()
{
    char Name[] = {'M','u','m','b','a','i','\0'};

    printf("%s\n",Name);            // Base Address

    printf("%c\n",Name[0]);         // M
    printf("%c\n",Name[1]);         // u
    printf("%c\n",Name[2]);         // m
    printf("%c\n",Name[3]);         // b

    return 0;
}