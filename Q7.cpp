#include<iostream>
using namespace std;

int main()
{
    int i, odd;
    i = 1;
    odd = 0;

    do
    {
        odd = odd + i;
        i += 2;
    }
    while(i <= 10);
    cout<<odd;
}