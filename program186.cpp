#include<iostream>
using namespace std;

class Arithmetic
{
    public:
    int iValue1;
    int iValue2;

    Arithmetic(int A, int B)
    {
        iValue1 = A;
        iValue2 = B;
    }
    int Addition()
    {
        int iResult = 0;
        iResult = iValue1 + iValue2;
        return iResult;
    }
};

int main()
{
    int iNo1 = 0, iNo2 = 0, iAns = 0;

    cout<<"Enter first number : \n";
    cin>>iNo1;

    cout<<"Enter second number : \n";
    cin>>iNo2;

    Arithmetic aobj(iNo1,iNo2);

    iAns = aobj.Addition(); 

    cout<<"Addition is : "<<iAns<<"\n";

    return 0;
} 