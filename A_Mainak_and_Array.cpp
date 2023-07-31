#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        int max=a[n-1]-a[0];
        for(int i=1;i<n;i++)
        {
            int m=a[(i - 1 + n) % n] - a[i];
            if(m>max)
            {
                max=m;
            }
        }
        for(int i=1;i<n;i++)
        {
            if(a[i]-a[0]>max)
            {
                max=a[i]-a[0];
            }
        }
        for(int i=0;i<n-1;i++)
        {
            if(a[n-1]-a[i]>max)
            {
                max=a[n-1]-a[i];
            }
        }
        cout<<max<<endl;
    }
}