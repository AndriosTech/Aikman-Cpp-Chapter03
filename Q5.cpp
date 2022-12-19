#include<iostream>
using namespace std;

int main()
{
    int i, odd;
    odd = 0;

    for(i = 1; i <= 10; i += 2)
    {
        odd = odd + i;

    }
    cout<<odd;
}