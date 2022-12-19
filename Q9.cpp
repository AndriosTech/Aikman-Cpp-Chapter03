#include<iostream>
using namespace std;

int main()
{
    int i, a, b;
    int pow = 1;
    cout<<"Enter base value"<<endl;
    cin>>a;
    cout<<"Enter power value"<<endl;
    cin>>b;

    for(i = 1; i<=b; i++)
    {
        pow = pow * a;
    }
    cout<<a<<" Power "<<b<<" = "<<pow;
}