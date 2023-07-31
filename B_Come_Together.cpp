#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int xa,xb,xc,ya,yb,yc;
        cin>>xa>>ya>>xb>>yb>>xc>>yc;
        int total=0;
        if((xb>xa && xc>xa) || (xb<xa && xc<xa))
        {
            total=min(abs(xb-xa),abs(xc-xa));
        }
        if(yb>=ya && yc>=ya || (yb<ya && yc<ya))
        {
            total+=min(abs(yc-ya),abs(yb-ya));
        }
        cout<<total+1<<endl;
    }
}