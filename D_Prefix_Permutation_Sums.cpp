#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a[n];
        a[0] = 0;
        unordered_map<long long, long long> m;
        for (long long i = 1; i < n; i++)
        {
            cin >> a[i];
        }
        long long x=0;
        long long sum = 0,ye=0;
        for (long long i = 1; i < n; i++)
        {
            if (a[i] - a[i - 1] > n)
            {
                x = a[i] - a[i - 1];
                ye++;
            }
            else
            {
                m[a[i] - a[i-1]]++;
            }
        }
        long long flag=0,cou=0,y=0;
        for(auto i:m)
        {
            if(i.second>1)
            {
                y=i.first;
                cou++;
            }
            sum+=i.first;
            
        }
        for(auto i:m)
        {
            if(i.first==(n*(n+1))/2-sum )
            {
                flag=1;
            }
        }

        if((x==(n*(n+1))/2-sum && ye<=1) || (cou==1&&y==(n*(n+1))/2-sum) || (flag==0&& (n*(n+1))/2-sum <=n ))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}