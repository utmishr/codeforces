#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int b,c,h;
        cin>>b>>c>>h;
        if(h+c>=b)
        {
            cout<<b+b-1<<endl;
        }
        else
        {
            cout<<h+c+h+c+1<<endl;
        }
    }
}