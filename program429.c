#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char Name[30];
    char Arr[20]= {'\0'};
    int fd = 0;

    printf("Please enter File Name that you want to open : \n");
    scanf("%[^'\n']s",&Name);

    fd = open(Name,O_RDONLY);

    lseek(fd,5,SEEK_SET);

    read(fd,Arr,10);

    printf("Data from file is : %s\n",Arr);

    close(fd);

    return 0;
}   

// SEEK_SET       from start                    0
// SEEL_CUR       from current position         1
// SEEK_END       End                           2