#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int i, u;
    float s;
    for(s = 20, i = 6; i>=1; i--, s++)
    {
        if(i != 3)
        {
        cout<<setw(s);
        for(u = 1; u<=i; u++)
        {
            cout<<" *";
        }
        cout<<endl;
        }
        else
        {
           for(u = 1; u<=i; u++)
        {
            cout<<" *";
        }
        cout<<endl;
        }
       

    }
}