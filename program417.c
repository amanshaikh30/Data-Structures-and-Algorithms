#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Name[30];

    printf("Please enter File Name : \n");
    scanf("%[^'\n']s",&Name);

    fd = creat(Name,0777);

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File successfully created with FD %d\n",fd);
    }

    return 0;
} 