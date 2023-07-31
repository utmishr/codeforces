#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k,H;
        cin>>n>>m>>k>>H;
        int a[n];
        int count=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(abs(a[i]-H)%k==0 && abs(a[i]-H)/k<=m-1 && a[i]!=H) 
            {
                count++;
                continue;
            }
        }
        cout<<count<<endl;
    }
}