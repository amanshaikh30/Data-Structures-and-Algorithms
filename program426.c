#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char Name[30];

    printf("Please enter File Name that you want to delete : \n");
    scanf("%[^'\n']s",&Name);

    unlink(Name);

    return 0;
} 