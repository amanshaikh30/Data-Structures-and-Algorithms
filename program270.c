#include<stdio.h>

void DisplayR() 
{ 
    static int iCnt = 1;           // Storage class static 

    if(iCnt <= 4) 
    {
        printf("*\n");
        iCnt++;
        DisplayR();         // Recursive Call 
    } 
}

int main()
{
    printf("Inside main\n");
    DisplayR();  
    printf("End of main\n");

    return 0; 
} 