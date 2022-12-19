#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int u, i, s;
    i = 8;
    s = 20;

    do
    {
        
       
        u = 8;
        if(i >= 5)
        {
             cout<<setw(s);
        while(u >= i)
        {
            cout<<" Y";
            u--;
        }
        s--;
        }
        else
        {
            u = 1;
           
            
            
            cout<<setw(s);
            while(u <= i)
            {
                cout<<"  X";
                u++;
            }
            
           s++;
        
           
        }
        cout<<endl;
        i--;
    }
    while(i >= 1);
}