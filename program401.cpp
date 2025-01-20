#include<iostream>
using namespace std;

template <class T>
T Addition(T Arr[], int iSize)
{
    T iSum;
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

    bRet = Addition(Brr,4);
    cout<<"Addition is : "<<bRet<<"\n";

    return 0;
}