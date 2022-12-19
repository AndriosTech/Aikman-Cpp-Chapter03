#include<iostream>
using namespace std;

int main()
{
    int i , odd;
    i = 1;
    odd = 0;

    while(i <= 10)
    {
        odd = odd + i;
        i += 2;
    }
    cout<<odd;
}