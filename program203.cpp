#include<iostream>
using namespace std;

int main()
{
    int No1 = 13;
    int No2 = 24;
    
    int Ans = 0;

    Ans = No1 & No2;
    cout<<"Bitwise AND : "<<Ans<<"\n";

    Ans = No1 | No2;
    cout<<"Bitwise OR : "<<Ans<<"\n";

    Ans = No1 ^ No2;
    cout<<"Bitwise XOR : "<<Ans<<"\n";

    return 0;
} 