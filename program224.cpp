#include<iostream>
using namespace std;

int OffBit(int iNo, int iPos)
{
    int iMask = 0xffffffef;
    int iResult = 0;

    iResult = iNo & iMask;

    return iResult;                                          
}

int main() 
{ 
    int iValue = 0, iLocation = 0, iRet = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    cout<<"Enter the number : \n";
    cin>>iLocation;

    iRet = OffBit(iValue, iLocation);

    cout<<"Number after bit OFF : "<<iRet<<"\n";

    return 0; 
} 

