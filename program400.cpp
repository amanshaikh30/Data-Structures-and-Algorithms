#include<iostream>
using namespace std;

double AdditionI(double Arr[], int iSize)
{
    double iSum = 0.0;
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
}

int main()
{
    double Brr[] = {10.8,20.4,30.9,40.5};
    double bRet = 0.0;

    bRet = AdditionI(Brr,4);
    cout<<"Addition is : "<<bRet<<"\n";

    return 0;
}