#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char Name[30];
    char Arr[10]= {'\0'};
    int fd = 0;
    int iRet = 0;

    printf("Please enter File Name that you want to open : \n");
    scanf("%[^'\n']s",&Name);

    fd = open(Name,O_RDONLY);

    iRet = read(fd,Arr,10);
    // printf("%s",Arr);
    write(1,Arr,iRet);       // System Calls

    iRet = read(fd,Arr,10);
    // printf("%s",Arr);
    write(1,Arr,iRet);

    iRet = read(fd,Arr,10);
    // printf("%s",Arr);
    write(1,Arr,iRet);

    iRet = read(fd,Arr,10);
    // printf("%s",Arr);
    write(1,Arr,iRet);

    close(fd);

    return 0;
}   

// SEEK_SET       from start                    0
// SEEL_CUR       from current position         1
// SEEK_END       from End                      2