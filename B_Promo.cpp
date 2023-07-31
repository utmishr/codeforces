#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long n,q;
    cin>>n>>q;
    long long a[n];
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    long long pre[n];
    pre[0]=a[0];
    for(long long i=1;i<n;i++)
    {
        pre[i]=a[i]+pre[i-1];
    }
    cout<<endl;
    while(q--)
    {
        long long sum=0;
        long long x,y;
        cin>>x>>y;
        if(n==x)
        {
            cout<<pre[y-1]<<endl;
        }
        else
        {
            cout<<pre[n-x-1+y]-pre[n-x-1]<<endl;
        }
    }
}