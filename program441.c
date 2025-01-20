#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

#define FILESIZE 1024

int main()
{
    char Name[30];
    char Arr[FILESIZE]= {'\0'};
    int fd = 0;
    int iRet = 0;

    printf("Please enter File Name that you want to open : \n");
    scanf("%[^'\n']s",&Name);

    fd = open(Name,O_RDONLY);

    printf("Data is : \n");

    while((iRet = read(fd,Arr,FILESIZE)) != 0)
    {
        write(1,Arr,iRet);
    } 

    close(fd);

    return 0;
}   
