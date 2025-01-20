#include<iostream>
using namespace std;

class Array
{
    public:
    int iNo;
    int *Arr;

    Array(int A)
    {
        iNo = A;
        Arr = new int[iNo];
    }
    ~Array()
    {
        delete []Arr;
    }
    void Accept()
    {
        int iCnt = 0;
        cout<<"Enter the values : \n";
        for(iCnt = 0; iCnt < iNo; iCnt++)
        {
            cin>>Arr[iCnt]; 
        }
    }
    void Display()
    {
        int iCnt = 0;
        cout<<"Values from the array are : \n";
        for(iCnt = 0; iCnt < iNo; iCnt++)
        {
            cout<<Arr[iCnt]<<"\n";
        }
    }
    int CountEven()
    {
        int iCnt = 0, iCount = 0;
        for(iCnt = 0; iCnt < iNo; iCnt++)
        {
            if(Arr[iCnt]%2 == 0)
            {
                iCount++;
            }
        }
        return iCount;
    }
};

int main() 
{
    int iLength = 0, iRet = 0;

    cout<<"Enter number of elements : \n";
    cin>>iLength;

    Array aobj(iLength);

    aobj.Accept();
    aobj.Display();
    iRet = aobj.CountEven();

    cout<<"Number of even elements are : "<<iRet<<"\n";

    return 0;
} 
