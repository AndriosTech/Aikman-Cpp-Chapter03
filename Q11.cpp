#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int i, u, s;

    i = 6;
    s = 20;
    
    
    while(i>=1)
    {
       
        cout<<setw(s);
        u = 1;
        while(u <= i)
        {
             cout<<"*";
             u++;
        }
        s++;
        i--;
       
       cout<<endl;

    }
}