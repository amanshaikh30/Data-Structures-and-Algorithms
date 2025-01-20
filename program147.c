#include<stdio.h>

int main()
{
    char Arr[30];

    printf("Enter your Name : \n");   
    scanf("%s",Arr);                         // Accepts till first space only

    printf("Your name is : %s\n",Arr);

    return 0; 
}