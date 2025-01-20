#include<stdio.h>           // Segmentation Fault

void DisplayR()
{
    int iCnt = 1;           // Storage class auto

    if(iCnt <= 4) 
    {
        printf("*\n");
        iCnt++;
        DisplayR();         // Recursive Call 
    } 
}

int main()
{
    DisplayR();  

    return 0; 
} 