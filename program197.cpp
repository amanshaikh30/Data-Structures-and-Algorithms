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
    void Reverse()
    {
        int iStart = 0;
        int iEnd = iNo - 1;
        int temp = 0;

        while(iStart < iEnd)
        {
            temp = Arr[iStart];
            Arr[iStart] = Arr[iEnd];
            Arr[iEnd] = temp;

            iStart++;
            iEnd--;
        }
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

    aobj.Reverse();

    cout<<"Elements of Array after reversal : \n";
    aobj.Display();

    return 0;
} 
