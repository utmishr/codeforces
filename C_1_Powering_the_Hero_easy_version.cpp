#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll ans=0;
        priority_queue<ll> q;
        for(ll i=0;i<n;i++)
        {
            if(a[i]!=0)
            {
                q.push(a[i]);
            }
            else
            {
                if(!q.empty())
                {
                    ans+=q.top();
                    q.pop();
                }
            }
        }
        cout<<ans<<endl;
    }
}