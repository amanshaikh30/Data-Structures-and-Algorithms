#include<iostream>
using namespace std;

int main() 
{ 
    int iValue = 0;
    int iMask = 0x10;
    int iResult = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    iResult = iValue ^ iMask;

    cout<<"Number after bit toggle : "<<iResult<<"\n";

    return 0;
} 