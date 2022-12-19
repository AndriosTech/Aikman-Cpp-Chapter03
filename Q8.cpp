#include<iostream>
using namespace std;

int main()
{
    int even, i;
    i = 1;
    even = 1;

    while(i <= 12)
    {
        if(i % 2 == 0)
        {
        even = even * i;
        }
        i ++;

    }
    cout<<"the sum is "<<even;

}